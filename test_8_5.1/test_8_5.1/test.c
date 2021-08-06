#include<stdio.h>
//程序员跳台阶问题
int Fib(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else if(n<=2)
	{
		return 2;
	}
	else
	{
		return Fib(n-1)+Fib(n-2);
	}
}
int main()
{
	int n = 0;
	int b = 0;
	scanf("%d",&n);
	b = Fib(n);
	printf("%d\n",b);
	return 0;
}






























//int Fac(int a)
//{
//	if(a<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a*Fac(a-1);
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d",&a);
//	b = Fac(a);
//	printf("%d\n",b);
//	return 0;
//}
//int my_strlen( char* ch)
//{
//	if(*ch != '\0')
//	{
//		return 1+my_strlen(ch+1);
//	}
//	else
//	{
//		return 0;
//	}
//
//
//	//int count = 0;
//	//while(*ch != '\0')
//	//{
// //     count++;
//	//  ch++;
//	//}
//	//return count;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int num = my_strlen(arr);
//	printf("%d\n",num);
//	return 0;
//}
//	int a = 19;
//	int b = 12;
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}