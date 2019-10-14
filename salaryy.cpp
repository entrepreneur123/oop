/*write aprogram to input the salary of person and calculate the HRA and DA according to the following condditions.
salary			HRA		DA
<5000			5%		2%
5000-10,000		10%		5%
10001-15000		15%		8%
>15000			17%		10%
*/
#include<iostream>
using namespace std;
int main(){
	float salary;
	float hra,da;
	cout<<"enter the salary:";
	cin>>salary;
	if(salary<5000){
		hra=0.05*salary;
		da=0.02*salary;
	}
	else if(salary>5000&&salary<=10000){
		hra=0.1*salary;
		da=0.05*salary;
}
	else if(salary>=10001&&salary<15000){
		hra=0.15*salary;
		da=0.08*salary;
	}
	else{
		hra=0.17*salary;
		da=0.10*salary;
	}
	cout<<"HRA="<<hra<<"\n"<<"DA="<<da;
}


