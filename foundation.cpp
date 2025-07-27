//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//printf("%c\n", '\133');
//	char arry1[] = "abcedf";//末尾有\0
//	char arry2[] = { 'a','b','c','e','d','f' };//末尾没有\0
//	//strlen()函数计算字符串的长度，不包括末尾隐藏的\0
//	printf("%d\n", strlen(arry1));//输出6
//	printf("%d\n", strlen(arry2));//因为末尾没有输入\0，所以输出的数是随机的，也就是说数到f后要继续数直到遇到\0为止
//
//
//	return 0;
//}
//下面用几行代码演示变量命名中的问题
//#include<stdio.h>
//int num = 100;//全局变量，全局变量可以在全局使用
//int main()
//{
//	int num = 1000;//局部变量，仅可在局部使用
//	printf("%d\n", num);//当全局变量和局部变量均可使用时（对一个name重复命名时），优先使用局部变量，所以输出1000
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	//C语言中变量类型用于命名变量 int = signed int（有符号整数） unsigned int是无符号整数，只可将非负数赋值给该类型变量
//	unsigned int age = 1;//年龄这一变量不会出现负数，因此使用unsigned int
//	signed int variation = 1;//变化量则会出现负数，因此使用signed int
//
//
//	return 0;
//}


//int main()
//{
//	float num1 = 3.14f;//命名单精度变量需要在小数后边加上f，否则数据类型为double
//	double num2 = 3.14;//双精度浮点数命名
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>//使用布尔类型需要包含的头文件
//int main()
//{
//	bool flag = true;
//	if (flag)
//		printf("i like HZY\n");
//	return 0;
//}

#include<stdbool.h>
#include<stdio.h>
int main()//sizeof()返回类型长度，单位是字节 sizeof的计算结果是size_t类型使用%zd占位
{
	printf("%zd\n", sizeof(char));//字符型
	printf("%zd\n", sizeof(signed char));//有符号的
	printf("%zd\n", sizeof(unsigned char));//无符号的
	printf("%zd\n", sizeof(short));//短整型
	printf("%zd\n", sizeof(signed short));//有符号的
	printf("%zd\n", sizeof(unsigned short));//无符号的
	printf("%zd\n", sizeof(int));//整型
	printf("%zd\n", sizeof(signed int));
	printf("%zd\n", sizeof(unsigned int));
	printf("%zd\n", sizeof(long));//长整型
	printf("%zd\n", sizeof(signed long));
	printf("%zd\n", sizeof(unsigned long));
	printf("%zd\n", sizeof(long long));//更长整型
	printf("%zd\n", sizeof(signed long long));
	printf("%zd\n", sizeof(unsigned long long));
	printf("%zd\n", sizeof(float));//单精度浮点型
	printf("%zd\n", sizeof(double));//双精度浮点型
	printf("%zd\n", sizeof(long double));//长双精度浮点型
	printf("%zd\n", sizeof(bool));//布尔类型

	return 0;
}