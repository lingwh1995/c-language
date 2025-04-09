#include <stdio.h>
#include <limits.h>
#include <ctype.h>

/*
 * limits.h
 */
void LimitsDotHTest() {
    //��Ҫ����limits.h�����
    int max_value = INT_MAX;
    int min_value = INT_MIN;
    printf("int��������max_value��%d\n", INT_MAX);
    printf("int��������min_value��%d\n", INT_MIN);
}

/*
 * ctype.h
 * isalnum	��� ch �Ƿ�Ϊ��ĸ������
 * isalpha	��� ch �Ƿ�Ϊ��ĸ
 * isblank (C++11 only)	��� ch �Ƿ�Ϊ��\t�� �� �� ��
 * iscntrl	��� ch �Ƿ�Ϊ�����ַ��� ASCIIֵ�� 0 ~ 31��
 * isdigit	��� ch �Ƿ�Ϊ���֣� ��0�� ~ ��9�� ��
 * isgraph	��� ch �Ƿ�Ϊ����ʾ�ַ����������ո�
 * islower	��� ch �Ƿ�ΪСд��ĸ����a�� ~ ��z����
 * isprint	��� ch �Ƿ�Ϊ�ɴ�ӡ�ַ��������ո�
 * ispunct	��� ch �Ƿ�Ϊ����ַ���������ĸ�����ֺͿո���������пɴ�ӡ�ַ�
 * isspace	��� ch �Ƿ�Ϊ �� ', ��\t��, ��\n��, ��\v��, ��\f��, ��\r��
 * isupper	��� ch �Ƿ�Ϊ��д��ĸ����A�� ~ ��Z����
 * isxdigit	��� ch �Ƿ�Ϊһ�� 16 ���Ƶ���ѧ�ַ����� ��0�� ~ ��9�� �� ��A�� ~ ��F�� �� ��a�� - ��f����
 * tolower	�� ch �ַ�ת����Сд��ĸ
 * toupper	�� ch �ַ�ת���ɴ�д��ĸ
 */
void CtypeDotHTest() {
    char c = 'a';
    printf("isalnum: %d\n", isalnum(c));
    printf("toupper: %c\n", toupper(c));
}

int main() {
    //LimitsDotHTest();
    CtypeDotHTest();
	return 0;
}