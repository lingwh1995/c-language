#include <stdio.h>

/**
 * ָ��Ĵ�С������
 *  1.32λϵͳ��ָ��Ĵ�С����4�ֽ�,64λϵͳ��ָ��Ĵ�С����8�ֽ�
 *  2.ָ������;�����ָ��Ӱ��ķ�Χ
 *      �� int����ָ�����һ�ο���Ӱ��4���ֽ�,��: 78 56 34 12
 *        char����ָ�����һ��ֻ��Ӱ��1���ֽ�,��: 78
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