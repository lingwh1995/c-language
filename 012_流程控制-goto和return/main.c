#include <stdio.h>

/**
 * goto���м�ֵӦ�ó���(���Ӧ�ó���):
 *  �����ڲ�ѭ����ת�������ѭ��,��һ������ת�����ѭ�������
 */

 /**
  * goto����
  *      
  */
void GoToTest() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (k == 5) {
                    printf("k = %d\n", k);
                    goto jump;
                }
            }
        }
    }
jump:
    printf("I am jump!");
}

int main() {
    GoToTest();
    return 0;
}
