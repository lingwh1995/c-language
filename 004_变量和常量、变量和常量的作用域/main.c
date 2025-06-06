# include <stdio.h>
//定义一个宏常量,预编译之后会被替换掉
#define PI 3.14

/**
 * 章节内容:
 *      1.变量和常量
 *          变量: 初始化完成后值可以发生改变的量
 *          常量: 初始化完成后值不能发生改变的量
 *          宏常量:
 *          枚举常量:
 *      2.变量和常量的作用域
 *          全局变量/常量: 在函数外定义的变量
 *          局部变量/常量: 在函数中定义的变量
 *          代码块中的变量/常量: 在函数内部,在复合语句中定义的变量
 */

//定义全局变量
int g = 1;
//定义全局常量(未初始化的时候值默认为0,c语言中允许定义,c++中不允许定义,因为c++中更为严谨)
const int cg;

int main()
{
    /**
     * 局部变量
     */
    int i = 100;
    printf("i = %d\n", i);
    i = 200;
    printf("i = %d\n", i);

    //一行代码中定义两个常量
    int j = 100, k = 200;
    printf("j = %d, k = %d\n", j, k);

    //定义一个double类型的数据
    double d = 1.5;
    printf("d = %f\n", d);
    // 定义一个float类型的数据
    float f = 3.14;
    printf("f = %f\n", f);
    printf("-----------------------\n");


    /**
     * 全局变量
     */
     //打印全局常量
    printf("全局变量g = %d\n", g);
    //同名隐藏示例1
    int g = 10;
    printf("同名隐藏示例1,g = %d\n", g);
    printf("-----------------------\n");


    /**
     * 代码块中的变量
     */
    {
        //同名隐藏示例2
        int g = 20;
        //程序块中的变量
        int a = 3;
        printf("同名隐藏示例2,g = %d, a = %d\n", g, a);
    }
    printf("-----------------------\n");


    /**
     * 局部常量
     */
     //定义一个局部常量
    const int c = 1;
    printf("c = %d\n", c);
    //无法再次给常量赋值,会报错
    //c = 2;
    printf("-----------------------\n");


    /**
     * 全局常量,未初始化的时候值默认为0
     */
    printf("全局常量cg = %d\n", cg);
    printf("-----------------------\n");


    /**
     * C语言常量和Java语言常量对比
     */
     //Java中常量可以用于数组下标
 //    int[] arr = new int[]{1,2,3};
 //    final Integer i = 0;
 //    System.out.println(arr[i]);

     //C语言中中常量也可以用于数组下标
    int arr[] = { 10, 20, 30 };
    printf("数组中第0个元素 = %d\n", arr[0]);
    printf("数组中第1个元素 = %d\n", arr[c]);

    //定义数组
    int arr1[10];
    printf("-----------------------\n");


    /**
     * 宏常量
     */
     //打印宏常量
    printf("宏定义的常量PI = %f\n", PI);
    printf("-----------------------\n");


    /**
     * 未初始化的常量和变量
     * 特别注意:未初始化的变量和常量都是一个随机值
     */
    int x;
    printf("未初始化的常量是一个随机值 = %d\n", x);
    //定义一个未初始化的常量,这个值是随机的,c语言中允许定义,c++中不允许定义,因为c++中更为严谨
    const int cx;
    printf("未初始化的变量是一个随机值 = %d\n", cx);
    printf("-----------------------\n");


    /**
     * 枚举常量(枚举也是一种常量)
     *  注意:枚举常量的值只能是整形数据
     */
    enum sex
    {
        MALE,//男性
        FEMALE,//女性
        SECRET//保密
    };
    printf("MALE = %d\n", MALE);
    printf("FEMALE = %d\n", FEMALE);
    printf("SECRET = %d\n", SECRET);

    enum week
    {
        MON = 1,
        TUE = 2,
        WED = 3
    };
    enum week wk;
    wk = MON;
    printf("%d\n", wk);
    wk = TUE;
    printf("%d\n", wk);

    enum animal
    {
        DOG = 5,
        CAT,
        SHEEP
    };
    printf("DOG = %d\n", DOG);
    printf("CAT = %d\n", CAT);
    printf("SHEEP = %d\n", SHEEP);
    return 0;
}