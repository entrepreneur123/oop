/*3.   Define a class distance with
Data members:
-     Feet in inch
-     Inches in float
Member function:
-     To read data member
Friend function:
-     To display distance in feet'-inches" format
-     To add two distance object and returning distance object*/

#include<iostream>
#include<iomanip>
using namespace std;
class dist
{
	private:
		int feet,inches;
	public:
		void readData();
		friend dist display(dist);
		friend dist add (dist,dist);
};
void dist :: readData()
{
	cout<<"Enter the distance in feet and inches"<<endl;
	cin>>feet>>inches;
 } 
 dist display(dist c)
 {
 	cout<<c.feet<<"feet"<<setw(8)<<c.inches<<"inches"<<endl<<endl;;
 	return c;
 }
 dist add (dist x, dist y)
	dist t;
 	 t.inches=x.inches+y.inches;
 	 t.feet=t.inches/12;
	 t.inches=t.inches%12;
	 t.feet=x.feet+t.feet+y.feet;
	 return t;
 }
 int main()
 {
 	dist d1,d2,d3;
 	d1.readData();
 	cout<<"For 1st distance"<<endl;
 	display(d1);
 	d2.readData();
 	cout<<"For 2nd distance"<<endl;
 	display(d2);
 	d3=add(d1,d2);
 	cout<<"After addition"<<endl;
 	display(d3);
 	return 0;
}


