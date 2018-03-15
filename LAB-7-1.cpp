#include<iostream>
#include<cstdlib>
using namespace std;
class game
{
    public:
		int h_score = 0, c_score = 0;
		void scoring(int s1, int s2)
		{
			h_score += s1;
			c_score += s2;
			result(h_score, c_score);
		}
		void result(int hs, int cs)
		{
			if(hs >= 3)
			{
				cout<<"\nHuman Won\n";
			}
			else if(cs >= 3)
			{
				cout<<"\nComputer Won\n";
			}
		}

};
class ttt:public game
{
	public:
		int uI1, uI2, cI1, cI2, board[3][3];
		void gameStart()
		{
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
					board[i][j] = -1;
				}
			}
		}
		void userInput(int uI)
		{
			uI1 = uI%10;
			uI2 = uI - (uI%10);
			cout<<"You opted: "<<uI<<" th location.\n";
			board[uI1][uI2] = 1;
			checkWinning();
		}
		void compInput(int cI)
		{
			cI1 = cI%10;
			cI2 = cI - (cI%10);
			cout<<"Computer opted: "<<cI<<" th location.\n";
			board[cI1][cI2] = 0;
			checkWinning();
		}
		void checkWinning(void)
		{
			for(int i=0; i<3; i++)
			{
				if(board[i][0] != -1)
				{
					if(board[i][0] == board[i][1] == board[i][2])
					{
						if(board[i][0] == 1)
						{
							scoring(1,0);
						}
						else
						{
							scoring(0,1);
						}
					}
					else
					{
						continue;
					}
				}
			}
			for(int j=0; j<3; j++)
			{
				if(board[0][j] != -1)
				{
					if(board[0][j] == board[1][j] == board[2][j])
					{
						if(board[0][j] == 1)
						{
							scoring(1,0);
						}
						else
						{
							scoring(0,1);
						}
					}
					else
					{
						continue;
					}
				}
			}
			if(board[0][0] == board[1][1] == board[2][2])
			{
				if(board[0][0] == 1)
				{
					scoring(1,0);
				}
				else
				{
					scoring(0,1);
				}
			}
			else if(board[2][0] == board[1][1] == board[0][2])
			{
				if(board[2][0] == 1)
				{
					scoring(1,0);
				}
				else
				{
					scoring(0,1);
				}
			}
		}
};
int main()
{
	int huInput, coInput, inputs{0,1,2,10,11,12,20,21,22};
	cout<<"Enter your choice between 00 to 22: "<<endl;
	cin>>huInput;
	coInput = inputs[rand()%10];
	ttt ttt1;
	ttt1.gameStart();
	ttt1.userInput(huInput);
	ttt1.compInput(coInput);
}
