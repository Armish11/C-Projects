#include<iostream>
#include<fstream>
using namespace std;
class Bank
{
	private:
		string neww; // Variable to store the new value for update
		int a; // Input option for banking operations
		long accno; // Account number
		string cnic; // CNIC
		double amm; // Amount to deposit
		double am; // Amount to withdraw
		double c=20000; // Initial balance
		double d; // Updated balance after deposit
		double e; // Updated balance after withdrawal
	public:
		void enter()
	{
		
		// Creating a file stream for writing
		ofstream write("Banking system.txt",ios::app);
	
					// Displaying menu options

	cout<<"\n\tWelcome to our Banking System ."<<endl;
	cout<<"\nEnter 1 for  your Bank Account Details."<<endl;
	cout<<"\nEnter 2 for depositing amount. "<<endl;
	cout<<"\nEnter 3 for withdrawing amount."<<endl;
	cout<<"\n Enter 4 for terminating the account."<<endl;
	cout<<"\nEnter 5 for updating the acccount ."<<endl;
	cin>>a;
			// Writing menu options to file
    write<<"\tWelcome to our Banking System ."<<endl;
	write<<"\nEnter 1 for  your Bank Account Details."<<endl;
	write<<"\nEnter 2 for depositing amount. "<<endl;
	write<<"\nEnter 3 for withdrawing amount."<<endl;
	write<<"\n Enter 4 for terminating the account."<<endl;
	write<<"\nEnter 5 for updating the acccount ."<<endl;
		 // Handling different options
	if(a==1)
	{
		// Gathering account details

		cout<<"\nEnter your account no :"<<endl;
		cin>>accno;
		cout<<"\nEnter your CNIC :"<<endl;
		cin>>cnic;
		// Displaying account details
		cout<<"\nYour account number is "<<accno;
		cout<<"\nYour cnic is "<<cnic;
		cout<<"\nName : Ahmad Sohaib ";
		cout<<"\nAccount type: Saving Account ";
		cout<<"\nTotal Balance : "<<c;
}

		if(a==2)
	{
		// Depositing amount
		cout<<"\nEnter the amount you want to deposit "<<endl;
		cin>>amm;
	    write<<"\nEnter the amount you want to deposit "<<endl;
		write<<amm;

		updatedd();
	}
	if(a==3)
	{
		// Withdrawing amount
		cout<<"\nEnter the amount you want to withdraw"<<endl;
		cin>>am;
			write<<"\nEnter the amount you want to withdraw"<<endl;
		write<<am;
		// Checking if withdrawal is possible
		if(am>c)
		{
			cout<<"\nSorry your current balance is not enough for this amount"<<endl;
		write<<"\nSorry your current balance is not enough for this amount"<<endl;
		
		}
		else
		{
			// Performing withdrawal and updating account balance
			cout<<"\nWithdrawal has been successful"<<endl;
			write<<"\nWithdrawal has been successful"<<endl;
			updateww();
		}
	}
	if(a==4)
	{
		// Terminating the account
		cout<<"\nEnter your account no "<<endl;
		cin>>accno;
		cout<<"\nEnter your cnic "<<endl;
		cin>>cnic;
		cout<<"\nYour account has been terminated successfully "<<endl;
		write<<"\nEnter your account no "<<endl;
		write<<accno;
		write<<"\nEnter your cnic "<<endl;
		write<<cnic;
		write<<"\nYour account has been terminated successfully "<<endl;
		
	}
	if(a==5)
	{
		//Updating the account type
		
		cout<<"\nEnter the new account type "<<endl;
		cin>>neww;	
		
		write<<"\nEnter the new account type  "<<endl;
		write<<neww;
	}
	

}
 void updatedd ()
 {
 		ofstream write("Banking system.txt",ios::app);
 	d=c+amm;
 	cout<<"\nYour account balance have been updated it is now "<<d;
 	write<<"\nYour account balance have been updated it is now "<<d;
 }
 

 void updateww()
 {
 		ofstream write("Banking system.txt",ios::app);
  e=c-am;
 	cout<<"\nYour current balance is now : "<<e;
 	write<<"\nYour current balance is now : "<<e;
 }
	
};
int main()
{

	Bank b;//creating the object b of Bank class
   b.enter();//calling the enter function

   return 0;	
}
