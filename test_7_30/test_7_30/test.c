#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int a = 0;
	int b = 1;
	for(i=1;i<=10;i++)
	{
	     b = 1;
		for(j=1;j<=i;j++)
		{
		b *= j;
		}
		a += b;
	}
	printf("%d\n",a);// 1+2!+3!+бн+10!
return 0 ;
}
//{
//	int i = 1;
//	int n = 0;
//	int a = 1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//        a *=i;
//	}
//	printf("%d\n",a);
//    return 0;
//}
	/*int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch < '0' || ch > '9')
			continue;
	putchar(ch);
	}
	return 0;*/

//	int ch = 0;
//   while((ch=getchar()) != EOF)
//	    putchar(ch);
//		return 0;
//}
