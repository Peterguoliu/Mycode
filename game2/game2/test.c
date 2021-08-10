#include"game.h"
void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
    //Display(mine,ROW,COL);
	Display(show,ROW,COL);
	Setmine(mine,ROW,COL);
    //Display(mine,ROW,COL);
	Find_mine(mine,show,ROW,COL);
}
void menu()
{
	printf("*************************\n");
	printf("**** 1.play   2.exit ****\n");
	printf("*************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("«Î—°‘Ò£∫");
		scanf("%d",&input);
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
				printf(" ‰»Î¥ÌŒÛ\n");
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