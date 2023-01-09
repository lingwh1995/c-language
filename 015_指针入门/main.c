#include <stdio.h>

/**
 * 指针: 地址就是指针
 *  1.32系统下指针大小为4字节，64位系统下指针大小为8字节
 *  2.指向int类型数据的指针就是int类型指针,指向char类型数据的指针就是char类型指针
 */

int main() {
    /**
     * 指针入门
     */
     //实际变量的声明
    int a = 10, b = 20;
    printf("a = %d, b = %d, &a = %p, &b = %p\n", a, b, &a, &b);
    //指针变量的声明
    int* p = NULL;
    //在指针变量中存储变量a的地址
    p = &a;
    //注意: 指针p本身也会有一个物理内存地址
    printf("a的内存地址 = %p, 指针变量p中存储的(变量a)内存地址 = %p, 指针p的地址&p = %p\n", &a, p, &p);
    printf("指针大小:%d\n", sizeof(p));
    //*p代表的是a本身,把100赋值给*p,就意味把100赋值给a,*这个符号代表对一个指针类型数据解引用
    *p = 100;
    printf("a = %d, *p代表的变量的值(a的值) = %d\n", a, *p);
    p = &b;
    //此时*p代表的是b本身,把100赋值给*p,就意味把100赋值给b
    *p = 200;
    printf("b = %d, *p代表的变量的值(b的值) = %d\n", b, *p);


    /**
     * 在一行代码中定义两个指针变量
     */
    int c = 100, d = 200;
    //一次性定义两个指针变量: 正确写法
    int* p1, * p2;
    //一次性定义两个指针变量: 错误写法,这种写法p2不是指针类型变量,是int类型变量
    //int* p1,p2;
    p1 = &c;
    p2 = &d;
    printf("p1的物理地址 = %p\n", p1);
    printf("p2的物理地址 = %p\n", p2);


    /**
     * C语言中的NULL指针
     */
    int* pNULL = NULL;
    printf("pNULL的内存地址 = %p\n", pNULL);

    //C语言字符串和指针
    char stra[] = { "tulun" };
    char strb[] = { "tulun" };

    char* spa = "tulun";
    char* spb = "tulun";

    char* spc = { "tulun" };
    char* spd = { "tulun" };


    printf("%d \n", (stra == strb));
    printf("%d \n", (spa == spb));
    printf("%d \n", (spc == spd));

    //数据的小端存储:高位数存放在高地址,低位数存放在低地址,变量的首地址就是变量的低地址
    //i的值 从右往左: 低位数->高位数(这是16进制,可以像理解10进制数据一样来理解,从右往左依次是 个位->十位->百位->千位,位数是从低到高)
    //地址的值 从右往左: 高地址->低地址(因为地址是二进制数据,只是在显示时将4个二进制数据合并为一个16进制数据)
    int i = 0x12345678;
    int* pi = &i;
}