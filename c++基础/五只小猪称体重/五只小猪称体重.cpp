#include<iostream>
using namespace std;

int main()
{

	// 1. ������ֻС�������
	int arr[] = {300,350,200,400,250};
	int max = 0;
	for (int  i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	cout << "���ص�������Ϊ" << max << endl;

	system("pause");
	return 0;
}