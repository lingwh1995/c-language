//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

/*
 * ��׼����:
 *	1.getchar()�����뵥���ַ������浽�ַ�������
 *  2.gets()������һ�����ݣ����浽�ַ���������
 *  3.scanf()����ʽ�����뺯����һ�ο������������ݣ����浽���������
 *		���c4996 scanf���棺
 *			1.��.c�ļ���һ������궨��: #define _CRT_SECURE_NO_WARNINGS
 *			2.��.c�ļ���һ������Ԥ����ָ��:	#pragma warning(disable:4996)
 *		
 *	gets()��scanf()����
 *		1.gets()���յ��ַ����м�����пո�,scanf()���յ��ַ����м䲻���пո�
 *		2.get()����ջ������Ļ��з�,scanf()������ջ������Ļ��з�
 * 
 * ��׼���:
 *  1.putchar()����������ַ�������ֵΪ�������ֵ
 *  2.puts()������ַ�������Ҫ���ڼ����
 *  3.printf()����ʽ����������������������������,��Ҫ���ڸ�ʽ�����
 * 
 * ASCII����ʽ�����ת���ַ��������
 *	1.ASCII����ʽ���: ��һ���ַ���ASCII����ʽ���
 *  2.ת���ַ������: ���ת�����ַ�
 * 
 * 
 * ����double�������ݵ����⴦��:
 *	���double����,ʹ��%f����: ��scanf��ȡdouble����,����ʹ��%lf��ֹ���ȶ�ʧ
 */

/*
 * ����getchar()
 */
void GetCharTest() {
	printf("�����뵥���ַ�: \n");
	char c = getchar();
	printf("�ַ��������: c = %c\n", c);
	printf("ASCII�����: c = %d\n", c);
}

/*
 * ����gets()
 */
void GetsTest1() {
	printf("�������ַ���: \n");
	//����涨�ַ����ĳ���,����ᱨ�쳣
	char str[20] = "\0";
	gets(str);
	printf("str = %s\n", str);
}

/*
 * ����gets()
 */
void GetsTest2() {
	printf("�������ַ���: \n");
	//����涨�ַ����ĳ���,����ᱨ�쳣
	char str[30];
	//һ��Ҫ�Ƚ�ָ�������ʼ��
	char* string = str;
	//Ҳ����д��gets(str);
	gets(string);
	//����������Ѿ�����õ�"ָ�������"
	printf("%s\n", string);
}

/*
 * ����scanf()
 */
void ScanfTest1() {
	int i;
	float f;
	char c;
	printf("�������ַ���(ʹ�ÿո����):\n");
	scanf("%d %f %c", &i, &f, &c);
	printf("i = %d, f = %f, c = %c\n", i, f, c);
}

/*
 * ����scanf()
 */
void ScanfTest2() {
	printf("�������ַ���: \n");
	//����涨�ַ����ĳ���,����ᱨ�쳣
	char str[30];
	scanf("%s", &str);
	printf("str = %s\n", str);
}

/*
 * ����scanf()
 */
void ScanfTest3() {
	printf("������double��������: \n");
	double d;
	scanf("%lf", &d);
	printf("d = %f\n", d);
}

/*
 * ����get()��scanf()
 *	��������: i love you
 *  gets()���յ�: i love you
 *  scanf()���յ�: i
 */
void GetsAndScanfTest1() {
	printf("�������ַ���(ʹ�ÿո����): \n");
	char str_1[30];
	gets(str_1);
	printf("str_1 = %s\n", str_1);
	printf("�������ַ���(ʹ�ÿո����): \n");
	//����涨�ַ����ĳ���,����ᱨ�쳣
	char str_2[30];
	scanf("%s", &str_2);
	printf("str_2 = %s\n", str_2);
}

/*
 * ����get()��scanf()
 *  1.�������н��
 *		����������:
 *		a
 *		str = a
 *		1
 *		c = 1
 *		c =
 *  2.get()����ջ������Ļ��з�,scanf()������ջ������Ļ��з�
 */
void GetsAndScanfTest2() {
	printf("����������: \n");
	char str[30];
	gets(str);
	printf("str = %s\n", str);
	char c;
	scanf("%c",&c);
	printf("c = %c\n", c);
	//�ڶ���scanf()ֱ�ӽ����˻������еĻ��з�,�޷������û����������
	scanf("%c", &c);
	printf("c = %c\n", c);
}

/*
 * ����putchar()
 */
void PutCharTest() {
	putchar('\101');//����ʮ���Ƶ�65��������ĸA
	putchar('\x42');//����ʮ���Ƶ�66��������ĸB,����aΪ97
	char c = 'C';
	putchar(c);

	int sum = 0;
	sum = putchar('A');
	printf("%d", sum);

}

/*
 * ����puts()
 */
void PutsTest() {
	char name[] = "���!";
	//��printf���
	printf("%s\n", name);
	//��puts()���
	puts(name);
	//ֱ������ַ���
	puts("�Ұ���!");
}

/*
 * ����printf()
 */
void PrintfTest() {
	//�����ͬ����
	int a = 10;
	printf("ʮ����=%d �˽���=%o ʮ������=%x\n", a, a, a);

	//�����ͬ��������
	int b = 1;
	float f = 3.14;
	char c = 'a';
	printf("a = %d, f = %f, c = %c\n", b, f, c);

	//����������
	printf("%d%d\n", a, b);
	printf("%5d%d\n", a, b);
	printf("%-5d%d\n", a, b);
}

/*
 * ASCII����ʽ�����ת���ַ������
 */
void AsciiPrintfAndEscapePrintfTest() {
	/*
	 *ASCII����ʽ���
	 */
	char c = 'a';
	//����ַ�����
	printf("ԭ�ַ�a = %c\n", c);
	//��ASCII����ʽ���
	printf("ԭ�ַ�a��ASCII�� = %d\n", c);


	/**
	 * ת���ַ������
	 */
	char c1 = '\t';
	printf("+%c+\n", c1);
	//�����б��
	printf("\\");
	//���˫����
	printf("\"");

	/**
	 * 8���ƺ�16����ת��
	 *      8����: \102
	 *      16����: \xdf
	 */

	printf("8���Ƶ�ת��:\102\n");
	printf("16���Ƶ�ת��:\x13\n");
}


//��׼��������Ļ�������
#if 0
int main() {
	//GetCharTest();
	//GetsTest1();
	//GetsTest2();
	//ScanfTest1();
	//ScanfTest2();
	//ScanfTest3();
	//GetsAndScanfTest1();
	//GetsAndScanfTest2();
	//PutCharTest();
	//PutsTest();
	//PrintfTest();
	//AsciiPrintfAndEscapePrintfTest();
	return 0;
}
#endif // 0