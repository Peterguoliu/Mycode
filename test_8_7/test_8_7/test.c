#include<stdio.h>
int main()
{
	int arr[] ={1,2,3,9,6};
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	return 0;
}





























//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//   for(i=0;i<sz;i++)
//   {
//	   int flag = 1;
//	   int tmp =0;
//     for(j=0;j<sz-1-i;j++)
//	 {
//		 if(arr[j]>arr[j+1])
//		 {
//			 tmp = arr[j];
//			 arr[j] = arr[j+1];
//			 arr[j+1] = tmp;
//			 flag = 0;
//		 }
//		 if(flag == 1)
//		 {
//			 break;
//		 }
//	 }
//   }
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//       printf("%d ",arr[i]);
//	}
//	return 0;
//}