#include<iostream>
using namespace std;

void main()
{

	int arr[] = {1,2,3,4,5};
	/*ָ����ʵ�һ��Ԫ��*/
	int* p = arr;

	//cout << *p << endl;

	/*ָ����ʵڶ���Ԫ�أ�ֻ����p++ ƫ��4���ֽ�*/
	//p++;
	//cout << *p << endl;

	/*����ָ��ѭ����������*/
	for (int i = 0; i < 5; i++)
	{
		cout << *p << endl;
		p++;
	}

}