#include <stdio.h>

/*
 * const与指针
 */

/**
 * 指向为常性的指针
 * const在*左边,表示指向的值是常量
 */
void PointerAndConstTest1() {
    int a = 10, b = 20;
    const int* pa = &a;
    //这种写法等价于上面一行
    //int const *pa = &a;
    int x = *pa;
    printf("x = %d\n", x);
    //无法解引用*pa的值,这是不合法的
    //*pa = 100;
    pa = &b;
}


/**
 * 常性指针
 * const在*右边,表示指针自身是一个常量
 */
void PointerAndConstTest2() {
    int a = 10, b = 20;
    int* const pa = &a;

    int x = *pa;
    printf("x = %d\n", x);
    //无法修改指针pa的值,这是不合法的
    //pa = &b;
    *pa = 100;
}


/**
 * 定义一个指针自身和指针的指向都是常量的常量
 *  起到保护指针自身和被指针指向的值的效果
 */
void PointerAndConstTest3() {
    int a = 10, b = 20;
    const int* const pa = &a;
    //这种写法等价于上面一行
    //int const * const pa = &a;

    int x = *pa;
    printf("x = %d\n", x);

    //无法修改指针pa的值,这是不合法的
    //pa = &b;
    //无法解引用*pa的值,这是不合法的
    //*pa = 100;
}

/**
 * 使用const修改指针类型: 可以读取指针地址和指针指向的数据,但是不能改变指针所指向的值,这样可以保护指针指向的值
 */
void PointerAndConstTest4() {
    int a = 10, b = 20;
    const int c = 30;
    int* pa = &a;
    printf("a = %d\n", *pa);
    *pa = 100;
    printf("a = %d\n", *pa);

    const int* pb = &b;
    printf("b = %d\n", *pb);
    //不能改变指针指向的值,这对指针指向的值起到保护作用
    //*pb = 200;

    //指针修改常量的值
    int* pc = &c;
    printf("pc = %p\n", pc);
    *pc = 300;
    printf("c = %d\n", *pc);
}

#if 0
int main() {
    //PointerAndConstTest1();
    //PointerAndConstTest2();
    //PointerAndConstTest3();
    PointerAndConstTest4();
    return 0;
}
#endif // 0