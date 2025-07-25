#include <stdio.h>
#include<string.h>
int main()
{
	//printf("%c\n", '\133');
	char arry1[] = "abcedf";//末尾有\0
	char arry2[] = { 'a','b','c','e','d','f' };//末尾没有\0
	//strlen()函数计算字符串的长度，不包括末尾隐藏的\0
	printf("%d\n", strlen(arry1));//输出6
	printf("%d\n", strlen(arry2));//因为末尾没有输入\0，所以输出的数是随机的，也就是说数到f后要继续数直到遇到\0为止





	return 0;
}