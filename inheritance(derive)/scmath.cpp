#include<iostream>
using namespace std;

	class student{
		protected:
		int roll_no;
		char name[20];
		public:
			void get_stdetails()
			{
				cout<<"Enter roll no:";
				cin>>roll_no;
				cout<<"Enter name:";
				cin>>name;
			}
	};
	
	class computer_science:public student
	{
		float physics,chemistry,english;
		float avg;
		public:
				void get_marks_cs(){
				cout<<"Enter marks in physics:";
				cin>>physics;
				cout<<"Enter marks in chemistry:";
				cin>>chemistry;
				cout<<"Enter marks in english:";
				cin>>english;
			}
			
			void display_cs(){
				avg=(physics+chemistry+english)/3;
				cout<<"CS class Details"<<endl;
				cout<<"Roll no:"<<roll_no<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Average:"<<avg<<endl;
			}
		
	};
	
	class mathematics:public student
	{
		float mathematics,biology,nepali;
		float avge;
		public:
			void get_marks_math(){
				cout<<"Enter marks in physics:";
				cin>>mathematics;
				cout<<"Enter marks in chemistry:";
				cin>>biology;
				cout<<"Enter marks in english:";
				cin>>nepali;
			}
			
			void display_math(){
				avge=(mathematics+biology+nepali)/3;
				cout<<"Math class Details"<<endl;
				cout<<"Roll no:"<<roll_no<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Average:"<<avge<<endl;
			}
		
	};
	int main(){
		computer_science s1;
		mathematics s2;
		cout<<"For Computer science"<<endl;
		s1.get_stdetails();
		s1.get_marks_cs();
		s1.display_cs();
		cout<<endl;
		cout<<"For Mathematics"<<endl;
		s2.get_stdetails();
		s2.get_marks_math();
		s2.display_math();
		return 0;
}
