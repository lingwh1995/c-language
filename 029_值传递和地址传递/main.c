#include <stdio.h>
#include <ctype.h>

/**
 * ֵ���ݺ͵�ַ����
 *  ֵ����: ��ֵ����һ��
 *  ��ַ����: ��ָ���ֵ����һ��,���Ǽ���һ��
 * �ܽ�: ֵ���ݺ͵�ַ���ݱ����϶��ǰ�ֵ����һ��,ֻ����ֵ���ݸ��Ƶ�����ֵ,��ַ���ݸ��Ƶ��ǵ�ֵַ
 */

 /**
  * ֵ����: ����ʵ�ֽ���a��b��ֵ
  * @param a
  * @param b
  */
void SwapTwoNumber1(int a, int b) {
    int t = a;
    a = b;
    b = t;
    //printf("a = %d, b = %d\n",a ,b);
}

/**
 * ��ַ����
 *  ��һ�ּ�Ӹı�ֵ�ķ���
 */
void SwapTwoNumber2(int* x, int* y) {
    //ʹ��ָ�����ǰ��ȷ���������ȶ�ָ������пմ���
    if (x == NULL || y == NULL) {
        return;
    }
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    //ֵ���ݵ��ú������ܸı�a��b��ֵ
    int a = 10, b = 20;
    SwapTwoNumber1(a, b);
    printf("a = %d, b = %d\n", a, b);

    //��ַ���ݵ��ú�������Ըı�x��y��ֵ
    int x = 10, y = 20;
    //ʵ�κ��βεĽ���Ǵ�������,���Ǵ�������
    SwapTwoNumber2(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
