#include<iostream>
using namespace std;
int main()
{

	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	cout << "�������һֻС�������\n";

	cin >> pig1;

	cout << "������ڶ�ֻС�������\n";

	cin >> pig2;

	cout << "���������ֻС�������\n";

	cin >> pig3;

	cout << "��һֻС������أ�" << pig1 << endl;
	cout << "�ڶ�ֻС������أ�" << pig2 << endl;
	cout << "����ֻС������أ�" << pig3 << endl;

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "��һֻС������" << endl;
		}
		else 
		{
			cout << "����ֻС������" << endl;
		}
	}

	else
	{
		if (pig2 > pig3)
		{
			cout << "�ڶ�ֻС������" << endl;
		}
		else
		{
			cout << "����ֻС������" << endl;
		}
	}

	system("pause");

	return 0;

}