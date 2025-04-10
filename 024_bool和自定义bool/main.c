#include <stdio.h>
#include <stdbool.h>

/**
 * bool类型
 *  1.在C语言中,0为假,非0都为真,一般用1来代表true
 *  2.printf不能直接输出bool,需要转换为整形输出
 */


/*
 * C语言中的真和假
 */
void TrueAndFalseTest()
{
    //在C语言中,0为假,非0都为真
    int n = 0;
    while (n) {
        printf("为真...\n");
    }
}

/*
 * stdbool.h测试
 */
void StdboolTest()
{
    //如果要使用bool，需要引入 stdbool.h
    bool b = false;
    while (b) {
        printf("为真...\n");
    }
    printf("b = %d\n", b);
    b -= 1;
    //下面一行输出1，为什么不输出-1,因为 0-1=-1 ,-1非0是true,true值为1
    printf("b = %d\n", b);
    b -= 1;
    //上面得到的b=1, 1-1=0,所以输出0
    printf("b = %d\n", b);
    b -= 1;
    //上面得到的b=0, 0-1=-1,-1非0是true,true值为1
    //上面得到的b=1, 1-1=0,所以输出0
    printf("b = %d\n", b);

    //一些不好判断为真还是为假的值
    bool i = 0; //false
    bool j = '0'; //true
    bool k = '\0'; //空字符,ASCII码为0,false
    bool l = NULL; //false
    bool m = ' '; //空格 32 true

    //输出bool
    bool x = false;
    bool y = true;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

#if 0
int main()
{
    TrueAndFalseTest();
    StdboolTest();
    return 0;
}
#endif // 0