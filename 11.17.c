#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int answer = 1;
	printf("��ӭ�������");
	printf("���ú�ѧϰ�𣿣�1 or 0 ��>:\n\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("��֣������һ�ݺ�offer");
	}
	else
	{
		printf("ף�������죡");
	}

	return 0;
}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("�������\n");

	while(line<20000)
	{
		printf("��һ�д���%d\n",line);
		line++;
	}
	if (line >= 20000)
    printf("һ�ݺõ�offer");
	return 0;
}
#include<stdio.h>

int main()
{
	int line = 0;
	printf("�������\n");

	
	while (line < 20000)
	{
		printf("��һ�д���\n");
		line++;
	}
	
	printf("һ�ݺ�offer");
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