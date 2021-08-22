

#include <iostream>

using namespace std;
template<class T>
T average(T arr[], int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}
template<class T>
void showData(T arr[], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << ";";
	cout << " - среднее значение: " << average(arr, size) << endl;
}

////template<class T, class T1> class array1
////{
////public:
////	array1(int size);
////	T1 sum();
////	T average_value();
////	void show_array();
////	int add_value(T);
////private:
////	T* data;
////	int size;
////	int index;
////};
////template<class T, class T1> array1<T, T1>::array1(int size)
////{
////	data = new T[size];
////	if (data == NULL)
////	{
////		cerr << "Error memory ---- exit program" << endl;
////		
////			exit(1);
////	}
////	array1::size = size;
////	array1::index = 0;
////}
////template<class T, class T1> T1 array1<T, T1>::sum()
////{
////	T1 sum = 0;
////	for (int i = 0; i < index; i++) sum += data[i];
////	return(sum);
////}
////template<class T, class T1> T array1<T, T1>::average_value()
////{
////	T1 sum = 0;
////	for (int i = 0; i < index; i++) sum += data[i];
////	return (sum / index);
////}
////template<class T, class T1> void array1<T, T1>::show_array()
////{
////	for (int i = 0; i < index; i++) cout << data[i] << ' ';
////	cout << endl;
////}
////template<class T, class T1> int array1<T, T1>::add_value(T value)
////{
////	if (index == size)
////		return(-1);
////	else
////	{
////		data[index] = value;
////		index++;
////		return(0);
////	}
////}
//	///*void sorting(int arr[], int size) {
//	//	int j = 0;
//	//	for (int i = 0; i < size; i++) {
//	//		int x = arr[i];
//	//		for (j = i - 1; j >= 0 && x < arr[j]; j--)
//	//			arr[j + 1] = arr[j];
//	//		arr[j + 1] = x;
//	//	}
//	//}*/
//
//	//template<class T>void sorting(T arr[], int size)
//	//{
//	//	int j = 0;
//	//	for (int i = 0; i < size; i++) {
//	//		T x = arr[i];
//	//		for (j = i - 1; j >= 0 && x < arr[j]; j--)
//	//			arr[j + 1] = arr[j];
//	//		arr[j + 1] = x;
//	//	}
//	//}
int main()
{
	system("chcp 1251");
	system("cls");
	int arr1[] = { 8,4,5,8,12,34,56,88,11 };
	double arr2[] = { 1.1,5.4,7.3,7.1,11.5,78.2 };
	char arr3[] = "o shit";
	long arr4[] = {1111144,2222266,886588,777711,999999,3333453,7777651,666887,777333};
	int k1 = sizeof(arr1) / sizeof(arr1[0]);
	int k2 = sizeof(arr2) / sizeof(arr2[0]);
	int k3 = sizeof(arr3) / sizeof(arr3[0]);
	int k4 = sizeof(arr4) / sizeof(arr4[0]);
	showData(arr1, k1);
	showData(arr2, k2);
	showData(arr3, k3);
	showData(arr4, k4);
	//array1<int, long> numbers(100);
	//array1<float, float> values(200);
	//int i;
	//for (i = 0; i < 50; i++) numbers.add_value(i);
	//	numbers.show_array();
	//cout << "Sum = " << numbers.sum() << endl;
	//cout << "Average = " << numbers.average_value() << endl;
	//for (i = 0; i < 100; i++) values.add_value(i * 100);
	//values.show_array();
	//cout << "Sum = " << values.sum() << endl;
	//cout << "Average = " << values.average_value() << endl;

	////*int arr[] = { 9,3,17,6,5,4,31,2,12 };
	////int k1 = sizeof(arr) / sizeof(arr[0]);
	////sorting(arr, k1);
	////for (int i = 0; i < k1; i++) cout << arr[i] << ";";*/
	//////_________________
	////int arr[] = { 9,3,17,6,5,4,31,2,12 };
	////double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	////char arrc[] = "Hello, word";
	////int k1 = sizeof(arr) / sizeof(arr[0]);
	////int k2 = sizeof(arrd) / sizeof(arrd[0]);
	////int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	////sorting(arr, k1);
	////for (int i = 0; i < k1; i++) cout << arr[i] << ";";
	////cout << endl;
	////sorting(arrd, k2);
	////for (int i = 0; i < k2; i++) cout << arrd[i] << ";";
	////cout << endl;
	////sorting(arrc, k3);
	////for (int i = 0; i < k3; i++) cout << arrc[i] << ";";
	////cout << endl;
}


