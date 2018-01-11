#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
		char type;
		long int balance = 10000;
		int a, aNumber;
		string name;
		long int de, wi;
		void query(int aNumber, int a, string name, long int wi, long int de)
		{
			switch(a)
			{
				case 1:
					details();
					break;
				case 2:
					bCheck();
					break;
				case 3:
					withdraw();
					break;
				case 4:
					deposit();
			}
		}
	public:
		void query1(int n, int b, string nam, long int w, long int d)
		{
		    aNumber = n;
		    a = b;
		    name = nam;
		    wi = w;
		    de = d;
			query(n, b, nam, w, d);
		}
		void query2(string namee)
		{
		    name = namee;
			iValue();
			cout<<"\nCongrats!\nYour account successfully created.";
		}
	private:
		void iValue()
		{
			balance = 0;
		}
		void deposit()
		{
			balance = balance+de;
			cout<<"Updated balance is: "<<balance;
		}
		void bCheck()
		{
			cout<<"\nYour account balance is: "<<balance<<" INR\n";
		}
		void withdraw()
		{
		    if(wi <= balance)
            {
                balance = balance-wi;
                cout<<"\nUpdated balance is: "<<balance<<" INR\n";
            }
			else
            {
                cout<<"\nInsufficient fund.\n";
            }
		}
		void details()
		{
			cout<<"\nName: "<<name<<"\nAccount number: "<<aNumber<<"\nBalance: "<<balance<<" INR\n";
		}
};
int main()
{
	string name, type;
	int a, v, aNumber;
	long int de, wi, balance;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\nPress 1 for existing user or any integer for new.";
	cin>>v;
	bank oldUser, newUser;
	if(v == 1)
    {
        cout<<"\nEnter your account number: ";
        cin>>aNumber;
        cout<<"\nPress\n\t1 for account details.\n\t2 for balance enquiry.\n\t3 to withdraw money.\n\t4 to deposit money.\n";
        cin>>a;
        if(a == 3)
        {
            cout<<"\nEnter the amount you wish to withdraw: ";
            cin>>wi;
            oldUser.query1(aNumber, a, name, wi, 0);
        }
        else if(a == 4)
        {
            cout<<"\nEnter the amount you wish to deposit: ";
            cin>>de;
            oldUser.query1(aNumber, a, name, 0, de);
        }
        else
        {
            oldUser.query1(aNumber, a, name, 0, 0);
        }
    }
    else
    {
        newUser.query2(name);
    }
	return 0;
}
