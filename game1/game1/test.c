#include"game.h"
void game()
{
	char Board[ROW][COL] = {0};
	InitBoard(Board,ROW,COL);
	Display(Board,ROW,COL);
	while(1)
	{
		Playermove(Board,ROW,COL);
		Is_win(Board,ROW,COL);
		if(Is_win(Board,ROW,COL) == '*')
		{
			Display(Board,ROW,COL);
			printf("���Ӯ\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == 'q')
		{
			printf("ƽ��\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == 'c')
		{
		}
		Computermove(Board,ROW,COL);
		Display(Board,ROW,COL);
		Is_win(Board,ROW,COL);
		if(Is_win(Board,ROW,COL) == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == 'q')
		{
			printf("ƽ��\n");
			break;
		}
		if(Is_win(Board,ROW,COL) == 'c')
		{
		}
	}
}
void menu()
{
	printf("****************************\n");
	printf("***** 1.play    2.exit *****\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
        printf("��ѡ��");
		scanf("%d",&input);
		srand ((unsigned int)time(NULL));
		switch(input)
	     {
	     case 1:
		  {
			  game();
			  break;
		  }
	     case 2:
		 {
             break;
		 }
		 default:
			 {
				 printf("ѡ�����\n");
				 break;
			 }
	    }
	}while(input-2);	
}
int main()
{
	test();
	return 0;
}