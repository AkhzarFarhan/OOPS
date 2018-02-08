#include<iostream>
#include<cmath>
using namespace std;
class bank
{
    private:
		int time;
		float rate;
		float balance;
		void simpleInterest(int time, float rate, float balance)
		{
			cout<<"\nSimple Interest is: "<<balance*rate*time/100<<endl;
		}
		void compoundInterest(int time, float rate, float balance)
		{
			cout<<"\nCompound Interest is: "<<balance*pow((1+rate/1000),time)<<endl;
		}
	public:
		float bm;
        bank(int t, float r, float b)
        {
			time = t;
			rate = r;
			balance = b;
        }
        void query()
        {
			user u1(bm);
			simpleInterest(time, rate, balance);
			compoundInterest(time, rate, balance);
        }
};
class user
{
	private:
		float bu;
	public:
		friend class bank;
		user(float bm)
		{
			bu = bm;
			cout<<"\nNew user created by AKHZAR FARHAN"<<endl;
		}
};
int main()
{
	int tm, bm;
	float rm;
	cout<<"\nEnter the time: "<<endl;
	cin>>tm;
	cout<<"\nEnter the rate: "<<endl;
	cin>>rm;
	bank b(tm, rm, bm);
	cout<<"\nEnter the initial loan amount: "<<endl;
	cin>>b.bm;
	b.query();
}
