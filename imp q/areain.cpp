#include<iostream>
using namespace std;

class shape{
	protected:
		float b,h,area;
	public:
		void getData()
		{
			cout<<"Enter the value of b:"<<endl;
			cin>>b;
			cout<<"Enter the value of h:"<<endl;
			cin>>h;
		}
		
};

class triangle : public shape
{
	public:
 void calcArea(){
 	area=0.5*b*h;
 }	
 void display(){
 	cout<<"Area of triangle is:"<<" "<<area<<endl;
 }
};

class rectangle : public shape
{
	public:
 void calcArea(){
 	area=b*h;
 }	
 void display(){
 	cout<<"Area of rectangle is:"<<" "<<area<<endl;
 }
};

int main(){
	triangle t;
	rectangle r;
	cout<<"For Triangle:"<<endl;
	t.getData();
	t.calcArea();
	t.display();
	cout<<"For Rectangle:"<<endl;
	r.getData();
	r.calcArea();
	r.display();
	return 0;
	
}

