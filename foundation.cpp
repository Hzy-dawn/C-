//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//printf("%c\n", '\133');
//	char arry1[] = "abcedf";//ĩβ��\0
//	char arry2[] = { 'a','b','c','e','d','f' };//ĩβû��\0
//	//strlen()���������ַ����ĳ��ȣ�������ĩβ���ص�\0
//	printf("%d\n", strlen(arry1));//���6
//	printf("%d\n", strlen(arry2));//��Ϊĩβû������\0�������������������ģ�Ҳ����˵����f��Ҫ������ֱ������\0Ϊֹ
//
//
//	return 0;
//}
//�����ü��д�����ʾ���������е�����
//#include<stdio.h>
//int num = 100;//ȫ�ֱ�����ȫ�ֱ���������ȫ��ʹ��
//int main()
//{
//	int num = 1000;//�ֲ������������ھֲ�ʹ��
//	printf("%d\n", num);//��ȫ�ֱ����;ֲ���������ʹ��ʱ����һ��name�ظ�����ʱ��������ʹ�þֲ��������������1000
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	//C�����б������������������� int = signed int���з��������� unsigned int���޷���������ֻ�ɽ��Ǹ�����ֵ�������ͱ���
//	unsigned int age = 1;//������һ����������ָ��������ʹ��unsigned int
//	signed int variation = 1;//�仯�������ָ��������ʹ��signed int
//
//
//	return 0;
//}


//int main()
//{
//	float num1 = 3.14f;//���������ȱ�����Ҫ��С����߼���f��������������Ϊdouble
//	double num2 = 3.14;//˫���ȸ���������
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>//ʹ�ò���������Ҫ������ͷ�ļ�
//int main()
//{
//	bool flag = true;
//	if (flag)
//		printf("i like HZY\n");
//	return 0;
//}

#include<stdbool.h>
#include<stdio.h>
int main()//sizeof()�������ͳ��ȣ���λ���ֽ� sizeof�ļ�������size_t����ʹ��%zdռλ
{
	printf("%zd\n", sizeof(char));//�ַ���
	printf("%zd\n", sizeof(signed char));//�з��ŵ�
	printf("%zd\n", sizeof(unsigned char));//�޷��ŵ�
	printf("%zd\n", sizeof(short));//������
	printf("%zd\n", sizeof(signed short));//�з��ŵ�
	printf("%zd\n", sizeof(unsigned short));//�޷��ŵ�
	printf("%zd\n", sizeof(int));//����
	printf("%zd\n", sizeof(signed int));
	printf("%zd\n", sizeof(unsigned int));
	printf("%zd\n", sizeof(long));//������
	printf("%zd\n", sizeof(signed long));
	printf("%zd\n", sizeof(unsigned long));
	printf("%zd\n", sizeof(long long));//��������
	printf("%zd\n", sizeof(signed long long));
	printf("%zd\n", sizeof(unsigned long long));
	printf("%zd\n", sizeof(float));//�����ȸ�����
	printf("%zd\n", sizeof(double));//˫���ȸ�����
	printf("%zd\n", sizeof(long double));//��˫���ȸ�����
	printf("%zd\n", sizeof(bool));//��������

	return 0;
}