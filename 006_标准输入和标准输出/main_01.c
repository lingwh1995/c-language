#include <stdio.h>

/**
 * ��׼�����EOF
 */


/**
* ��׼�������
*/
void StdinAndEOFTest1() {
    printf("������,���س�����:\n");
    int sum = 0;
    while (getchar() != '\n') {
        sum++;
    }
    printf("sum = %d\n", sum);
}


/**
 * ��׼�����EOF����
 */
void StdinAndEOFTest2() {
    printf("������,�� ���з�+Ctrl+D ����:\n");
    int sum = 0;
    while (getchar() != EOF) {
        sum++;
    }
    printf("sum = %d\n", sum);
}


/**
 * ��׼�������
 *  ���յ����ַ�: ����������ٸ��ַ�,��ֻ����յ�һ���ַ�
 */
void StdinAndEOFTest3() {
    printf("������:\n");
    char ch = getchar();
    printf("ch = %c", ch);
}


/**
 * ��׼�������
 *  ���ն���ַ�
 */
void StdinAndEOFTest4() {
    printf("������:\n");
    char ch = '\0';
    //Ϊʲôgetchar()���Է���while����Ĵ�������,�����ն���ַ�,��Ϊgetchar()��һ������������

    //����д��
    //while (ch = getchar() != '\n') {
    //��ȷд��
    //while ((ch = getchar()) != '\n') {
    while ((ch = getchar()) != EOF) {
        printf("ch = %c\n", ch);
    }
}

int main() {
    //StdinAndEOFTest1();
    //StdinAndEOFTest2();
    //StdinAndEOFTest3();
    StdinAndEOFTest4();
}