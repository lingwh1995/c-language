# include <stdio.h>
# include <stdbool.h>

/**
 * bool����
 *  1.��C������,0Ϊ��,��0��Ϊ��,һ����1������true
 *  2.printf����ֱ�����bool,��Ҫת��Ϊ�������
 */


/*
 * C�����е���ͼ�
 */
void TrueAndFalseTest() {
    //��C������,0Ϊ��,��0��Ϊ��
    int n = 0;
    while (n) {
        printf("Ϊ��...\n");
    }
}

/*
 * stdbool.h����
 */
void StdboolTest() {
    //���Ҫʹ��bool����Ҫ���� stdbool.h
    bool b = false;
    while (b) {
        printf("Ϊ��...\n");
    }
    printf("b = %d\n", b);
    b -= 1;
    //����һ�����1��Ϊʲô�����-1,��Ϊ 0-1=-1 ,-1��0��true,trueֵΪ1
    printf("b = %d\n", b);
    b -= 1;
    //����õ���b=1, 1-1=0,�������0
    printf("b = %d\n", b);
    b -= 1;
    //����õ���b=0, 0-1=-1,-1��0��true,trueֵΪ1
    //����õ���b=1, 1-1=0,�������0
    printf("b = %d\n", b);

    //һЩ�����ж�Ϊ�滹��Ϊ�ٵ�ֵ
    bool i = 0; //false
    bool j = '0'; //true
    bool k = '\0'; //���ַ�,ASCII��Ϊ0,false
    bool l = NULL; //false
    bool m = ' '; //�ո� 32 true

    //���bool
    bool x = false;
    bool y = true;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

#if 0
int main() {
    TrueAndFalseTest();
    StdboolTest();
    return 0;
}
#endif // 0