#include<stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h> 
#include <time.h>
void test();
void menu();
void game();
void InitBoard(char board[ROW][COL],int row,int col);
void Display(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL],int row,int col);
void Computermove(char board[ROW][COL],int row,int col);
char Is_win( char board[ROW][COL],int row,int col);