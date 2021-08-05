#include<stdio.h>
#include<string.h>
void swap(int x ,int y)
{
	int temp = 0 ;
	temp = x ;
	x = y;
	y = temp ;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	printf("a = %d\nb = %d\n",a,b);
	return 0;
}
//	char arr1[] = "haha";
//	char arr2[] = "****";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0 ;
//}