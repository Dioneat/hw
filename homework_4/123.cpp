#include "stdio.h"
#include "math.h"
#include <malloc.h>
#include <stdlib.h>
#include <iostream>

// # 1
//void generate_array(int* arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//}
//
//int find_min_array(int* arr, int size)
//{
//	int min = 1000;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	return min;
//}
//int find_max_array(int* arr, int size)
//{
//	int max = -1;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//int find_arithmetic_value(int* arr, int size)
//{
//	int value = 0;
//	for (int i = 0; i < size; i++)
//	{
//		value += arr[i];
//	}
//	return value / size;
//}
//void print_array(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//int main()
//{
//	int size = 10;
//	int* arr = (int*)malloc(sizeof(int) * size);
//	generate_array(arr, size);
//	printf("Min value: %d\n", find_min_array(arr, size));
//	printf("Max value: %d\n", find_max_array(arr, size));
//	printf("Arithmetic value: %d\n", find_arithmetic_value(arr, size));
//	print_array(arr, size);
//}

//#2
//void main()
//{
//
//    char* s1[20], s2[20];
//
//    puts("Type text 1: ");
//    gets(s1);
//    puts("Type text 2: ");
//    gets(s2);
//    
//    strncat(s1, s2, strlen(s2)+1);
//    printf(s1);
//
//}
//
//void sort_even_num(int* arr, int size)
//{
//	for (int i = 0; i < size; i++) {
//		// сравниваем два соседних элемента.
//		for (int j = 0; j < size - i; j++) {
//			if (arr[j] % 2 == 0 && arr[j] > arr[j + 1]) {
//
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void main()
//{
//	int size = 0;
//	
//	printf("Input size of array: ");
//	scanf_s("%d", &size);
//
//	int* arr = (int*)malloc(sizeof(int) * size);
//	printf("Input value of array: ");
//
//	for (int i = 0; i < size; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	sort_even_num(arr, size);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

using namespace std;
void main()
{
	int str_count, col_count;

	cout << "Enter count column of table: ";
	cin >> col_count;
	string* col = new string[col_count];
	cout << "Input title column of table:" << endl;
	int* max_size = new int[col_count];
	for (int i = 0; i < col_count; i++)
	{
		cin >> col[i];
		max_size[i] = col[i].length();
	}
	
	cout << "Enter count string of table: ";
	cin >> str_count;
	string** table = new string * [str_count]; // две строки в массиве
	for (int count = 0; count < str_count; count++)
		table[count] = new string[col_count];
	
	for (int i = 0; i < col_count; i++)
	{
		cout << "Input text for column " + col[i] + ":";
		for (int j = 0; j < str_count; j++)
		{
			cin >> table[i][j];
			max_size[i] = max(max_size[i], (int)table[i][j].length());
		}
		
	}

	cout << endl;
	for (int i = 0; i < col_count; i++)
	{
		cout << max_size[i] << endl;
	}
	cout << endl;

	cout << "Your table:" << endl;
	cout << "| ";
	for (int i = 0; i < col_count; i++)
	{
		cout << col[i];
		for (size_t i = 0; i < max_size[i] - col[i].length(); i++)
		{
			cout << " ";
		}
		cout << " | ";
	}
	cout << endl;
	for (int i = 0; i < str_count; i++)
	{
		cout << "| ";
		for (size_t j = 0; j < col_count; j++)
		{
			cout << table[j][i];
			int ms = max_size[i], t = table[j][i].length(), mst = ms - t-1;
			for (size_t i = 0; i < max_size[i] - table[i][j].length(); i++)
			{
				cout << " ";
			}
			cout << " | ";
		}
		cout << endl;
	}
}