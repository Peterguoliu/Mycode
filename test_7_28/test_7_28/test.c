#include<stdio.h>
struct Book
{
	char name[30];
	int price;
};
int main()
{
	struct Book b1 ={"C”Ô—‘≥Ã–Ú…Ëº∆",55};
	struct Book* p=&b1;
	printf("%s\n",(*p).name);
	printf("%d\n",(*p).price);
  return 0;
}
//typedef int _i;
//_i main()
//{
//	_i a =1;
//	printf("%d\n",a);
	//typedef int _i;
	//	_i a=2;
	//	printf("%d\n",a);
	/*double a =3.14;
	double* pd=&a;
	*pd=3.15;
	printf("%lf\n",a);
	printf("%lf\n",*pd);*/
//	return 0;
//}