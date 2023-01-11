#include <stdio.h>

/*
 * 指针中 * 的含义
 */
void PointerSeniorTest1() {
    int a = 10;
    int* pa = NULL;
    pa = &a;
    *pa = 100;
    printf("a = %d\n", a);
    //a 就等价于 *&a, *意思是对此地址解引用
    // a = *&a
}

void PointerSeniorTest2() {
    int a = 10, b = 20;
    int* ap = &a;
    int* bp = &b;
    if (ap > bp) {

    }
    if (*ap > *bp) {

    }
}

void fun(int* p) {
    int a = 200;
    *p = 100;
    p = &a;
}

void PointerSeniorTest3() {
    int x = 0;
    int* s = &x;
    fun(s);
    printf("%d %d\n", x, *s);
}

/**
 * 野指针
 * @return
 */
void PointerSeniorTest4() {
    int a; //随机值
    int* ip; //野指针:非常危险,要杜绝野指针的使用
    /**
     * 防止出现野指针的两种方法:
     *  1.定义指针时就对指针进行初始化(定义指针变量时一定要初始化)
     *      使用合法的地址值进行初始化或者赋值为NULL
     *  2.定义指针时赋值为NULL,使用前先判断是否为NULL
     */

     //定义指针时赋值为NULL(NULL: c语言中的空地址,实际上是0地址)
    int* s = NULL;
    printf("s = %p\n", s);
    //使用指针前先进行判空处理
    if (s != NULL) {
        a = *s;
    }
}


/**
 * 空指针
 * 变量初始化值+指针的正确定义
 *  定义指针变量时不管是局部的、全局的、静态的、非静态的都要进行初始化,不要把安全性寄托在编译器上
 *
 */
int g;
static int sg;

int* pg = NULL;
static int* psg = NULL;
void PointerSeniorTest5() {
    static int i;
    int j = 0;

    static int* pi = NULL;
    int* pj = NULL;
    printf("全局变量g = %d\n", g);
    printf("全局静态变量sg = %d\n", sg);
    printf("局部静态变量i = %d\n", i);
    printf("局部变量j = %d\n", j);

    printf("全局指针变量pg = %p\n", pg);
    printf("全局静态指针变量psg = %p\n", psg);
    printf("局部静态指针变量pi = %p\n", pi);
    printf("局部指针变量pj = %p\n", pj);
}


/**
 * 失效指针(空悬指针):本意是返回一个指针类型的数据,结果返回一个空悬指针
 * 返回指针类型数据
 * @param a
 * @return
 */
 //int* GetPointer1() {
 //    int a = 100;
 //    //相当于把主函数中的 变量a 复制一份放在fun6()这个函数中执行
 //    int* p = &a;
 //    //返回的p是当前栈帧中的 变量a 的地址
 //    return p;
 //}

 //解决空悬指针
int* GetPointer1() {
    //使用static修饰,修改变量a的声明周期,本质是因为静态变量不在栈区,不会在栈帧被回收时同时回收
    static int a = 100;
    //相当于把主函数中的 变量a 复制一份放在fun6()这个函数中执行
    int* p = &a;
    //返回的p是当前栈帧中的 变量a 的地址
    return p;
}

void PointerSeniorTest6() {
    //指针的判断正确定义
    int* p = NULL;
    int a = 5;
    printf("变量a的地址 = %p\n", &a);
    printf("对变量a解引用 = %d\n", *&a);
    p = GetPointer1();
    //指针的判空处理
    if (p != NULL) {
        printf("变量a在栈帧中的副本地址 = %p\n", p);
        //为什么返回的值不是100,因为这个指针失效了: 当fun6()执行结束后,fun6()中的变量已经释放了,所以解引用的时候这个指针已经失效了
        //MinGW编译器不会失效,可以成功解引用,但是vs编译器会失效
        printf("对变量a在栈帧中的副本解引用 = %d\n", *p);
    }
}


int* GetPointer2(int* p) {
    if (p != NULL) {
        *p = 100;
    }
    return p;
}

void PointerSeniorTest7() {
    int a = 10;
    int* p = &a;
    int* s = NULL;
    s = GetPointer2(p);
    printf("*s = %d\n", *s);
}

struct Student {
    char id[32];
    int age;
    char name[50];
};

/**
 * 查看指针大小
 */
void PointerSeniorTest8() {
    int* ip = NULL;
    char* cp = NULL;
    double* dp = NULL;
    int** sp = NULL;
    struct Student* studentp;
    printf("ip = %d\n", sizeof(ip));
    printf("cp = %d\n", sizeof(cp));
    printf("dp = %d\n", sizeof(dp));
    printf("sp = %d\n", sizeof(sp));
    printf("studentp = %d\n", sizeof(studentp));
}


/**
 * 指针练习题
 */
void PointerSeniorTest9() {
    int arr[5] = { 12,23,34,45,56 };
    int* p = arr;
    int x = 0;//12
    int y = 0;//23
    x = *p++;
    y = *p;
    printf("x = %d, y = %d\n", x, y);
    x = ++ * p;//24
    y = *p;//24 因为上一步操作之后,数组中第二个元素的值发生了变化,这里取的就是第二个值
    printf("x = %d, y = %d\n", x, y);
    x = *++p;//34
    y = *p;//34 因为上一步操作之后,数组中第三个元素的值发生了变化,这里取的就是第三个值
    printf("x = %d, y = %d\n", x, y);
}


void PointerSeniorTest10() {
    int a = 10, b = 20;
    int* p = &a;
    *&a; //10
    *&p; //&a
    &*p; //&a

    //变量一旦定义,就会在内存中分配地址,C语言不允许把一个地址赋值给另一个地址,这是非法的行为,实际上这里的
        //&a是一个地址常量,常量的值是不允许被改变的,改变地址常量的值是一个非法的行为
    //&a = &b;
}

#if 0
int main() {
    //PointerSeniorTest1();
    //PointerSeniorTest2();
    //PointerSeniorTest3();
    //PointerSeniorTest4();
    //PointerSeniorTest5();
    //PointerSeniorTest6();
    //PointerSeniorTest7();
    //PointerSeniorTest8();
    //PointerSeniorTest9();
    PointerSeniorTest10();
    return 0;
}
#endif // 0
