#include <stdio.h>

typedef enum bool {
    false,
    true
} bool;

/*
 * 使用枚举+typedef实现自定义bool
 */
int main() {
    bool b = true;
    while (b) {
        printf("为真...\n");
    }
    return 0;
}