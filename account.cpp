/*write a program to create a class account with data members account no,account holder's name and balance.add member function 
create an object of the account class and show all operation with this
*/

#include<iostream>
using namespace std;
class account{
	private:
		int account_no;
		char name[20];
		float balance;
		public:
			void createAccount();
			void deposite();
			void withdraw();
			void balanceEnquiry();
			
};
void account::createAccount(){
	cout<<"enter your name";
	cin>>name;
	cout<<"enter account_no";
	cin>>account_no;
	cout<<"enter the balance";
	cin>> balance;
}
void account::deposite(){
	float depositeamt;
	cout<<"enter the balance to deposite";
	cin>>depositeamt;
	balance=balance+depositeamt;
}
void account::withdraw(){
	float withdrawamt;
	cout<<"enter the amount to withdraw";
	cin>>withdrawamt;
	if(withdrawamt>balance){
		cout<<"balance cannot be withdrawn";
	}
	else{
		balance=balance-withdrawamt;
		
	}
	}
void account::balanceEnquiry(){
	cout<<"the balance in your account_no"<<account_no<<"is"<<balance<<"\n";
}
int main(){
	account b1;
	b1.createAccount();
	int choice=1;
	while(choice!=0){
		cout<<"1.deposite"<<"\n"<<"2.withdraw"<<"\n"<<"3.balanceenquiry"<<"\n";
		cout<<"enter your choice(1-3):";
		cin>>choice;
		switch(choice){
			case 1:
				b1.deposite();
				break;
			case 2:
				b1.withdraw();
				break;
			case 3:
				b1.balanceEnquiry();
				break;
			case 4:
				cout<<"exiting..";
		}
	}

}



