#include<stdio.h>
int main()
{
	char arr1[5] = {'a','b'};
	char arr2[5] = "ab";
	printf("%s\n%s",arr1,arr2);
}
//��ŵ������

//int i=1;//��¼���� 
//void move(int n,char a,char c)//��ʾ�ƶ�·�� 
//{
//	printf("��%d��:�ѵ�%d������%c--->%c\n",i++,n,a,c); 
//}
//
//void Hanoi(int n,char a,char b,char c)//n�����Ӵ�a����b�ƶ���c
//{
//	if(n==1) 
//	{
//			move(n,a,c);//���ֻ��һ��������ֱ�Ӵ�a���Ƶ�c�� 
//     }
//	else
//	{
//		Hanoi(n-1,a,c,b);//��n-1�����Ӵ�a����c�ƶ���b
//		move(n,a,c);//�����һ�����Ӵ�a���Ƶ�c�� 
//		Hanoi(n-1,b,a,c);//��b��n-1�������Ƶ�c�� 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);//�������ӵĸ��� 
//	Hanoi(num,'a','c','c');
//	return 0;
//}
