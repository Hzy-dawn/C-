//#define _CRT_SECURE_NO_WARNINGS 1//����������Ϊscanf()����Ĳ���ȫ���޷�ʹ�øú���������newc++file.cpp���ļ�����������������Ϊÿһ���½���.c/.cpp�ļ������������
//#include<stdio.h>//standard input output
//int main()
//{
//	printf("hello world");
//	return 0;
//}
//int main()
//{
//	printf("hello world\n");//ʹ���˻��з�������Ƶ���һ��
//
//	return 0;
//
// }
//int main()
//{
//	printf("abc\nedf");
//	return 0;
//}

//printf()������ռλ����һһ��Ӧ��ϵ�������n��ռλ����printf()��Ӧ����n+1������1.��������������ڶ�Ӧ��ռλ����printf()���ܻ�����ڴ��е�����ֵ
//int main()
//{
//	printf("%s says it is %d o'olock\n", "lisi", 10);
//	printf("%s says it is %d o'olock\n", "wangwu", 24);
//	return 0;
//}
//int main()
//{
//	printf("%f\n", 123.45);//%f %lf�ڴ�ӡ��ʱ��С�����Ĭ���Ǵ�ӡ6λ
//	return 0;
//}




//scanf()
//int main()
//{
//	int score = 0;
//	printf("������ɼ���");
//	scanf("%d", &score);
//	printf("�ɼ�Ϊ%d\n", score);
//
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	float y = 0;
//	//�û�����"   -13.45e12"
//	scanf("%d", &x);
//	printf("%d\n", x);
//	scanf("%lf", &y);
//	printf("%lf", y);
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a,&b,&c,&d);//""�м���Կո������Ҳ����Ӣ�Ķ��Ÿ��������̼�������ʱҪ����һ��
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//scanf()��ʵ���з���ֵ�ģ����ǲ����ؿ���ʹ�ã�����ֵ��һ����������ʾ�ɹ���ȡ���ı�������
//���û�ж�ȡ�κ������ƥ��ʧ�ܣ��򷵻�0
//����ڳɹ���ȡ�κ�����֮ǰ�������˶�ȡ�������������ȡ���ļ���β���򷵻س���EOF(-1)  EOF-end of file�ļ�������־
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d-%d-%d", &year, &month, &day);//""˫�����е�����Ҫ��������̼�������ݱ�����xx-xx-xx��ʽ�ģ���������
//	printf("%d %d %d", year, month, day);
//
//	return 0;
////}
//// 
////Ϊ�˸�����ļ������ݣ�scanf()�ṩ��һ����ֵ���Է�*��ֻҪ��*�����κ�ռλ���İٷֺź�ߣ���ռλ���Ͳ��᷵��ֵ��������ͱ�����
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d%*c%d%*c%d", &year, &month, &day);//������ʽ������£���������ݿ������κ���ʽ��ֻҪ���� �� �����˳��
//	printf("%d %d %d", year, month, day);
//
//	return 0;
//}