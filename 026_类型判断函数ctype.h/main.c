# include <stdio.h>
# include <ctype.h>

/**
 * getchar()��if-else��ctype.h
 *  ctype.h: �ж�һ���ַ��Ƿ�Ϊ�����ַ������֡���д��ĸ��Сд��ĸ
 */

 /**
  * �Լ�ʵ���ж��߼�
  */
void JudgeCharacterTypeTest1() {
    printf("������һ���ַ�:\n");
    char c = getchar();
    if (c < 32) {
        printf("this is a control char\n");
    }
    else if (c > '0' && c < '9') {
        printf("this is a digital char\n");
    }
    else if (c > 'a' && c < 'z') {
        printf("this is a small char\n");
    }
    else if (c > 'A' && c < 'Z') {
        printf("this is a big char\n");
    }
    else {
        printf("other char\n");
    }
}

/**
 * ����ctype.hʵ���ж��߼�
 */
void JudgeCharacterTypeTest2() {
    printf("������һ���ַ�:\n");
    char c = getchar();
    if (iscntrl(c)) {
        printf("this is a control char\n");
    }
    else if (isdigit(c)) {
        printf("this is a digital char\n");
    }
    else if (isalnum(c)) {
        printf("this is a small char\n");
    }
    else if (isupper(c)) {
        printf("this is a big char\n");
    }
    else {
        printf("other char\n");
    }
}
int main() {
    //JudgeCharacterTypeTest1();
    JudgeCharacterTypeTest2();
    return 0;
}
