#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int answer = 1;
	printf("欢迎加入比特");
	printf("你会好好学习吗？（1 or 0 ）>:\n\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("坚持，你会获得一份好offer");
	}
	else
	{
		printf("祝你玩的愉快！");
	}

	return 0;
}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("加入比特\n");

	while(line<20000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	if (line >= 20000)
    printf("一份好的offer");
	return 0;
}
#include<stdio.h>

int main()
{
	int line = 0;
	printf("加入比特\n");

	
	while (line < 20000)
	{
		printf("敲一行代码\n");
		line++;
	}
	
	printf("一份好offer");
	return 0;
}

#include<stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}

#include<stdio.h>

Add(int x, int y)s
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
	sum = Add(num1, num2);
	sum = a + b;
	sum = Add(a, b);
	sum = Add(2, 3);
	printf("sum = %d\n", sum);

	return 0;
}