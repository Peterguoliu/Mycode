#include<stdio.h>
//int my_strlen(char* ch)
//{
//	char* start = ch;
//	char* end = ch;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char ch[] = "bit,zhencai";
//	int a = my_strlen(ch);
//	printf("%d\n",a);
//	return 0;
//}
void Init(int arr[])
{
	int i =0 ;
	for(i=0;i<10;i++)
	{
		arr[i] = 1;
	}
}
int main()
{
	int i =0 ;
	int right = 9;
	int left =0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//Init(arr);
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
		while(left<right)
		{
			int tmp = 0;
			tmp = arr[left];
			arr[left] =arr[right];
			arr[right] = tmp;
			right--;
			left++;
		}
		for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}