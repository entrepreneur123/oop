#include<iostream>
using namespace std;
class shape
{
	protected:
		int base,height,length,breath;
		public:
			void setbase(b){
				base=b;
			}
			void setheight(h){
				height=h;
			}
			void setlength(l){
				length=l;
				
			}
			void setbreath(br){
				breath=br;
			}
};
class triangle:public shape
{
	float getArea(){
		return(0.5*base*heigth);
	}
};
class rectangle:public shape
{
	float getArea(){
		return(length*breath);
	}
};
int main(){
	rectangle r;
	triangle t;
	r.setlength(10);
	r.setbreath(2);
	t.setbase();
	t.setheight();
	cout<<"area of rectangle"<<t.getArea()<<endl;
	cout<<"area of triangle"<<t.getArea()<<endl;
	return 0;
	}

