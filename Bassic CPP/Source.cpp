#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
T* initializeArray(const uint32_t size)
{
    return new T[size];
}
template <typename T>
void randArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 15;
    }
}
template <typename T>
void printArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}
template <typename T>
T* deletArray(T* arr, const uint32_t size)
{
    delete[] arr;
    return nullptr;
}

template<typename T>
void addArr(T* arr, const uint32_t size)
{
    int* temp = NULL;
    int numtemp = size + 1;
    int sum = 0;
    temp = initializeArray(numtemp, temp);
    for (int i = 0; i < size; i++) {
        temp[i] = i;
        sum += size;
    }
    temp[numtemp] = sum;
    deletarr(arr);
    arr = initializeArray(numtemp, temp);
    arr = temp;
    deletarr(temp);
}
template<typename T>
T* resloveCopy(T* arr, int& size)
{
    int size_copy = 0;
    bool flag = false;
    int k = 0;
    T* arr_copy = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        arr_copy[i] = -1;
    }
    for (size_t i = 0; i < size; i++)
    {
        flag = false;
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] == arr_copy[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            arr_copy[k] = arr[i];
            k++;
        }
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr_copy[i] != -1)
        {
            size_copy++;
        }
        else {
            break;
        }
    }
    T* res = new T[size_copy];
    for (size_t i = 0; i < size_copy; i++)
    {
        res[i] = arr_copy[i];
    }
    delete[]arr_copy;
    size = size_copy;
    return res;
}
template <typename T>
T* initializeArrayC(T* A, T* B, const uint32_t M, const uint32_t N, int& counter)
{
    bool flag = false;
    if (counter == 0)
    {
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                counter++;
            }
        }
        return initializeArrayC<T>(A, B, M, N, counter);
    }
    else {
        T* arr = new T[counter];
        int k = 0;
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                arr[k] = A[i];
                k++;
            }
        }
        return arr;
    }
}
template<typename T>
T* iniArr(const uint32_t  size)
{
    return new T[size];
}
template<typename T>
void randarr(T* arr, const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;

    }
}
template<typename T>
void printArr(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";

    }cout << endl;
}
template<typename T>
T* deletarr(T* arr, const uint32_t size)
{
    delete[]arr;
    return nullptr;
}
template<typename T>
T* initialarrC(T* A, T* B, const uint32_t M, const uint32_t N, T& size)
{
    T tmp = 0;

    for (size_t i = 0; i < size; i++) {

        for (size_t j = 0; j < size; j++)
        {
            if (A[i] == B[j])
            {

                tmp++;
            }
        }
    }

    int* sizeC = &tmp;
    int* arr = new T[size];
    tmp = 0;
    for (size_t j = 0; j < size; j++) {
        for (size_t i = 0; i < size; i++) {
            if (A[i] == B[j])
            {
                arr[size] = B[j];
                tmp++;
            }
        }
    }
    return arr;

}

int main()
{
    int nam;
    cout << "nam is ";
    cin >> nam;
    switch (nam)
    {
    case 1:
    {
        srand(time(0));
        int M, N;
        cout << "Enter M->";
        cin >> M;
        cout << "Enter N->";
        cin >> N;
        int* A = initializeArray<int>(M);
        int* B = initializeArray<int>(N);
        randArray<int>(A, M);
        randArray<int>(B, N);
        cout << "Array A-> ";
        printArray<int>(A, M);
        cout << "Array B-> ";
        printArray<int>(B, N);
        int sizeC = 0;
        int* C = initializeArrayC<int>(A, B, M, N, sizeC);
        cout << "Array C with copy-> ";
        printArray<int>(C, sizeC);
        int* res = resloveCopy<int>(C, sizeC);
        cout << "Array C-> ";
        printArray<int>(res, sizeC);
        A = deletArray<int>(A, M);
        B = deletArray<int>(B, N);
        C = deletArray<int>(C, sizeC);

    }break;
    case 2:
    {int M, N;;
    cout << "M>=";
    cin >> M;
    cout << "N>=";
    cin >> N;
    int* A = iniArr<int>(M);
    int* B = iniArr<int>(N);
    randarr<int>(A, M);
    randarr<int>(B, N);
    printArr<int>(B, N);
    int size = 0;
    int* C = initialarrC(A, B, M, N, size);

    printArr<int>(C, size);
    A = deletarr<int>(A, M);
    B = deletarr<int>(B, N);
    C = deletarr<int>(C, size);
    return 0;

    }break;
    case 3:
    {
        srand(time(0));
        int nam;
        cout << "nam is ";
        cin >> nam;
        int* nam1 = initializeArray<int>(nam);
        randArray<int>(nam1, nam);
        printArr<int>(nam1, nam);
        nam1 = deletarr<int>(nam1, nam);
        addArr<int>(nam1, nam);
    }break;
    case 4:
    {
        srand(time(0));
    }break;
    default:
        break;
    }

    return 0;
}