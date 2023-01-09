#include <stdio.h>
#include <ctype.h>

/**
 * �½�����:
 *      ���֧switch-caseʵ������״̬��
 *      ����:
 *          ͳ�� �ַ��� {" hello    c   lang  nice   "} �е��ʵĸ���
 *
 */

//�궨��ʵ��״̬��
# define BEGIN 0
# define IN_WORD 1
# define OUT_WORD 2
# define END 3

//ö��ʵ��״̬��(�Ƽ�ʹ��)
/*
enum state {
    BEGIN_ENUM,
    IN_WORD_ENUM,
    OUT_WORD_ENUM,
    END_ENUM
};
*/


/*
 * ͳ�Ƶ����г��ֵ�������ĸ
 */
void FSM1(char str[]) {
    int i = 0;
    //��¼���ʸ���
    int sum_alpha = 0;
    int state = BEGIN;
    //�����ַ������·�ʽ: �����ַ������һ���ַ��� \0 ������
    for (int i = 0; str[i] != '\0'; i++) {
        switch (state) {
        case BEGIN:
            if (isalpha(str[i])) {
                state = IN_WORD;
            }
            else {
                state = OUT_WORD;
            }
            break;
        case IN_WORD:
            if (!isalpha(str[i])) {
                sum_alpha++;
                state = OUT_WORD;
            }
            break;
        case OUT_WORD:
            if (isalpha(str[i])) {
                state = IN_WORD;
            }
            break;
        }
    }
    if (state == IN_WORD) {
        sum_alpha++;
        state = END;
    }
    printf("sum_alpha = %d\n", sum_alpha);
}

/*
 * ͳ�Ƶ����г��ֵ�������ĸ�Ϳո�
 */
void FSM2(char str[]) {
    int i = 0;
    //��¼���ʸ���
    int sum_alpha = 0;
    int sum_space = 0;
    int state = BEGIN;
    //�����ַ������·�ʽ: �����ַ������һ���ַ��� \0 ������
    for (int i = 0; str[i] != '\0'; i++) {
        switch (state) {
        case BEGIN:
            if (isalpha(str[i])) {
                state = IN_WORD;
            }
            else {
                state = OUT_WORD;
                sum_space++;
            }
            break;
        case IN_WORD:
            if (!isalpha(str[i])) {
                sum_alpha++;
                state = OUT_WORD;
            }
            break;
        case OUT_WORD:
            if (isalpha(str[i])) {
                state = IN_WORD;
            }
            sum_space++;
            break;
        }
    }
    if (state == IN_WORD) {
        sum_alpha++;
        state = END;
    }
    printf("sum_alpha = %d\n", sum_alpha);
    printf("sum_space = %d\n", sum_space);
}

int main() {
    char str[] = { " hello  c   lang    nice     " };
    //FSM1(str);
    FSM2(str);
    return 0;
}
