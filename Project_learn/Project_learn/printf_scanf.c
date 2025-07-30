//#define _CRT_SECURE_NO_WARNINGS 1//用来避免因为scanf()本身的不安全而无法使用该函数，可在newc++file.cpp的文件中增加这行文字来为每一个新建的.c/.cpp文件添加这行文字
//#include<stdio.h>//standard input output
//int main()
//{
//	printf("hello world");
//	return 0;
//}
//int main()
//{
//	printf("hello world\n");//使用了换行符，光标移到下一行
//
//	return 0;
//
// }
//int main()
//{
//	printf("abc\nedf");
//	return 0;
//}

//printf()参数与占位符是一一对应关系，如果有n个占位符，printf()就应该有n+1个参数1.如果参数个数少于对应的占位符，printf()可能会输出内存中的任意值
//int main()
//{
//	printf("%s says it is %d o'olock\n", "lisi", 10);
//	printf("%s says it is %d o'olock\n", "wangwu", 24);
//	return 0;
//}
//int main()
//{
//	printf("%f\n", 123.45);//%f %lf在打印的时候，小数点后默认是打印6位
//	return 0;
//}




//scanf()
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩为%d\n", score);
//
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	float y = 0;
//	//用户输入"   -13.45e12"
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
//	int ret = scanf("%d %d %d %d", &a,&b,&c,&d);//""中间可以空格隔开，也可以英文逗号隔开，键盘键入数据时要保持一致
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//scanf()其实是有返回值的，但是不返回可以使用，返回值是一个整数，表示成功读取到的变量个数
//如果没有读取任何项，或者匹配失败，则返回0
//如果在成功读取任何数据之前，发生了读取错误或者遇到读取到文件结尾，则返回常量EOF(-1)  EOF-end of file文件结束标志
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d-%d-%d", &year, &month, &day);//""双引号中的内容要求后续键盘键入的数据必须是xx-xx-xx格式的，并不好用
//	printf("%d %d %d", year, month, day);
//
//	return 0;
////}
//// 
////为了更方便的键入数据，scanf()提供了一个赋值忽略符*。只要把*加在任何占位符的百分号后边，该占位符就不会返回值，解析后就被丢弃
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d%*c%d%*c%d", &year, &month, &day);//这种形式的情况下，键入的数据可以是任何形式，只要是年 月 日这个顺序
//	printf("%d %d %d", year, month, day);
//
//	return 0;
//}