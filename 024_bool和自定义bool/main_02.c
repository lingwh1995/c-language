#include <stdio.h>

typedef enum bool {
    false,
    true
} bool;

/*
 * ʹ��ö��+typedefʵ���Զ���bool
 */
int main() {
    bool b = true;
    while (b) {
        printf("Ϊ��...\n");
    }
    return 0;
}