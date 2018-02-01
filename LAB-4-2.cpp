#include<iostream>
using namespace std;
class c
{
	private:
		float a,b;
	public:
		friend void conv(c&, int c);
		void display()
		{
			cout<<"\nInput Units :"<<a;
			cout<<"\nConverted Unit :"<<b<<endl;
		}

};

void conv(c& x, int c)
{
	cout<<"Enter the value\n";
	cin>>x.a;
	if(c==1)
		x.b=x.b*2.56;
	else if(c==2)
		x.b=x.a/2.56;
	else if(c==3)
		x.b=x.a*1.609;
	 else if(c==4)
		x.b=x.a/1.609;
}

int main()
{
	c object;
	int n;
	cout<<"\nEnter operation to perform \n"<<"\t1. Inches to Cm";
	cout<<"\n\t2. Cm to Inches"<<"\n\t3. Miles to Km"<<"\n\t4. Km to Miles\n";
	cin>>n;
	conv(object,n);
	object.display();

return 0;
}
