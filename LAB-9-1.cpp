#include<iostream>
#include<fstream>
#include<string>
using namespase std;
class database
{
	private:
		int roll, marks;
		string name;
	public:
		void filehandling()
		{
			fstream f;
			string filename = "database.txt";
			f.open(filename, ios::in);
			if(f.is_open())
			{

			}

		}
};
