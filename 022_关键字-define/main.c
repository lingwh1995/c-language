#include <stdio.h>

//������
//#define SUM(x,y) x*y
//��ȷ����
#define SUM(x,y) (x)*(y)

/**
 * �궨��: �궨��ı�������Ԥ�����ʱ���滻,���Ὺ�ٿռ�,Ҳû������,����������ͼ��
 * ��ĸ�������: չ��,���Զ�����ʱҪ������������
 */

int main() {
    //���Ժ��
    int a = 2;
    int b = 3;
    int c = SUM(a, b);
    printf("c = %d\n", c);
    int d = SUM(a + 5, b + 5);
    // int d = a + 5 * b + 5
    printf("d = %d\n", d);
    return 0;
}
