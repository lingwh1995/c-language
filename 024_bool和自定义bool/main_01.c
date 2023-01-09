#include <stdio.h>
typedef char bool;
#define false 0
#define true 1

/*
 * 使用宏定义+typedef实现自定义bool
 */
#if 0
int main() {
    bool b = true;
    while (b) {
        printf("为真...\n");
    }
    return 0;
}
#endif // 0