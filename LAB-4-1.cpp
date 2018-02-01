#include<iostream>
using namespace std;
inline int gcd_normal(int a, int b)
{
	if(a == 0)
	{
		return b;
	}
	return gcd_normal(b%a, a);
}
int main()
{
    int ai, bi;
    cout<<"\nEnter the value of a: ";
    cin>>ai;
    cout<<"\nEnter the value of b: ";
    cin>>bi;
    cout<<"\nGCD is: "<<gcd_normal(ai,bi);
    return 0;
}

