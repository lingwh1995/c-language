#include <stdio.h>

/*
 * C�����е�����ѭ��:
 *  while
 *  do while
 *  for
 */

/*
 * whileѭ������
 */
void WhileLoopTest() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        //������ε�����һ��,�������ѭ��
        i++;
    }
}

/*
 * do whileѭ������
 */
void DoWhileLoopTest() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}

/*
 * forѭ������
 */
void ForLoopTest() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    printf("------------------\n");

    for (i = 0; i < 10; i++);
    {
        printf("%d\n", i);
    }
    printf("------------------\n");
}

#if 0
int main() {
    //WhileLoopTest();
    //DoWhileLoopTest();
    ForLoopTest();
}
#endif // 0