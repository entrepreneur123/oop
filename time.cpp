/*write a program that has a class to represent time.the class should have constructor to initialize data members hours,minute,second  to 0 to initialize them to values passed as
arguments.the class should have member function to add timeobjects and return the result as time object their should be another reuslt to display the result in 24 hour format.*/



#include<iostream>
using namespace std;
class time
{
private:
int h,m,s;
public:
time(){
h=0;
m=0;
s=0;
}
time(int a,int b,int c){

h=a;
m=b;
s=c;
}
time addtime(time);
void showTime();
};

time time::addtime(time t)
{
time temp;
temp.s=s+t.s;
temp.m=temp.s/60;
temp.s=temp.m+m+t.m;
temp.h=temp.m/60;
temp.m=temp.m%60;
temp.h=temp.h+h+t.h;
return temp;
}
void time::showTime()
{

cout<<h<<":"<<m<<":"<<s<<endl;
}
int main(){

time t1(3,0,0),t2(4,0,0),t3;
t1.showTime();
t2.showTime();
t3=t2.addtime(t1);
t3.showTime();
}
