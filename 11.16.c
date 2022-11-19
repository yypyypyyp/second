#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int choice = 1;
	
	printf("欢迎使用visual studio 2013\n\n");
	printf("你接下来准备做什么?(1/0)\n1 开始敲代码\n0 先玩一会在开始>:\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("希望你坚持下去，你会找到一份好offer。\n");
	}
	else

	{
		printf("业精于勤，荒于嬉；行成于思，毁于随。\n");
	}
	

	return 0;
}

#include<stdio.h>
int main()
{
	int respond = 1;
	printf("恭喜你专升本上岸！\n\n");
	printf("接下来你会好好学习吗？(1 or 0)>：");
	scanf("%d", &respond);
	if (respond == 1)
	{
		printf("坚持，你会拥有一份好offer。");
	}
	else
	{
		printf("希望这是一个正确的选择。");
	}

	return 0;

}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("加入比特\n");


	while (line<20000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	if (line>=20000)
	printf("好offer\n");
	return 0;
}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 20000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("找到一份好offer");

	return 0;
}

#include<stdio.h>

int main()
{

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int a = 100;
	int b = 200;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}

#include<stdio.h>

Add(int x, int y)    //自定义函数 - 
                     //库函数 - 
{
	int z = x + y;
	return z;
	 
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = num1 + num2;
	sum = Add(num1,num2);
	sum = a + b;
	sum = Add(a,b);
	sum = Add(2, 3);
	printf("%d\n", sum);

	return 0;
}
