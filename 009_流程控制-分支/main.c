#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * ����֧
 *	if else
 * ���֧
 *  switch
 * ��Ԫ���ʽ
 */

/*
 * ����֧����
 */
void SingleBranchTest() {
    printf("������i��j��ֵ,ʹ�ÿո����:\n");
    int i, j, max;
    scanf("%d %d", &i, &j);
    if (i > j) {
        max = i;
    }
    else {
        max = j;
    }
    printf("����ֵ������ֵ max = %d\n", max);
}

/*
 * ���֧����
 */
void MultipleBranchTest() {
    printf("������i��ֵ:\n");
    int i;
    scanf("%d",&i);
    switch (i) {
        case 1:
            printf("�������ֵ��: %d", 1);
            break;
        case 2:
            printf("�������ֵ��: %d", 2);
            break;
        case 3:
            printf("�������ֵ��: %d", 3);
            break;
        case 4:
            printf("�������ֵ��: %d", 4);
            break;
        case 5:
            printf("�������ֵ��: %d", 5);
            break;
        default:
            printf("�������ֵ������ֵ!");
            break;
    }
}

/*
 * ��Ԫ���ʽ����
 */
void TernaryExpression() {
    printf("������i��j��ֵ,ʹ�ÿո����:\n");
    int i, j, max;
    scanf("%d %d", &i, &j);
    max = i > j ? i : j;
    printf("����ֵ������ֵ max = %d\n", max);
}

#if 0
int main() {
    //SingleBranchTest();
    //MultipleBranchTest();
    TernaryExpression();
    return 0;
}
#endif // 0