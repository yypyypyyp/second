#define _CRT_SECURE_NO_WARNINGS
//
////   \ddd ddd表示1 - 3个八进制的数字。如：\130x
//
//#include<stdio.h>
//
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	// 32 -这个32是两个8进制的数字   就是3  2  对应  3*8^1  + 3*8^0 =24+2=26
//	//32作为8进制代表的那个十进制数字（26），它作为ASCII码值所对应的字符
//	//8进制 32 --> 十进制26 --> 作为ASCII码值代表的字符
//	// 26所代表的ASCII码值是一个】】 -> 【【  箭头
//	//printf("%c\n",'\32' );    //记忆点· %c - - 打印字符
//	//printf("%c\n", '\132');    // 10进制90对应表格里的Z
//	//1 3 2   =  1*8^2+ 3*8^1 + 2*8^0 = 64+24+2=90
//	return 0;
//}
//
//


//   \xdd  dd表示2个十六进制的数字。如：\x30  0
#include<stdio.h>

int main()
{
	printf("%c\n", '\x61');

	//6*16^1+1*16^0 =96+1 =97

	return 0;
}

/*注释
1.代码中有不需要的代码可以直接删除，也可以注释掉。
2.代码中有些代码比较难懂，可以家一下注释文字。
3.快捷键注释(选中目标)ctrl+k+c；取消注释(选中目标)ctrl+k+u
常见的可以用双斜杠来注释（英文斜杠）
段落注释可以在段首/*，段尾（*+/）来注释*/


//注释有两种风格：
//· C语言风格的注释  */ xxxx /*
  //缺陷：不能嵌套注释

//· C++风格的注释  // xxxxx

#include<stdio.h>

int main()
{
	int a = 1;
	int b = 0; 
	int sum = 1;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);   //%d - 打印整型


	return 0;
}

#include<stdio.h>

int main()
{
	printf("加入比特\n");

	int study = 0;
	printf("你会好好学习吗？(1/0)>:");
	scanf("%d",&study);//1/0
	if (study == 1)//注意：一个等号表示赋值，两个等号判断是否相等。 
	{
		printf("一份好的offer\n");
	}

	else
	{
		printf("回家卖红薯\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int coding = 0;
	printf("你会去敲代码吗？（选择1 or 0）:>");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有好offer\n");
	}

	else
	{
		printf("放弃，回家卖红薯\n");
	}
	return 0;
}


#include<stdio.h>

int main()
{
	int respond = 1;
	printf("恭喜你专升本上岸！\n\n");
	printf("接下来你会好好学习吗？(1 or 0)>;");
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



//C语言共有3种循环，
//1.while循环
//2.for循环（后期讲）
//do...while循环（后期讲）