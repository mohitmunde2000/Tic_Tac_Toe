#include<iostream>
using namespace std;
char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
class game
{
	public:
	    void clear()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					mat[i][j]=5;
				    
				}
			}
			player='X';
			n=0;
		}

		void draw()
		{
			cout<<"   ----------------\n";
			for (int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"   "<<mat[i][j]<<"   ";
				}
				cout<<endl;
			}
		}
		void input()
		{
			int a;
			cout<<"   ----------------\n";
			cout<<"   It's "<<player<<" Turn !\n   Press Any Number Where You want To Mark: ";
			cin>>a;
			cout<<"\n";
		if(a==1)
		{
			if(mat[0][0]!='X'&&mat[0][0]!='O')
			{
				mat[0][0]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
		if(a==2)
		{
			if(mat[0][1]!='X'&&mat[0][1]!='O')
			{
				mat[0][1]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
		if(a==3)
		{
			if(mat[0][2]!='X'&&mat[0][2]!='O')
			{
				mat[0][2]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
		if(a==4)
		{
			if(mat[1][0]!='X'&&mat[1][0]!='O')
			{
				mat[1][0]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
	    	if(a==5)
		{
			if(mat[1][1]!='X'&&mat[1][1]!='O')
			{
				mat[1][1]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}
		}
        if(a==6)
		{
			if(mat[1][2]!='X'&&mat[1][2]!='O')
			{
				mat[1][2]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
	   	if(a==7)
		{
			if(mat[2][0]!='X'&&mat[2][0]!='O')
			{
				mat[2][0]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
	    if(a==8)
		{
			if(mat[2][1]!='X'&&mat[2][1]!='O')
			{
				mat[2][1]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
			if(a==9)
		{
			if(mat[2][2]!='X'&&mat[2][2]!='O')
			{
				mat[2][2]=player;
			}
			else
			{
				cout<<"Try Again!\n";
				input();
			}

	    }
		}
		void player2()
		{
			if(player=='X')
			player='O';
			else
			player='X';
		}
		char win()
		{
			if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X' )
			return 'X';

			if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X' )
		    return 'X';

			if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X' )
			return 'X';

			if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X' )
		    return 'X';

			if(mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X' )
			return 'X';

			if(mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X' )
		    return 'X';

			if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X' )
		    return 'X';

			if(mat[2][0]=='X' && mat[1][1]=='X' && mat[0][2]=='X' )
			return 'X';

		   if(mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O' )
			return 'O';

			if(mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O' )
			return 'O';

			if(mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O' )
			return 'O';

			if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O' )
		  	return 'O';

			if(mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O' )
			return 'O';

			if(mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O' )
				return 'O';

			if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O' )
				return 'O';

			if(mat[2][0]=='O' && mat[1][1]=='O' && mat[0][2]=='O' )
				return 'O';

			return ('/');

		}
		
};
int main()
{
	game g1;
	char ch;
    do
    {
    	cout<<"        O-X \n";
    	cout<<"   ---------------\n";
		cout<<"   | TIC TAC TOE |\n";
		cout<<"   ---------------\n";
		cout<<endl<<endl;
		cout<<"Use this reference for Input:  \n";
		cout<<"     1    2    3"<<endl<<"     4    5    6"<<endl<<"     7    8    9"<<endl;
		n=0;
    	g1.clear();
    	//g1.draw();
    while(1)
    {
    	n++;
    	g1.input();
    	g1.draw();
    	if(g1.win()=='X')
    	{
    		cout<<"Player 1 Won!\n"<<endl;
    		break;
		}
		else if(g1.win()=='O')
    	{
    		cout<<"Player 2 Won!\n"<<endl;
    		break;
		}
		else if(g1.win()=='/' && n==9)
    	{
    		cout<<"Draw!\n"<<endl;
    		break;
		}
		g1.player2();
	}
	n=0;
	cout<<"Do You Want To Play Again? press (y/n)"<<endl;
	cin>>ch;
	cout<<endl<<endl;
	}while(ch=='y');
}
