#ifndef MYLIB_H
#define MYLIB_H
//���������ļ��е�һ����static���ε�ȫ�ֱ���
extern int gi_in_other_file_static;
//���������ļ��е�һ����static���ε�ȫ�ֳ���
extern const int gc_in_other_file_static;
//���������ļ��е�һ����static���εķ���
extern int AddInOtherFileStatic(int, int);

//���������ļ��е�һ��û�б�static���ε�ȫ�ֱ���
extern int gi_in_other_file_ordinary;
//���������ļ��е�һ��û�б�static���ε�ȫ�ֳ���
extern const int gc_in_other_file_ordinary;
//���������ļ��е�һ��û�б�static���εķ���
extern int AddInOtherFileOrdinary(int, int);
#endif // !MYLIB_H