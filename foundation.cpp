#include <stdio.h>
#include<string.h>
int main()
{
	//printf("%c\n", '\133');
	char arry1[] = "abcedf";//ĩβ��\0
	char arry2[] = { 'a','b','c','e','d','f' };//ĩβû��\0
	//strlen()���������ַ����ĳ��ȣ�������ĩβ���ص�\0
	printf("%d\n", strlen(arry1));//���6
	printf("%d\n", strlen(arry2));//��Ϊĩβû������\0�������������������ģ�Ҳ����˵����f��Ҫ������ֱ������\0Ϊֹ





	return 0;
}