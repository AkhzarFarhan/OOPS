#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, imag;
	public:
		Complex():real(0), imag(0){}


		Complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		Complex operator +(Complex c2)
		{
			Complex result;
			result.real = real + c2.real;
			result.imag = imag + c2.imag;
			return result;
		}
		void print()
		{
			cout<<real<<" +i"<<imag<<"\n\nCoded by: AKHZAR FARHAN\nRoll #: 161210006";
		}
};

int main()
{
	Complex c1(1, 2), c2(3, 4);
	Complex c3 = c1+c2;
	c3.print();
	return 0;
}
