//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

/*
 * 标准输入:
 *	1.getchar()：输入单个字符，保存到字符变量中
 *  2.gets()：输入一行数据，保存到字符串变量中
 *  3.scanf()：格式化输入函数，一次可以输入多个数据，保存到多个变量中
 *		解决c4996 scanf警告：
 *			1.在.c文件第一行引入宏定义: #define _CRT_SECURE_NO_WARNINGS
 *			2.在.c文件第一行引入预编译指令:	#pragma warning(disable:4996)
 *	gets()和scanf()区别
 *		1.gets()接收的字符串中间可以有空格,scanf()接收的字符串中间不能有空格
 *		2.get()会清空缓冲区的换行符,scanf()不会清空缓冲区的换行符
 * 
 * 标准输出:
 *  1.putchar()：输出单个字符
 *  2.puts()：输出字符串
 *  3.printf()：格式化输出函数，可输出常量、变量等
 */

/*
 * 测试getchar()
 */
void GetCharTest() {
	printf("请输入单个字符: \n");
	char c = getchar();
	printf("字符类型输出: c = %c\n", c);
	printf("ASCII码输出: c = %d\n", c);
}

/*
 * 测试gets()
 */
void GetsTest1() {
	printf("请输入字符串: \n");
	//必须规定字符串的长度,否则会报异常
	char str[20] = "\0";
	gets(str);
	printf("str = %s\n", str);
}

/*
 * 测试gets()
 */
void GetsTest2() {
	printf("请输入字符串: \n");
	//必须规定字符串的长度,否则会报异常
	char str[30];
	//一定要先将指针变量初始化
	char* string = str;
	//也可以写成gets(str);
	gets(string);
	//输出参数是已经定义好的"指针变量名"
	printf("%s\n", string);
}

/*
 * 测试scanf()
 */
void ScanfTest1() {
	int i;
	float f;
	char c;
	printf("请输入字符串(使用空格隔开):\n");
	scanf("%d %f %c", &i, &f, &c);
	printf("i = %d, f = %f, c = %c\n", i, f, c);
}

/*
 * 测试scanf()
 */
void ScanfTest2() {
	printf("请输入字符串: \n");
	//必须规定字符串的长度,否则会报异常
	char str[30];
	scanf("%s", &str);
	printf("str = %s\n", str);
}

/*
 * 测试get()和scanf()
 *	输入数据: i love you
 *  gets()接收到: i love you
 *  scanf()接收到: i
 */
void GetsAndScanfTest1() {
	printf("请输入字符串(使用空格隔开): \n");
	char str_1[30];
	gets(str_1);
	printf("str_1 = %s\n", str_1);
	printf("请输入字符串(使用空格隔开): \n");
	//必须规定字符串的长度,否则会报异常
	char str_2[30];
	scanf("%s", &str_2);
	printf("str_2 = %s\n", str_2);
}

/*
 * 测试get()和scanf()
 *  1.程序运行结果
 *		请输入数据:
 *		a
 *		str = a
 *		1
 *		c = 1
 *		c =
 *  2.get()会清空缓冲区的换行符,scanf()不会清空缓冲区的换行符
 */
void GetsAndScanfTest2() {
	printf("请输入数据: \n");
	char str[30];
	gets(str);
	printf("str = %s\n", str);
	char c;
	scanf("%c",&c);
	printf("c = %c\n", c);
	//第二个scanf()直接接收了缓冲区中的换行符,无法接收用户输入的内容
	scanf("%c", &c);
	printf("c = %c\n", c);
}


int main() {
	//GetCharTest();
	//GetsTest1();
	//GetsTest2();
	//ScanfTest1();
	//ScanfTest2();
	//GetsAndScanfTest1();
	GetsAndScanfTest2();
}
