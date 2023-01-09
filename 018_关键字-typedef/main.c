#include <stdio.h>

/**
* typedef:
*  1.C��������Ϊһ������������һ���µı���.��������һ�ִ洢��Ĺؼ���,��auto��extern��mutable��static��register�ȹؼ��ֲ���ͬʱ������һ�����ʽ��
*  2.�����е�������һ��������,���ǿ��԰�һ�кϷ��Ķ���ı���(��ͨ�������͵ı���/ָ�����)ת��Ϊ����,��:
*      double d; �����Ƕ�����һ��double���͵ı���d
*      typedef double d; ת������˼�Ǹ�double���������������һ������,�൱�ڰ�d��һ������ת����Ϊ��һ������
*  3.typedef���������ں궨��������滻,ֻ�Ǹ������͵�������,��һ����������
*  4.typedef����ö�ٺͽṹ����ʹ��
*/

void TypeDefTest() {
    //��������
    double d;
    unsigned char x;
    unsigned short y;
    unsigned int z;
    int array[10];

    //ʹ��typedef��򻯱���
    typedef double td;
    typedef unsigned char tuc;
    typedef unsigned short tus;
    typedef unsigned int tui;
    typedef int Array[10];

    //ʹ���������͵ļ򻯱�����������
    td d_;
    tuc x_;
    tus y_;
    tui z_;
    //�������˵�,ʹ��ʹ��debugģʽ�鿴��������,����̨�п�����ȷ�鿴����������Ϊ����
    Array nums = { 1,2,3,4 };
    printf("double: sizeof(d)= %lld, sizeof(d_)= %lld\n", sizeof(d), sizeof(d_));
    printf("unsigned char: sizeof(x)= %lld, sizeof(x_)= %lld\n", sizeof(x), sizeof(x_));
    printf("unsigned short: sizeof(y)= %lld, sizeof(y_)= %lld\n", sizeof(y), sizeof(y_));
    printf("unsigned int: sizeof(z)= %lld, sizeof(z_)= %lld\n", sizeof(z), sizeof(z_));
}

/**
 * typedef�ͽṹ����ʹ�÷�ʽһ:
 */
struct Student {
    char id[32];
    char name[20];
    int age;
};
typedef struct Student Student;
typedef struct Student* PStudent;

/**
 * typedef�ͽṹ����ʹ�÷�ʽ��:
 */
typedef struct User {
    char id[32];
    char name[20];
    int age;
} User, *PUser;

/**
 * ����typedef�ͽṹ����ʹ��
 */
void TypeDefWithStructTest() {
    /**
     * ���� typedef�ͽṹ����ʹ�÷�ʽһ:
     */
    Student student;
    PStudent pStudent = &student;

    /**
     * ���� typedef�ͽṹ����ʹ�÷�ʽ��:
     */
    User user;
    PUser pUser = &user;
}

int main() {
    //TypeDefTest();
    TypeDefWithStructTest();
	return 0;
}