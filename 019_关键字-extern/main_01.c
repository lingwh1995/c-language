#include <stdio.h>

//��ȫ��λ�ô�����
int gi_1;
extern int gi_2;

int main() {
	//�ھֲ�λ�ó�����
	extern int gi_3;

	printf("gi_1 = %d\n", gi_1);
	printf("gi_2 = %d\n", gi_2);
	printf("gi_3 = %d\n", gi_3);
	return 0;
}

int gi_1 = 10;
int gi_2 = 20;
int gi_3 = 30;