#define _CRT_SECURE_NO_WARNINGS


//转义字符

//  \n : 换行

#include<stdio.h>

int main()
{
	printf("abcn");// 正常打印，的话是abcn，
	printf("abc\n"); //但是在n之前加上\的话就变成转义字符，成了换行的意思。


	return 0;
}

//\t : 水平制表符

#include<stdio.h>

int main()
{
	//\t - 水平制表符  就好像好几个空格，和tab键一个效果
	printf("c:\test\32\test.c");
	//解决方法：在斜杠前面再加上斜杠，(用斜杠，转义斜杠，使斜杠变成普通斜杠。)
	printf("c:\\test\\32\\test.c");
	
	//官方叙述：'\\'用于表示一个反斜杠，防止它被解释为转义序列符。
	return 0;
}


//打印字符        

#include<stdio.h>

int main()

{
	//printf("%c\n", 'a');  // %c - 打印字符
	//如果想要打印一个《'》.
	//printf("%c\n", ''');
		//普通打印行不通，得用一个斜杠来使这个'撇号转义成一个普通的撇号。
		printf("%c\n", '\'');
	return 0; 
}


//打印字符串
#include<stdio.h>

int main()
{

	printf("%s\n","\"" );   //    %s - 输出字符串
	return 0;
}

//得出结果，/不仅可以在字符上生效，字符串也同样有效。


#include<stdio.h>
#include<string.h>  //注意：因为使用strlen这个函数，所以需要#include<sting.h>这个头文件。

int main()
{

	printf("%d\n", strlen("c:\test\32\test.\c") ); 
		//% d - 打印整型
		//strlen是打印字符长度的，全拼是 string length 字符串长度
		
	return 0;
}
 

