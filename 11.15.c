#define _CRT_SECURE_NO_WARNINGS
//
////   \ddd ddd��ʾ1 - 3���˽��Ƶ����֡��磺\130x
//
//#include<stdio.h>
//
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	// 32 -���32������8���Ƶ�����   ����3  2  ��Ӧ  3*8^1  + 3*8^0 =24+2=26
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣�26��������ΪASCII��ֵ����Ӧ���ַ�
//	//8���� 32 --> ʮ����26 --> ��ΪASCII��ֵ������ַ�
//	// 26�������ASCII��ֵ��һ������ -> ����  ��ͷ
//	//printf("%c\n",'\32' );    //����㡤 %c - - ��ӡ�ַ�
//	//printf("%c\n", '\132');    // 10����90��Ӧ������Z
//	//1 3 2   =  1*8^2+ 3*8^1 + 2*8^0 = 64+24+2=90
//	return 0;
//}
//
//


//   \xdd  dd��ʾ2��ʮ�����Ƶ����֡��磺\x30  0
#include<stdio.h>

int main()
{
	printf("%c\n", '\x61');

	//6*16^1+1*16^0 =96+1 =97

	return 0;
}

/*ע��
1.�������в���Ҫ�Ĵ������ֱ��ɾ����Ҳ����ע�͵���
2.��������Щ����Ƚ��Ѷ������Լ�һ��ע�����֡�
3.��ݼ�ע��(ѡ��Ŀ��)ctrl+k+c��ȡ��ע��(ѡ��Ŀ��)ctrl+k+u
�����Ŀ�����˫б����ע�ͣ�Ӣ��б�ܣ�
����ע�Ϳ����ڶ���/*����β��*+/����ע��*/


//ע�������ַ��
//�� C���Է���ע��  */ xxxx /*
  //ȱ�ݣ�����Ƕ��ע��

//�� C++����ע��  // xxxxx

#include<stdio.h>

int main()
{
	int a = 1;
	int b = 0; 
	int sum = 1;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);   //%d - ��ӡ����


	return 0;
}

#include<stdio.h>

int main()
{
	printf("�������\n");

	int study = 0;
	printf("���ú�ѧϰ��(1/0)>:");
	scanf("%d",&study);//1/0
	if (study == 1)//ע�⣺һ���Ⱥű�ʾ��ֵ�������Ⱥ��ж��Ƿ���ȡ� 
	{
		printf("һ�ݺõ�offer\n");
	}

	else
	{
		printf("�ؼ�������\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int coding = 0;
	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("��֣�����к�offer\n");
	}

	else
	{
		printf("�������ؼ�������\n");
	}
	return 0;
}


#include<stdio.h>

int main()
{
	int respond = 1;
	printf("��ϲ��ר�����ϰ���\n\n");
	printf("���������ú�ѧϰ��(1 or 0)>;");
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



//C���Թ���3��ѭ����
//1.whileѭ��
//2.forѭ�������ڽ���
//do...whileѭ�������ڽ���