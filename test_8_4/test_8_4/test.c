#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = {0};
	system("shutdown -s -t 120");
	printf("������ʾ�����ĵ��Խ��������Ӻ�ػ���������룺���������� ���Խ�ȡ���ػ�\n");
	printf("�����룺")
	again:
	scanf("%s",input);
	if(strcmp(input,"����������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("����������������룺");
		goto again;
	}
  return 0;
}