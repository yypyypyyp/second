#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int sum = 0;
	sum = Add(4, 6);
	printf("sum %d\n", sum);
	return 0;
}

#include<stdio.h>
Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int sum = 0;
	sum = Add(8, 9);
	printf("sum = %d\n", sum);

	return 0;
}

#include<stdio.h>

int main()
{
	printf("�������");
	int line = 0;

	while(line<20000)
	{
		printf("��һ�д���%d\n",line);
		line++;
	}
	if(line>= 20000)

	printf("�ҵ�һ�ݺ�offer");
	return 0;
}

#include<stdio.h>

int main()
{
	int answer = 1;
	printf("�������");
	printf("�ú�ѧϰ?��1/0��>:\n");
	/*printf("1 yes\n");
	printf("0 no\n");*/
	scanf("%d", &answer);

	if(answer == 1)
	{
		printf("һ�ݺ�offer");
	}
	else
	{
		printf("��������");
	}

	return 0;
}

//����  

#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//ÿ��Ԫ�ض���Ӧ��һ���±��������Ǵ�0��ʼ��,ʵ�ʾ���n = n-1.
	//�±���Ϊ�˰�����������Ԫ�ء�
	//��8���� 9-1 =8,���������Ҫ��ӡ5���͵�����4
	//arr[�±�]
		printf("%d\n", arr[4]);//��ӡ����
	return 0;
}

//��Ҫ��ӡ��������

#include<stdio.h>

int main()

{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int i = 0;

	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}