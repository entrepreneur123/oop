#include<iostream>
using namespace std;
	class shape
	{
	protected:
		int base,height,length,breath;
		public:
			void get_sdetails(){
//				cout<<"enter the length of rectangle";
//				cin>>length;
//				cout<<"enter the breath of rectangle";
//				cin>>breath;
//				cout<<"enter the base of triangle";
//				cin>>base;
//				cout<<"enter the height of triangle";
//				cin>>height;
//		 		
			}	
		
	};
	class rectangle:public shape{
		int length,breath;
		int area;
		public:
			void get_data_rectangle(){
				cout<<"enter the length of rectangle";
				cin>>length;
				cout<<"enter the breath of rectangle";
				cin>>breath;
			}
			void display_rectangle(){
				area=(length*breath);
				cout<<"Area"<<area<<endl;
				cout<<"length"<<length<<endl;
				cout<<"breath"<<breath<<endl;
			}
	};
	class triangle:public shape{
		int base,height;
		int areaa;
		public:
			void get_data_triangle(){
				cout<<"enter the base of triangle";
				cin>>base;
				cout<<"enter the height of triangle";
				cin>>height;
			}
			void display_triangle(){
				areaa=(0.5*base*height);
				cout<<"Area"<<areaa<<endl;
				cout<<"base"<<base<<endl;
				cout<<"height"<<height<<endl;
			}
	};
	int main(){
		rectangle r;
		triangle t;
		cout<<"for rectangle"<<endl;
		r.get_sdetails();
		r.get_data_rectangle();
		r.display_rectangle();
		cout<<"for triangle"<<endl;
		t.get_sdetails();
		t.get_data_triangle();
		t.display_triangle();
		return 0;
	}
