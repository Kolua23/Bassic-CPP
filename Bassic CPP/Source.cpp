#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	switch (i)
	{

	case 1:
	{
		setlocale(LC_ALL, "ru");
		int t, s, v;
		cout << "������� �� ��������� ";
		cin >> s;
		cout << "��� �� ���� ������� ������";
		cin >> t;
		v = s / t;
		cout << "������� ����� � �������� " << v << " �� ��� " << endl;

	}break;
	case 2:
	{
		int h1, h2, m1, m2, s1, s2;
		setlocale(LC_ALL, "ru");
		cout << "��� ";
		cin >> h1;
		cout << "����� ";
		cin >> m1;
		cout << "������ ";
		cin >> s1;
		cout << "��� ";
		cin >> h2;
		cout << "����� ";
		cin >> m2;
		cout << "������ ";
		cin >> s2;
		int result = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
		cout << "������� ������� ��� " << result / 60 * 2;

	}break;
	case 3: {
		int v, nam1, nam2, nam3;
		int result1, result2, result3;
		setlocale(LC_ALL, "ru");
		cout << "������� �� ";
		cin >> v;
		cout << "���� 92 ������� ";
		cin >> nam1;
		cout << "���� 95 ������� ";
		cin >> nam2;
		cout << "���� 90 ������� ";
		cin >> nam3;
		result1 = v * 100 / nam1;
		result2 = v * 100 / nam2;
		result3 = v * 100 / nam3;

		system("cls");
		cout << "#>----------------------------------------<#" << endl;
		cout << "#>------<" << "������� " << result1 << " ���� �� " << v << " �� >----<#" << endl;
		cout << "#>------<" << "������� " << result2 << " ���� �� " << v << " �� >----<#" << endl;
		cout << "#>------<" << "������� " << result3 << " ���� �� " << v << " �� >----<#" << endl;
		cout << "#>----------------------------------------<#";
	}break;

	}
	return 0;
}