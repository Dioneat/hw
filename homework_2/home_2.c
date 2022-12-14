//// #1
////#include <stdio.h>
////// Отсутствие библиотеки локализации
////#include <locale.h>
////int main() {
////	// Не подключен русский язык
////	setlocale(LC_ALL, "rus");
////
////	int age;
////	// Отсутствие & для указания адреса, использование небезопасного ввода
////	scanf_s("%d", &age);
////	if (age <= 13)
////		// Отсутствие точки с запятой в строке 7
////		printf("%d - детство", age);
////	else if (14 <= age < 25)
////		printf("%f - молодость", age);
////		// Присутствие точки запятой в условном операторе
////	else if (25 <= age && age < 60)
////	printf("%f - зрелость", age);
////	else
////		printf("%d - старость", age);
////	return 0;
////}
//
////
////#include <stdio.h>
////#include <locale.h>
////#include <math.h>
////
////void main()
////{
////	setlocale(LC_ALL, "rus");
////	int x, y, z;
////	scanf_s("%d", &x);
////	scanf_s("%d", &y);
////	scanf_s("%d", &z);
////
////	if (x != y && y != z)
////	{
////		if (x > y && x > z)
////		{
////			z += x;
////		}
////		else if (y > x && y > z)
////		{
////			z += y;
////		}
////		else
////		{
////			z = pow(z, 2);
////		}
////		printf("%d", z);
////	}
////	else
////	{
////		if (x == y && y == z && z == x)
////		{
////			printf("все переменные равны");
////
////		}
////		else
////		{
////			if (x == y)
////			{
////				printf("x = y");
////			}
////			else if (x == z)
////			{
////				printf("x = z");
////			}
////			else if (y == z)
////			{
////				printf("y = z");
////			}
////		}
////	}
////
////}
//

////#include <stdio.h>
////#include <locale.h>
////
////void main()
////{
////	setlocale(LC_ALL, "rus");
////	int a, b, c;
////
////	printf("Введите ваши оценки: ");
////	scanf_s("%d %d %d", &a, &b, &c);
////
////	if (a + b + c == 15)
////	{
////		printf("Вы отличник");
////	}
////	else if ((a == 2 || b == 2 || c == 2) || (a == -1 || b == -1 || c == -1))
////	{
////		printf("Не сдал");
////	}
////	else if ((a == 3 || b == 3 || c == 3))
////	{
////		printf("Вы троечник");
////	}
////	
////	else
////	{
////		printf("Вы хорошист");
////	}
////	
////
////}
//
//
//#include <stdio.h>
//#include <locale.h>
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b, c;
//
//	printf("Введите стороны треугольника: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a == b && a == c)
//	{
//		printf("Треугольник равносторонний");
//	}
//	else if ((a == b || b == c || c == a))
//	{
//		printf("Треугольник равнобедренный");
//	}
//	else if (a <= b + c || b <= a + c || c <= b + c)
//	{
//		printf("Треугольник произвольный");
//	}
//	else if ((a * a == (b*b) + (c * c) || b * b == a * a + c * c || c == a * a + b * b))
//	{
//		printf("Треугольник прямоугольный");
//	}
//	else
//	{
//		printf("Это не треугольник");
//	}
//
//
//}
#include <locale.h>
int king(int x1, int x2, int y1, int y2) {
	return abs(x1 - x2) <= 1 && abs(y1 - y1) <= 1 ? 1 : 0;
}

int tower(int x1, int x2, int y1, int y2) {
	return x1 == x2 || y1 == y2 ? 5 : 0;
}

int general(int x1, int x2, int y1, int y2) {
	
	return abs(x1 - x2) == abs(y1 - y2) ? 3 : 0;
}

int cavalry(int x1, int x2, int y1, int y2) {
	return (abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) ? 4 : 0;
}

int queen(int x1, int x2, int y1, int y2) {
	return (x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2)) ? 2 : 0;
}



int main() {
	setlocale(LC_ALL, "rus");

	int  y1, y2, figure, flag = 0;
	char x1, x2;


	printf("Выберете фигуру (1 - король, 2 - ферзь, 3 - ладья, 4 - слон, 5 - конь): ");
	scanf_s("%d", &figure);
	getchar();

	printf("Введите позиции фигуры: ");
	x1 = getchar() - 96;
	getchar();
	scanf_s("%d", &y1);
	getchar();
	printf("- старт: ");
	x2 = getchar() - 96;
	getchar();
	scanf_s("%d", &y2);

	if (x1 <= 0 || x2 <= 0 || y1 <= 0 || y1 > 8 || y2 <= 0 || y2 > 8 || x1 > 8 || x2 > 8) {
		printf("error\n");
		return 0;
	}
	int K = king(x1, x2, y1, y2);
	int Q = queen(x1, x2, y1, y2);
	int G = general(x1, x2, y1, y2);
	int T = tower(x1, x2, y1, y2);
	int C = cavalry(x1, x2, y1, y2);
	if (figure == K || figure == Q || figure == G || figure == C || figure == T)
		printf("корректный ход");
	else {
		printf("Неккоректно, но подходит для\n: ");
		if (K > 0) {
			printf("короля\n");
			flag = 1;
		}
		if (Q > 0) {
			printf("ферзя\n");
			flag = 1;
		}
		if (G > 0) {
			printf("ферзя\n");
			flag = 1;
		}
		if (C > 0) {
			printf("коня\n");
			flag = 1;
		}
		if (T > 0) {
			printf("слона\n");
			flag = 1;
		}
		if (flag != 1) {
			printf("никого");
		}
	}
}
