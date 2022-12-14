//#include "stdio.h"
//#include "math.h"
//#include <malloc.h>
//#include <stdlib.h>
//
//
//// # 1
////void generate_array(int* arr, int size) {
////	for (int i = 0; i < size; i++)
////	{
////		arr[i] = rand() % 10;
////	}
////}
////
////int find_min_array(int* arr, int size)
////{
////	int min = 1000;
////	for (int i = 0; i < size; i++)
////	{
////		if (arr[i] < min)
////			min = arr[i];
////	}
////	return min;
////}
////int find_max_array(int* arr, int size)
////{
////	int max = -1;
////	for (int i = 0; i < size; i++)
////	{
////		if (arr[i] > max)
////			max = arr[i];
////	}
////	return max;
////}
////int find_arithmetic_value(int* arr, int size)
////{
////	int value = 0;
////	for (int i = 0; i < size; i++)
////	{
////		value += arr[i];
////	}
////	return value / size;
////}
////void print_array(int* arr, int size)
////{
////	for (int i = 0; i < size; i++)
////	{
////		printf("%d\n", arr[i]);
////	}
////}
////
////int main()
////{
////	int size = 10;
////	int* arr = (int*)malloc(sizeof(int) * size);
////	generate_array(arr, size);
////	printf("Min value: %d\n", find_min_array(arr, size));
////	printf("Max value: %d\n", find_max_array(arr, size));
////	printf("Arithmetic value: %d\n", find_arithmetic_value(arr, size));
////	print_array(arr, size);
////}
//
////#2
////void main()
////{
////
////    char* s1[20], s2[20];
////
////    puts("Type text 1: ");
////    gets(s1);
////    puts("Type text 2: ");
////    gets(s2);
////    
////    strncat(s1, s2, strlen(s2)+1);
////    printf(s1);
////
////}
////
////void sort_even_num(int* arr, int size)
////{
////	for (int i = 0; i < size; i++) {
////		// сравниваем два соседних элемента.
////		for (int j = 0; j < size - i; j++) {
////			if (arr[j] % 2 == 0 && arr[j] > arr[j + 1]) {
////
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
////
////void main()
////{
////	int size = 0;
////	
////	printf("Input size of array: ");
////	scanf_s("%d", &size);
////
////	int* arr = (int*)malloc(sizeof(int) * size);
////	printf("Input value of array: ");
////
////	for (int i = 0; i < size; i++)
////	{
////		scanf_s("%d", &arr[i]);
////	}
////
////	for (int i = 0; i < size; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	sort_even_num(arr, size);
////
////	for (int i = 0; i < size; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//
//void draw_table(char* column, char* str, int len_col, int len_str)
//{
//
//}
//void main()
//{
//	char** col, **str;
//	int len_col, len_str;
//	printf("Input count of column: ");
//	scanf_s("%d", &len_col);
//	col = (int**)malloc(sizeof(int) * len_col);
//	printf("Input title of column: \n");
//	for (int i = 0; i < len_col; i++)
//	{
//		get(col[i][0]);
//		
//	}
//	printf("Input count of str: ");
//	scanf_s("%d", &len_str);
//	str = (int**)malloc(sizeof(int) * len_str);
//	printf("Input title of str: \n");
//	for (int i = 0; i < len_str; i++)
//	{
//		scanf_s("%s", &str[i][0]);
//	}
//
//
//}