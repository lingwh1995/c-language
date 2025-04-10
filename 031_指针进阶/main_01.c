#include <stdio.h>

/**
 * 指针的大小和类型
 *  1.32位系统下指针的大小都是4字节,64位系统下指针的大小都是8字节
 *  2.指针的类型决定了指针影响的范围
 *      如 int类型指针操作一次可以影响4个字节,如: 78 56 34 12
 *        char类型指针操作一次只能影响1个字节,如: 78
 */
#if 0
int main() {
    int a = 0x12345678;
    int* ip = &a;
    printf("sizeof(ip) = %d\n", sizeof(ip));
    printf("ip = %p\n", ip);
    char* cp = (char*)&a;
    printf("sizeof(cp) = %d\n", sizeof(cp));
    printf("cp = %p\n", cp);
    *cp = 'a'; //97  0x61
    cp = cp + 1;
    *cp = 'b'; //98  0x62
    cp = cp + 1;
    *cp = 'c'; //99  0x63
    cp = cp + 1;
    *cp = 'd'; //100  0x64
    cp = cp + 1;
    printf("ip = %x\n", *ip);
    printf("cp = %x\n", *cp);
    return 0;
}
#endif // 0