#include<iostream>
using namespace std;
class Point
{
	private:
		static int count;  //static member variable
		int x,y;
		public: 
			Point ()
			{
					count++;
			}
			
			static void show ()  //static member function
			{
				cout<<"count="<<count<<endl;
			}
			void setCount(int a)
			{
			count=a;
			}
		
};
int Point :: count; 
int main()
{
	Point p1,p2,p3;
	Point :: show();//accessing static function
	Point :: show();
	Point :: show();
	p2.setCount(10);
	Point :: show();
	return 0;
}
