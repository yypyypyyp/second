#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int choice = 1;
	
	printf("��ӭʹ��visual studio 2013\n\n");
	printf("�������׼����ʲô?(1/0)\n1 ��ʼ�ô���\n0 ����һ���ڿ�ʼ>:\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("ϣ��������ȥ������ҵ�һ�ݺ�offer��\n");
	}
	else

	{
		printf("ҵ�����ڣ������ң��г���˼�������档\n");
	}
	

	return 0;
}

#include<stdio.h>
int main()
{
	int respond = 1;
	printf("��ϲ��ר�����ϰ���\n\n");
	printf("���������ú�ѧϰ��(1 or 0)>��");
	scanf("%d", &respond);
	if (respond == 1)
	{
		printf("��֣����ӵ��һ�ݺ�offer��");
	}
	else
	{
		printf("ϣ������һ����ȷ��ѡ��");
	}

	return 0;

}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("�������\n");


	while (line<20000)
	{
		printf("��һ�д���%d\n",line);
		line++;
	}
	if (line>=20000)
	printf("��offer\n");
	return 0;
}

#include<stdio.h>

int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 20000)
	{
		printf("��һ�д���%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("�ҵ�һ�ݺ�offer");

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

Add(int x, int y)    //�Զ��庯�� - 
                     //�⺯�� - 
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
