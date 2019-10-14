/*declare the class student  with
data member
-rollno
-name
-marks in 5 subject
-total
-percentage
member function:
-input()to input data
-display() to display data
-calavg() to calculate average
enter the data for five students.
*/
#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	private:
		int roll;
		float marks[10],total=0,percent;
		char name[20];
		public:
			void input();
			void display();
			void calAvg();
};
void student::input(){
	cout<<"enter roll:";
	cin>>roll;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter marks of 5 subject:";
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
		total+=marks[i];
		
	}
	percent=total/5;
}
void student::display(){
	cout<<"roll:"<<setw(8)<<roll<<endl;
	cout<<"name:"<<setw(8)<<name<<endl;
	cout<<"marks of 5 subjects are :"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<marks[i]<<"";
		}
		cout<<"\ntotal="<<setw(8)<<total<<endl;
		cout<<"\npercentage="<<setw(8)<<percent<<"%"<<endl;
	}
	void student::calAvg(){
		float avg;
		avg=total/5;
		cout<<"Average="<<setw(8)<<avg;
	}
	int main(){
		student s1[5],s2;
		for(int i=0;i<2;i++)
		{
			cout<<"\nenter data of student"<<i+1<<endl;
			s1[i].input();
		}
		cout<<endl;
		for(int i=0;i<2;i++)
		{
			cout<<"\nData of student"<<i+1<<endl;
			s1[i].display();
			s1[i].calAvg();
			cout<<endl;
		}
		return 0;
	}
	

		
	 
	

