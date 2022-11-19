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
	printf("加入比特");
	int line = 0;

	while(line<20000)
	{
		printf("敲一行代码%d\n",line);
		line++;
	}
	if(line>= 20000)

	printf("找到一份好offer");
	return 0;
}

#include<stdio.h>

int main()
{
	int answer = 1;
	printf("进入广厦");
	printf("好好学习?（1/0）>:\n");
	/*printf("1 yes\n");
	printf("0 no\n");*/
	scanf("%d", &answer);

	if(answer == 1)
	{
		printf("一份好offer");
	}
	else
	{
		printf("快乐生活");
	}

	return 0;
}

//数组  

#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//每个元素都对应着一个下标计算机都是从0开始的,实际就是n = n-1.
	//下标是为了把握这个数组的元素。
	//如8就是 9-1 =8,所以如果我要打印5，就得输入4
	//arr[下标]
		printf("%d\n", arr[4]);//打印就是
	return 0;
}

//想要打印所有数字

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