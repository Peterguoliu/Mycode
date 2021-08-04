#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = {0};
	system("shutdown -s -t 120");
	printf("友情提示：您的电脑将在两分钟后关机。如果输入：郭陈燕是猪 电脑将取消关机\n");
	printf("请输入：")
	again:
	scanf("%s",input);
	if(strcmp(input,"郭陈燕是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入：");
		goto again;
	}
  return 0;
}