#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define ROWS 11
#define COLS 11
#define ROW ROWS-2
#define COL COLS-2
#define easy_num 10
void Initboard(char board[ROWS][COLS],int row,int col,char k);
void Display(char board[ROWS][COLS],int row,int col);
void Setmine(char board[ROWS][COLS],int row,int col);
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
