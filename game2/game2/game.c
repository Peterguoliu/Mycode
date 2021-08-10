#include"game.h"
void Initboard(char board[ROWS][COLS],int row,int col,char k)
{
    int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j] = k;
		}
	}
}
void Display(char board[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	count = easy_num;
	while(count>0)
	{
	x = rand()%row+1;
	y = rand()%col+1;
	if(board[x][y] == '0')
	{
	board[x][y] = '1';
	count--;
	}
	}
}
int get_count(char mine[ROWS][COLS],int x,int y)
{
	int z = mine[x][y+1]+
		mine[x+1][y+1]+
		mine[x-1][y+1]+
		mine[x-1][y-1]+
		mine[x+1][y-1]+
		mine[x][y-1]+
		mine[x-1][y]+
		mine[x+1][y]-8*'0';
	return z;
}
void Spread_or_Tell(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,char k)
{
	if(k == '0')//spread
	{
		show[x][y]=' ';
		if(x+1 <= ROW && show[x+1][y] == '*')
		{
			Spread_or_Tell(mine,show,x+1,y,get_count(mine,x+1,y)+'0');
		}
		if(x-1 >= 0 && show[x-1][y] == '*')
		{
			Spread_or_Tell(mine,show,x-1,y,get_count(mine,x-1,y)+'0');
		}
		if(y+1<=COL && show[x][y+1] == '*')
		{
			Spread_or_Tell(mine,show,x,y+1,get_count(mine,x,y+1)+'0');
		}
		if(y+1<=COL && x-1>=0 && show[x-1][y+1] == '*')
		{
			Spread_or_Tell(mine,show,x-1,y+1,get_count(mine,x-1,y+1)+'0');
		}
		if(y+1<=COL && x+1<=ROW && show[x+1][y+1] == '*')
		{
			Spread_or_Tell(mine,show,x+1,y+1,get_count(mine,x+1,y+1)+'0');
		}
		if(y-1>=0 && show[x][y-1] == '*')
		{
			Spread_or_Tell(mine,show,x,y-1,get_count(mine,x,y-1)+'0');
		}
		if(y-1>=0 && x-1>=0 && show[x-1][y-1] == '*')
		{
			Spread_or_Tell(mine,show,x-1,y-1,get_count(mine,x-1,y-1)+'0');
		}
		if(y-1>=0 && x+1<=ROW && show[x+1][y-1] == '*')
		{
			Spread_or_Tell(mine,show,x+1,y-1,get_count(mine,x+1,y-1)+'0');
		}
	}
	else//tell
	{
		show[x][y] = k;
	}
}
int Is_win(char show[ROWS][COLS],int row,int col)
{
	int i =0;
	int j =0;
	int count =0;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
	/*again:*/
	printf("小朋友，请输入要扫位置的坐标：");
	scanf("%d%d",&x,&y);
	if(x>0 && x<=9 && y>0 && y<=9)
	{
		if(mine[x][y] == '1')
		{
			printf("很遗憾，你被炸成小黑猪了(1表示地雷)\n");
			Display(mine,ROW,COL);
			break;
		}
		else
		{
			/*if(show[x][y] != '*')
			{
				printf("输入错误,该地方已被排查\n");
				goto again;
			}*/
			char k = get_count(mine,x,y)+'0';
			//printf("%c\n",k);
			Spread_or_Tell(mine,show,x,y,get_count(mine,x,y)+'0');
			Display(show,ROW,COL);
			if(Is_win(show,ROW,COL) == easy_num)
			{
				printf("挑战成功,真的太棒了！\n");
			    Display(mine,ROW,COL);
				break;
			}
		}
	}
	else
	{
		printf("输入错误\n");
	}
	}
}