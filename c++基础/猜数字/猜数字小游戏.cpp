#include<iostream>
using namespace std;
#include<ctime>
int main()
{

	srand(((unsigned int) time(NULL)));

	int num = rand() % 100 + 1;

	int val = 0;

	

	

	while (true)
	{
		cout << "��������²������\n";
		cin >> val;

		if (num > val)
		{
			cout << "�µ�����̫С��\n";
		}
		else if (num < val)
		{
			cout << "�µ�����̫����\n";
		}
		else
		{
			cout << "��ϲ��¶���\n";
			break;
		}
	}

	system("pause");
	return 0;
}