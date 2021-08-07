#include<stdio.h>
int main()
{
	char arr1[5] = {'a','b'};
	char arr2[5] = "ab";
	printf("%s\n%s",arr1,arr2);
}
//汉诺塔问题

//int i=1;//记录步数 
//void move(int n,char a,char c)//显示移动路径 
//{
//	printf("第%d步:把第%d个盘子%c--->%c\n",i++,n,a,c); 
//}
//
//void Hanoi(int n,char a,char b,char c)//n个盘子从a经过b移动到c
//{
//	if(n==1) 
//	{
//			move(n,a,c);//如果只有一个盘子则直接从a柱移到c柱 
//     }
//	else
//	{
//		Hanoi(n-1,a,c,b);//把n-1个盘子从a经过c移动到b
//		move(n,a,c);//把最后一个盘子从a柱移到c柱 
//		Hanoi(n-1,b,a,c);//把b柱n-1个盘子移到c柱 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);//输入盘子的个数 
//	Hanoi(num,'a','c','c');
//	return 0;
//}
