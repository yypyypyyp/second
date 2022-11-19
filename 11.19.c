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
	sum = Add(5,9);
	printf("sum%d\n", sum);
	return 0;
}



int main()
{
	int line = 0;
	printf("加入比特");
	
	
	while (line < 20001)
	{
		printf("敲一行代码%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("获得一份好offer");
	}
}



#include<stdio.h>

int main()
{
	int answer = 1;
	printf("加入比特");
	printf("你会好好学习吗？（1/0）>:\n");
	printf("1 会\n");
	printf("0 不会\n");

	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("坚持下去");
	}
	else
	{
		printf("勿忘初心");
	}
	return 0;
}




#include<stdio.h>

int main()
{

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//printf("%d", arr[5]);//下标的方式访问元素。
	
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}


	return 0;
}



#include<stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//printf("%d\n", arr[4]);

	int i = 0;

	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}





////操作符


////（1）计算操作符
////+   -   *   /   %(取模也就是取余的意思)

#include<stdio.h>

int main()
{
	//int a = 5 / 2;//正常除法只会余2.
	int a = 5%2;//使用取模=取余，就是正常的余1.

	printf("%d", a);
	return 0;
}



//(2)移位操作符 -- 移动的是二进制位
//   左移 = << ;  
//   右移 = >> ;

#include<stdio.h>

int main()
{
	int a = 1;
	//printf("%d", a); //结果a = 1,。
    //整型1占4个字节，也就是32个比特位
	//00000000000000000000000000000001
	//  <<左移，的意思是上面些32个比特位整体向左移动一位，0|00000000000000000000000000000010
	//右移也同样如此。
	//向左移动的那一位就被舍弃了，右边就会补上一个0，因此末尾01变成10
	//01二进制转换成10进制的话就是1*2^0= 1 ;10的话就是1*2^1 = 2.
	int b = a<<1; //移位符号后面的数字是指移位的位数。
	printf("%d", b); //    结果就变成2了
	//注意，在a进行移位操作时，a本身的数字是不会变的。就好像 b = a + 1,计算中b变化了，但是a没有变。
	return 0;
}


//（3） 位操作


// 位操作 -- 二进制 操作
// & - 按位与
// | - 按位或
// ^ - 按位异或

//   & - 按位与

#include<stdio.h>

int main()
{
	int a = 3;  // 3转换成二进制 011 =    1*2^0 + 1*2^1 +0*2^2 = 1+2+0 =3
	int b = 5;  // 5转换成二进制 101 =    1*2^0 + 2*2^1 +0*2^2 = 1+4+0 =5
	int c = a&b;
	//011      C语言里，0为假，1为真，假+真=假  真+真 = 真
	//101      与就是并起来的意思
	//001 = 1  0和1与起来都为0，1和1与起来为1. 

                                 对应的二进制位相异，则为0



		 
	printf("%d\n", c);

	return 0;
}


| - 按位或

#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	//011    按位或 - 只有有 一个真的就可以了。    注意0 - 0 的话就是0.
	//101                          对应的二进制位相异，则为1
	//111 = 7
	return 0;
}



//^ -按位异或 


#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	int c = a^b;
	//异或的计算规律是：
	                           //对应的二进制位相同，则为0
	                           //对应的二进制位相异，则为1
	//011
	//101
	//110 = 6 

	printf("%d\n", c);

	return 0;
}
	  

//总结                           
// & - 按位与 - 对应的二进制位相异，则为0,
// | - 按位或 - 对应的二进制位相异，则为1,   注意 0-0的情况下是0 , 1-1 的情况是1
// ^ - 按位异或  - 对应的二进制位相异，则为1,     对应的二进制位相同，则为0.
         




////   赋值操作符
// //   =   +=  -=  *=  /=  &=  ^=  |=  >>=  <<=     一共1种对应= + - * / ^ & | >> << 
// //  这些都叫做复合赋值符号。  

#include<stdio.h>

int main()
{
	int a = 10;
	a = 20; //这个等号就是赋值的意思，注意一个等号=叫赋值 两个等号==叫判断相等。 =

	//第二种赋值方式

	// a = a + 10;  等价  a += 10   第二个就是第一个的简写，意思相同。  +=     加等


	//a = a - 10 ; 等价  a -= 10;   第二个就是第一个的简写，意思相同。  -=     减等


	//a = a * 10 ;  等价  a *= 10         乘等   *=


	//a = a / 10 ;  等价  a /= 10         除等   /=


	//a = a & 10 ;  等价  a &= 10     这个叫a（按位与）一个10          &=


	//a = a | 10 ;  等价  a |= 10    按位或等      |=


	//a =a ^ 10 ;  等价  a ^= 10    按位异或等      |=


	//a =a << 10 ;  等价  a <<= 10    左移等     <<=


	//a =a >> 10 ;  等价  a >>= 10   右移等     >>=
	return 0;
}




//单目操作符
//双目操作符
//三目操作符
#include<stdio.h>

int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//这个+号就是双目操作符，这个双目就是指 a和b 符号两边  


	//单目操作符


	//  （1） !  逻辑反操作；

	   //C语言中我们表示真假   0 - 就是假     非0 - 就是真
	//int a = 10;
	//printf("%d\n", a);//打印出来是10 - 真的

	//printf("%d\n", !a); //应用 ！ - 逻辑反操作符 变成假的 - 所以打印出来为0




	// -  负值；

	int a = -2;
	int b = -a;
	int c = +3;
	
    // +  正值；    通常情况下+正号都会省略


	return 0;
}



//另起一个

//sizeof - 计算的是变量或者类型所占空间的大小，单位是之字节

#include<stdio.h>

int main()
{
	//int a = 10;
	//printf("%d\n", sizeof(a)); //  a 所占的空间大小为4.
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a); //如果sizeof所对应的是变量，那么那个括号可以省略。
	//printf("%d\n", sizeof (int));  //如果sizeof所对应的是类型，那个括号不可以省略。

	//突发奇想2 - 关于数组的；

	int arr[10] = { 0 };//代表10个整型元素的数组
	//10 * sizeof(int) = 40;// 十个 int 变量

	printf("%d\n", sizeof(arr)); //打出为40


	//突发奇想3 - 关于计算数组的元素个数
	//数组的元素个数 = 数组的总大小 / 每个元素的大小

	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz); //打印结果为10，个数为10


	return 0;
}