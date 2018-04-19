#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream f;
	f.open("demo.txt");
	int wc = 0;
	while (!f.eof())
	{
		f.get();
		wc++;
	}
	cout << "Word Count: " << wc << endl;
	cout << "Size: " << wc << " bytes" << endl;
	return 0;
}
