/*define a class distance with Data members:
-feet in inch
-inches in float
member function:
-to read data member
friend function:
-to display distance in feet-inches format
-to add two distance object and returning diatance object*/
#include<iostream>
using namespace std;
class height
{
    int feet,inch;
    public:
        void set()
        {
            cout<<"Enter the height in feet and inch ";
            cin>>feet>>inch;
        }
        friend height sum(height,height);
        friend height display(height);
};
height display(height h1)
{
    cout<<"The sum of height is "<<h1.feet<<" feet "<<h1.inch<<" inch ";
    return h1;
}
height sum(height a,height b)
{
    height h;
    h.inch=a.inch+b.inch;
    h.feet=h.inch/12;
    h.inch=h.inch%12;
    h.feet=h.feet+a.feet+b.feet;
    return h;
}
int main()
{
    height a,b,c;
    a.set();
    b.set();
    c=sum(a,b);
    display(c);
    return 0;
}
