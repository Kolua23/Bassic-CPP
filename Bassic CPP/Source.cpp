#include<iostream>
#include<ctime>

using namespace std;
int Plus(int x, int y)
{
	return x + y;
}
int Minus(int x, int y)
{
	return x - y;
}
int Pom(int x, int y)
{
	return x * y;
}
int Dil(int x, int y)
{
	return x / y;
}

template<typename T>
T* initialArr(const uint32_t size1, const uint32_t size2)
{
	return  new T[size1], new T[size2];
}
template<typename T>
void randArr(T* arr, const uint32_t size1, const uint32_t size2)
{
	for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size2; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
template<typename T>
void printArr(T* arr, const uint32_t size1, const uint32_t size2)
{
	for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size2; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
}
int main()
{

	int nam;
	cout << "nam is ";
	cin >> nam;
	switch (nam)
	{
		//case 1:
		//{
		//	int (*sumptr[4])(int, int) = {Plus,Minus,Dil,Pom};
		//for (int i = 0; i <4; i++)
		//{
		//	cout << sumptr[i](9, 8) << endl;
		//}
		//return 0;
		//}break;
	case 2:
	{
		srand(time(0));
		int A, B;
		cout << "A=>";
		cin >> A;
		cout << "B=>";
		cin >> B;
		int* C = initialArr<int>(A, B);
		randArr<int>(C, A, B);
		printArr<int>(C, A, B);
	}break;
	default:
		break;
	}



}