#include<iostream>
#include<cstdlib>
using namespace std;
class game
{
    public:
		int sc1=0, sc2=0, score1, score2;
		void checkWin(int s1, int s2)
		{
			score1 += s1;
			score2 += s2;
		}
		void scoring(int s1, int s2)
		{
			sc1 = s1;
			sc2 = s2;
			if(sc1>sc2)
			{
				cout<<"\nHuman won.";
				checkWin(1,0);
			}
			else if(sc2>sc1)
			{
				cout<<"\nComputer won.";
				checkWin(0,1);
			}
			else
			{
				cout<<"\nDraw.";
				checkWin(0,0);
			}
		}

};
class rps:public game
{
	public:
		int a,b;
		void rules(int ar, int br)
		{
			a = ar;
			b = br;
			if(b==1)
			{
				if(a==3)
				{
					scoring(0,1);
				}
				else if(a==2)
				{
					scoring(1,0);
				}
			}
			else if(b==2)
			{
				if(a==3)
				{
					scoring(0,1);
				}
				else if(a==1)
				{
					scoring(1,0);
				}
			}
			else
			{
				if(a==1)
				{
					scoring(0,1);
				}
				else if(a==2)
				{
					scoring(1,0);
				}
			}
		}
};
int main()
{
	int games=0;
	rps game1;
	do
	{
		int bm, am = rand()%3 + 1;
		cout<<"\nEnter your choice:\n\t1. Rock\n\t2. Paper\n\t3. Scissor\n\t";
		cin>>bm;
		cout<<"\nComputer selected: "<<am<<endl;
		game1.rules(am,bm);
		cout<<"\n\t\t\t\t\tTrial #: "<<games;
		games++;
		cout<<"\n\t\t\t\t\tTotal human winnings: "<<game1.score1;
	}
	while(game1.score1<=game1.score2);
	return 0;
}
