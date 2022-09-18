#define   _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//作用域和生命周期
// 
// 
//作用域
//int g_val = 2022;//全局变量
//
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("%d\n", g_val);
//
//		int a = 10;
//		printf("2：a=%d\n", a);
//	}
//	printf("3：%d\n", g_val);
//
//	return 0;
//}

//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//}

//生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	 }
//	return 0;

//}
//常量
//#define max 10000

//int main()
//{
//1.字面常量
//	3.14;
//	10;
//	'a';
//	'abcdef';
//2.connst 修饰的常变量
	//const int num = 10;//num就是常变量-具有常属性（不能被改变的属性） 
	//num = 20;
	//printf("num=%d\n", num);

	//int arr[10] = { 0 };//10个元素
	//const int n = 10;
	//int arr2[n] = { 0 };//n是变量，这里是不行
	/*int n = max;
	printf("max=%d\n", max);*/

	//    return 0;
	//}

//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE=3, //赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//
//	//4.枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//字符串就是一串字符 - 用双引号括起来的一串字符
//int main()
//{
//	"abcdf";
//	"hello bit";
//
//	return 0;
//
//}
#include<string.h>
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//		
//	//打印字符串
   /*printf("%s\n", arr1);
// 	printf("%s\n", arr2);*/
//	return 0;
//
//}

//转义字符
//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");
//
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok??)");//??)--]-三字母词
//	//(are you ok]
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");
//
//
//
//	return 0;
//}

//int main()
//{
//
//	printf("%c\n", '\130');//8进制的130是十进制的多少?
//	//x--ASCII码值是88 
//	printf("%c\n", '\101');//a - 65 - 8进制是：101
//	printf("%c\n", '\x30');//48 - '0'
//	printf("%d\n", strlen("abc"));//3
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//
//
//
//}

//注释：是用来解释代码的。
//int main
//{

	//int a = 10;//c++的注释风格
	/*
	int b = 5;
	*/
	//c语言的注释风格 - 不支持嵌套注释

//	return 0
//}

//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特：>\n");
//    printf("那要好好学习吗（1/0)?>\n:");
//    scanf("%d", &input);
//
//    if (input == 1)
//	{ 
//    printf("好offer\n");
//	}
//    else
//	{ 
//    printf("回家卖红薯\n");
//    }
//    return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("拿好offer\n");
//
//	}
//	return 0;
//
//}

//int ADD(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//函数的解决方式
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//
//	//数组 - 一组相同类型的元素的集合
//	//10个整形1-10存起来
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//
//	 //char ch[5] = { 'a','b','c' };//不完全初始化，剩下的默认为0

	//int a = 9 / 2;
	//float a = 9 / 2.0;
//	int a = 9 % 2;//%-取模（余）
//	printf("%d\n", a);
//
//
//	return 0;
//
//}

//int main()
//{
//	int a = 2;
//	//int b = a<<1;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//0表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//        //如果a为真，做事
//		 
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//
//	}
//
//
//
//}

//int main()
//{
//	//sizeof是一个操作符
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//}

//int main()
//{
//	//10*4=40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~按位取反	
//	
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int b = a++;//后置++    - 先使用，后++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//
//
//	//int b = ++a;//前置++  -  先++，后使用
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//
//}

//int main()
//{ 
//	int a = 3;
//	int b = 0;
//	int c = a || b;
//	//int c = a && b;
//	printf("%d\n", c);
//
//return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//a=5    c=1   b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}
//函数调用操作符
//int main()
//{
//	//调用函数的时候，函数名后边的()就是函数调用操作符
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}

//int main()
//{
//	//大量、频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	
//	return 0;
//
//}

//static  -  静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}

//extren 声明外部符号的
//extern  int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明函数
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//define 是一个预处理指令
//1.define定义符号

//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define 定义宏
//#define ADD(X,Y)   ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//
//}

//int main()
//{
//
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n", &a);//%p用来打印地址的
//
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//	//*说明pa是指针变量
//    //int 说明pa指向的对象是int型
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作 |  *pa就是通过pa里面的地址，找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//
//	return 0;
//}

//结构体可以让C语言创建新的类型出来

//创建一个学生
//struct stu
//{
//
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//创建一个书的类型
//struct Book
//{
//
//	char name[20];
//	float price;
//	char id[30];
//
//};
//
//int main()
//{
//	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化 
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量
//
//	return 0;
//
//}

int main()
{
	int age = 20;

	if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n");

	return 0;

}