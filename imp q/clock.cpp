#include<iostream>
using namespace std;

class clock{
	protected:
		int model_no;
		float price;
		char manufacturer[20];
		public:
			void getInfo(){
				cout<<"Enter name of manufacturer :"<<endl;
				cin>>manufacturer;
				cout<<"Enter model no. :"<<endl;
				cin>>model_no;
				cout<<"Enter price of clock:"<<endl;
				cin>>price;
			}
			void display();
	
};

class wall_clock :public clock{
	protected:
		int hh,min,sec;
	public:
		wall_clock(){
			manufacturer[25]=NULL;
			model_no=NULL;
			price=0.0;
			hh=0;
			min=0;
			sec=0;
		}
		void getTime(){
			cout<<"Enter time"<<endl;
			cin>>hh>>min>>sec;
		}
	void showTime(){
		cout<<"The time is:"<<endl;
		cout<<hh<<":"<<min<<":"<<sec<<endl<<endl;
	}
};
void clock :: display()
{
	cout<<"Manufacturer:" <<" "<<manufacturer<<endl;
	cout<<"Model no. :"<<" "<<model_no<<endl;
	cout<<"Price of clock:"<<" "<<price<<endl;
}

int main(){
	wall_clock w1 ,w2;
	cout<<"For clock 1"<<endl;
	w1.getInfo();
	w1.getTime();
	w1.display();
	w1.showTime();
	cout<<"For clock 2"<<endl;
	w2.getInfo();
	w2.getTime();
	w2.display();
	w2.showTime();
	return 0;
}
