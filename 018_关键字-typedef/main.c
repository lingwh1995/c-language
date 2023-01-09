#include <stdio.h>

/**
* typedef:
*  1.C语言允许为一个数据类型起一个新的别名.它本身是一种存储类的关键字,与auto、extern、mutable、static、register等关键字不能同时出现在一个表达式中
*  2.给已有的类型起一个别名的,我们可以把一切合法的定义的变量(普通数据类型的变量/指针变量)转换为类型,如:
*      double d; 本意是定义了一个double类型的变量d
*      typedef double d; 转换后意思是给double这个数据类型起了一个别名,相当于把d由一个变量转换成为了一个类型
*  3.typedef不是类似于宏定义的类型替换,只是给是类型的重命名,起一个别名而已
*  4.typedef常和枚举和结构体结合使用
*/

void TypeDefTest() {
    //正常定义
    double d;
    unsigned char x;
    unsigned short y;
    unsigned int z;
    int array[10];

    //使用typedef起简化别名
    typedef double td;
    typedef unsigned char tuc;
    typedef unsigned short tus;
    typedef unsigned int tui;
    typedef int Array[10];

    //使用数据类型的简化别名定义数据
    td d_;
    tuc x_;
    tus y_;
    tui z_;
    //在下面打端点,使用使用debug模式查看数据类型,控制台中可以明确查看到数据类型为数组
    Array nums = { 1,2,3,4 };
    printf("double: sizeof(d)= %lld, sizeof(d_)= %lld\n", sizeof(d), sizeof(d_));
    printf("unsigned char: sizeof(x)= %lld, sizeof(x_)= %lld\n", sizeof(x), sizeof(x_));
    printf("unsigned short: sizeof(y)= %lld, sizeof(y_)= %lld\n", sizeof(y), sizeof(y_));
    printf("unsigned int: sizeof(z)= %lld, sizeof(z_)= %lld\n", sizeof(z), sizeof(z_));
}

/**
 * typedef和结构体结合使用方式一:
 */
struct Student {
    char id[32];
    char name[20];
    int age;
};
typedef struct Student Student;
typedef struct Student* PStudent;

/**
 * typedef和结构体结合使用方式二:
 */
typedef struct User {
    char id[32];
    char name[20];
    int age;
} User, *PUser;

/**
 * 测试typedef和结构体结合使用
 */
void TypeDefWithStructTest() {
    /**
     * 测试 typedef和结构体结合使用方式一:
     */
    Student student;
    PStudent pStudent = &student;

    /**
     * 测试 typedef和结构体结合使用方式二:
     */
    User user;
    PUser pUser = &user;
}

int main() {
    //TypeDefTest();
    TypeDefWithStructTest();
	return 0;
}