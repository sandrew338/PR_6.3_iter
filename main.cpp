#include"iostream"
#include"iomanip"
using namespace std;
void FillArray(int* arr, const int size);
int OutputArray(int* arr, const int size);
int a();
template <typename T>
T FillArrayWithT(T *arr, T size)
{
	int value;
	for (T i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: "; cin >> value;
		arr[i] = value;
	}
	return '0';
}
template <typename T>
T OutputArrayWithT(T* arr, const T size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
	return 9;
}
int main()
{

	int n;
	cout << "n: "; cin >> n;
	int* arr = new int[n];
	FillArray(arr, n);
	cout << "By ordinary functions:\n";
	OutputArray(arr, n);
	cout << "By functions(with templates):\n";
	FillArrayWithT(arr, n);
	OutputArrayWithT(arr, n);
	delete[]arr;
	return 0;
}
void FillArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: "; cin >> arr[i];
	}
}
int OutputArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
	return 0;
}
int a() { return 0; }

