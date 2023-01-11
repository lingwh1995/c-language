#include <stdio.h>
#include <limits.h>
#include <ctype.h>

/*
 * limits.h
 */
void LimitsDotHTest() {
    //需要引入limits.h这个库
    int max_value = INT_MAX;
    int min_value = INT_MIN;
    printf("int类型数据max_value：%d\n", INT_MAX);
    printf("int类型数据min_value：%d\n", INT_MIN);
}

/*
 * ctype.h
 * isalnum	检查 ch 是否为字母或数字
 * isalpha	检查 ch 是否为字母
 * isblank (C++11 only)	检查 ch 是否为’\t’ 或 ’ ’
 * iscntrl	检查 ch 是否为控制字符（ ASCII值在 0 ~ 31）
 * isdigit	检查 ch 是否为数字（ ‘0’ ~ ‘9’ ）
 * isgraph	检查 ch 是否为可显示字符，不包括空格
 * islower	检查 ch 是否为小写字母（‘a’ ~ ‘z’）
 * isprint	检查 ch 是否为可打印字符，包括空格
 * ispunct	检查 ch 是否为标点字符，即除字母，数字和空格以外的所有可打印字符
 * isspace	检查 ch 是否为 ’ ', ‘\t’, ‘\n’, ‘\v’, ‘\f’, ‘\r’
 * isupper	检查 ch 是否为大写字母（‘A’ ~ ‘Z’）
 * isxdigit	检查 ch 是否为一个 16 进制的数学字符（即 ‘0’ ~ ‘9’ 或 ‘A’ ~ ‘F’ 或 ‘a’ - ‘f’）
 * tolower	将 ch 字符转换成小写字母
 * toupper	将 ch 字符转换成大写字母
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