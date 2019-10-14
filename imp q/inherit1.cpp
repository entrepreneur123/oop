#include<iostream>
using namespace std;
class student{
	protected:
		float eng,total,avg;
	public:
	void getmarks()
	{
	cout<<"Enter marks in English:"<<endl;
	cin>>eng;	
	}

};

class computer_science : public student{
	protected:
		float it,cp,network;
	public:
	void getData()
		{
			cout<<"Enter marks in IT:"<<endl;
			cin>>it;
			cout<<"Enter marks in C Programming:"<<endl;
			cin>>cp;
			cout<<"Enter marks in Network:"<<endl;
			cin>>network;	
		}
		void calc_avg(){
			total=eng+it+cp+network;
			avg=total/4;
			cout<<"Average ="<<" "<<avg<<endl;
		}
};

class mathematics : public student{
	protected:
		float calculus,stat,linear;
	public:
	void getData()
		{
			cout<<"Enter marks in Calculus:"<<endl;
			cin>>calculus;
			cout<<"Enter marks in Statistics:"<<endl;
			cin>>stat;
			cout<<"Enter marks in Linear Algebra:"<<endl;
			cin>>linear;	
		}
		void calc_avg(){
			total=eng+calculus+stat+linear;
			avg=total/4;
			cout<<"Average ="<<" "<<avg<<endl<<endl;
		}
};
 int main(){
 	computer_science cs;
 	mathematics m;
 	cout<<"Data of Computer Science Student:"<<endl;
 	cs.getmarks();
 	cs.getData();
 	cs.calc_avg();
 	cout<<"Data of Mathematics Student:"<<endl;
 	m.getmarks();
 	m.getData();
 	m.calc_avg();
 	return 0;
 	
 }

