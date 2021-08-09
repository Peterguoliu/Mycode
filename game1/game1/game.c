#include"game.h"
 void InitBoard(char board[ROW][COL],int row,int col)
 {
	 int i = 0;
	 int j = 0;
	 for(i=0;i<row;i++)
	 {
		 for(j=0;j<col;j++)
		 {
			 board[i][j] = ' ';
		 }
	 }
 }
 void Display(char board[ROW][COL],int row,int col)
 {
	 int i = 0;
	 int j = 0;
	 for(i=0;i<row;i++)
	 {
		 for(j=0;j<col;j++)
		 {
		   printf(" %c ",board[i][j]);
		   if(j<col-1)
		   {
		   printf("|");
		   }
		 }
		 printf("\n");
		   if(i<row-1)
		   {
			   for(j=0;j<col;j++)
			   {
		           printf("---");
		           if(j<col-1)
		            {
		              printf("|");
			        }
			   }
		   }
		   printf("\n");
	 }
 }
 void Playermove(char board[ROW][COL],int row,int col)
 {
	 int x = 0;
	 int y = 0;
	 printf("请输入坐标：");
	 while(1)
	 {
		 again:
	 scanf("%d%d",&x,&y);
	 if(x > 3 || y > 3)
	 {
		 printf("输入错误，请重新输入：");
			 goto again;
	 }
	 if(board[x-1][y-1] == ' ')
	   {
	    board[x-1][y-1] = '*';
		break;
	   }
	 else
	 {
		 printf("该位置不能选择，请重新输入：");
	 }
	 }
 }
 void Computermove(char board[ROW][COL],int row,int col)
 {
	 while(1)
	 {
	   int x = rand()%3;
	   int y = rand()%3;
	   if(board[x][y] == ' ')
	   {
		   board[x][y] = '#';
		   break;
	   }
	 }
 }
char Is_win( char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
	   if(board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' ')
	   {
         return board[i][1];
	   }
	}
	for(j=0;j<col;j++)
	{
	   if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j]!= ' ')
	   {
         return board[1][j];
	   }
	}
	if(board[0][0] == board[2][2] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
       return board[1][1];
	}
	if(board[0][2] == board[1][1] && board[2][0] == board[2][0] && board[1][3] != ' ')
	{
       return board[1][1];
	}
	while(1)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
               if(board[i][j] == ' ')
		        {
			      return 'c';
		         }
			}
		}
		return 'q';
	}
}
 