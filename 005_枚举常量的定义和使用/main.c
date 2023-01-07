#include <stdio.h>

# define BEGIN_MACRO 0
# define IN_WORD_MACRO 1
# define OUT_WORD_MACRO 2
# define END_MACRO 3
/**
* 枚举常的定义和使用(枚举也是一种常量)
*   1.枚举常量的值只能是整形数据
*   2.有时使用宏定义的内容同样也可以使用枚举实现同样的效果,而且枚举比宏定义使用起来更为合适
*/

//使用枚举实现和宏定义同样的效果
int main() {
    //枚举默认从0开始
    /*
    enum state {
        BEGIN_ENUM,
        IN_WORD_ENUM,
        OUT_WORD_ENUM,
        END_ENUM
    };
    */

    //修改枚举默认开始值为100
    enum state {
        BEGIN_ENUM = 100,
        IN_WORD_ENUM,
        OUT_WORD_ENUM,
        END_ENUM
    };
    printf("BEGIN_MACRO = %d\n", BEGIN_MACRO);
    printf("IN_WORD_MACRO = %d\n", IN_WORD_MACRO);
    printf("OUT_WORD_MACRO = %d\n", OUT_WORD_MACRO);
    printf("END_MACRO = %d\n", END_MACRO);

    printf("BEGIN_ENUM = %d\n", BEGIN_ENUM);
    printf("IN_WORD_ENUM = %d\n", IN_WORD_ENUM);
    printf("OUT_WORD_ENUM = %d\n", OUT_WORD_ENUM);
    printf("END_ENUM = %d\n", END_ENUM);
    return 0;
}

//枚举常量的定义和使用
#if 0
int main() {
    enum sex {
        MALE,//男性
        FEMALE,//女性
        SECRET//保密
    };
    printf("MALE = %d\n", MALE);
    printf("FEMALE = %d\n", FEMALE);
    printf("SECRET = %d\n", SECRET);

    enum week {
        MON = 1,
        TUE = 2,
        WED = 3
    };
    enum week wk;
    wk = MON;
    printf("%d\n", wk);
    wk = TUE;
    printf("%d\n", wk);

    enum animal {
        DOG = 5,
        CAT,
        SHEEP
    };
    printf("DOG = %d\n", DOG);
    printf("CAT = %d\n", CAT);
    printf("SHEEP = %d\n", SHEEP);
    return 0;
}
#endif // 0


