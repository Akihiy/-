#include<iostream>
using namespace std;

int main()
{

	// 1. ����ָ��
	int a = 10;
	int* p = &a;
	// 2. ��ӡ��ֵַ
	cout << "a�ĵ�ַΪ��" << &a << endl;

	cout << "ָ��pΪ��" << p << endl;

	// 2. ʹ��ָ��
	// ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	*p = 1000;
	cout << "a��ֵΪ��" << a << endl;
	cout << "*p��ֵΪ��" << *p << endl;

}