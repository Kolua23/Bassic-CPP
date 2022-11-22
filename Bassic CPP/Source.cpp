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
		cout << "відстань до айропорта ";
		cin >> s;
		cout << "час за який потрібно доїхати";
		cin >> t;
		v = s / t;
		cout << "потрібно їхати зі швидкістю " << v << " км час " << endl;

	}break;
	case 2:
	{
		int h1, h2, m1, m2, s1, s2;
		setlocale(LC_ALL, "ru");
		cout << "час ";
		cin >> h1;
		cout << "минут ";
		cin >> m1;
		cout << "секунд ";
		cin >> s1;
		cout << "час ";
		cin >> h2;
		cout << "минут ";
		cin >> m2;
		cout << "секунд ";
		cin >> s2;
		int result = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
		cout << "вартість прокату грн " << result / 60 * 2;

	}break;
	case 3: {
		int v, nam1, nam2, nam3;
		int result1, result2, result3;
		setlocale(LC_ALL, "ru");
		cout << "відстань км ";
		cin >> v;
		cout << "ціна 92 бензина ";
		cin >> nam1;
		cout << "ціна 95 бензина ";
		cin >> nam2;
		cout << "ціна 90 бензина ";
		cin >> nam3;
		result1 = v * 100 / nam1;
		result2 = v * 100 / nam2;
		result3 = v * 100 / nam3;

		system("cls");
		cout << "#>----------------------------------------<#" << endl;
		cout << "#>------<" << "вартість " << result1 << " ціна за " << v << " км >----<#" << endl;
		cout << "#>------<" << "вартість " << result2 << " ціна за " << v << " км >----<#" << endl;
		cout << "#>------<" << "вартість " << result3 << " ціна за " << v << " км >----<#" << endl;
		cout << "#>----------------------------------------<#";
	}break;

	}
	return 0;
}