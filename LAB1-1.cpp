#include<iostream>
using namespace std;
class calc
{
	public:
		int a, b;
	public:
		void add(int a, int b)
		{
			cout<<"Addition is: "<< a+b<<"\n";
		}
		void sub(int a, int b)
		{
			cout<<"Subtraction is: "<< a-b<<"\n";
		}
		
};
int main()
{
	calc Casio;
	calc Orpat;
	Casio.add(1, 2);
	Orpat.sub(2, 1);
	cout<<"\n\n\nName: Akhzar Farhan\nRoll #: 161210006";
	return 0;	
}
