#include<stdio.h>
int main()
{
	int a = 1;
	int* pc =&a;
	*pc=2;
	printf("%d\n",a);
	printf("%d\n",sizeof(pc));
	return 0;
}