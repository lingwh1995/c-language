#include <stdio.h>
typedef char bool;
#define false 0
#define true 1

/*
 * ʹ�ú궨��+typedefʵ���Զ���bool
 */
#if 0
int main() {
    bool b = true;
    while (b) {
        printf("Ϊ��...\n");
    }
    return 0;
}
#endif // 0