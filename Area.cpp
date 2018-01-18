#include<iostream>
using namespace std;
class Area
{
    private:
		int len, width, area;
	public:
		Area():len(0), width(0)
		{
			cout<<"Without passing argument, ";
		}
		Area(int l, int w)
		{
			len = l;
			width = w;
		}
		int product()
		{
			area = len*width;
			return area;
		}
		void print()
		{
			cout<<"Area is: "<<product()<<"\n\nCoded by: AKHZAR FARHAN\nRoll #: 161210006\n\n";
		}
};
int main()
{
	int a, b;
	cout<<"\nEnter length: ";
	cin>>a;
	cout<<"\nEnter breadth: ";
	cin>>b;
	Area rectangle, rectangle2(a, b);
	rectangle.print();
	rectangle2.print();
	return 0;

}
