#define _CRT_SECURE_NO_WARNINGS


//ת���ַ�

//  \n : ����

#include<stdio.h>

int main()
{
	printf("abcn");// ������ӡ���Ļ���abcn��
	printf("abc\n"); //������n֮ǰ����\�Ļ��ͱ��ת���ַ������˻��е���˼��


	return 0;
}

//\t : ˮƽ�Ʊ��

#include<stdio.h>

int main()
{
	//\t - ˮƽ�Ʊ��  �ͺ���ü����ո񣬺�tab��һ��Ч��
	printf("c:\test\32\test.c");
	//�����������б��ǰ���ټ���б�ܣ�(��б�ܣ�ת��б�ܣ�ʹб�ܱ����ͨб�ܡ�)
	printf("c:\\test\\32\\test.c");
	
	//�ٷ�������'\\'���ڱ�ʾһ����б�ܣ���ֹ��������Ϊת�����з���
	return 0;
}


//��ӡ�ַ�        

#include<stdio.h>

int main()

{
	//printf("%c\n", 'a');  // %c - ��ӡ�ַ�
	//�����Ҫ��ӡһ����'��.
	//printf("%c\n", ''');
		//��ͨ��ӡ�в�ͨ������һ��б����ʹ���'Ʋ��ת���һ����ͨ��Ʋ�š�
		printf("%c\n", '\'');
	return 0; 
}


//��ӡ�ַ���
#include<stdio.h>

int main()
{

	printf("%s\n","\"" );   //    %s - ����ַ���
	return 0;
}

//�ó������/�����������ַ�����Ч���ַ���Ҳͬ����Ч��


#include<stdio.h>
#include<string.h>  //ע�⣺��Ϊʹ��strlen���������������Ҫ#include<sting.h>���ͷ�ļ���

int main()
{

	printf("%d\n", strlen("c:\test\32\test.\c") ); 
		//% d - ��ӡ����
		//strlen�Ǵ�ӡ�ַ����ȵģ�ȫƴ�� string length �ַ�������
		
	return 0;
}
 

