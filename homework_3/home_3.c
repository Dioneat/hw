#include "stdio.h"
#include "math.h"
#include "locale.h"
#include <malloc.h>
#include <stdlib.h>
// #### 1
//void loading()
//{
//	system("cls");
//	printf("Загрузка");
//	for (int i = 0; i < 3; i++)
//	{
//		printf(".");
//		Sleep(500);
//	}
//}
//
//int choiceOfFigure(int n)
//{
//	
//}
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	int n1, n2;
//	float a, b, radius;
//
//	printf("Добро пожаловать!");
//	Sleep(500);
//	loading();
//	loading();
//	system("cls");
//
//	choiceOfFigure:
//
//	printf("Выбор фигуры:\n1. Прямоугольник\n2. Треугольник\n3. Круг\n0. Выйти из приложения\nВвод: ");
//	scanf_s("%d", &n1);
//	system("cls");
//	switch (n1)
//	{
//	case 1:
//	
//		printf("Введите две стороны прямоугольника: ");
//		scanf_s("%f %f", &a, &b);
//		choiceOfActionPr:
//		system("cls");
//		printf("Меню:\n1. Найти площадь прямоугольника\n2. Найти площадь периметр прямоугольника\n3. Найти диагональ прямоугольника\n4. Вернуться к выбору фигуры\nВвод: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("Площадь прямоугольника: %.2f\n", a * b);
//			system("pause");
//			break;
//		case 2:
//			printf("Периметр прямоугольника: %.2f\n", (a + b) * 2);
//			system("pause");
//			break;
//		case 3:
//			printf("Диагональ прямоугольника: %.2f\n", sqrt(a * a + b * b));
//			system("pause");
//			break;
//		case 4:
//			system("cls");
//			goto choiceOfFigure;
//		case 0:
//			return;
//		default:
//			break;
//		}
//		system("cls");
//		goto choiceOfActionPr;
//	case 2:
//		printf("Введите две стороны треугольника: ");
//		scanf_s("%f %f", &a, &b);
//	choiceOfActionTriang:
//		system("cls");
//		printf("Меню:\n1. Найти площадь треугольника\n2. Найти площадь периметр треугольника\n3. Найти диагональ треугольника\n4. Вернуться к выбору фигуры\nВвод: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("Площадь прямоугольника: %.2f\n", (a * b) * 0.5);
//			system("pause");
//			break;
//		case 2:
//			printf("Периметр прямоугольника: %.2f\n", (a + b + (sqrt(a * a + b * b))));
//			system("pause");
//			break;
//		case 3:
//			printf("Диагональ прямоугольника: %.2f\n", sqrt(a * a + b * b));
//			system("pause");
//			break;
//		case 4:
//			system("cls");
//			goto choiceOfFigure;
//		case 0:
//			return;
//		default:
//			break;
//		}
//		system("cls");
//		goto choiceOfActionTriang;
//	case 3:
//		printf("Введите радиус круга: ");
//		scanf_s("%f", &radius);
//		choiceOfActionCirlce:
//		system("cls");
//		printf("Меню:\n1. Найти площадь круга\n2. Найти длину окружности круга.\n3. Найти диаметр круга.\n4. Вернуться к выбору фигуры\nВвод: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("Площадь прямоугольника: %.2f\n", (3.14 * radius * radius));
//			system("pause");
//			break;
//		case 2:
//			printf("Периметр прямоугольника: %.2f\n", 2 * 3.14 * radius);
//			system("pause");
//			break;
//		case 3:
//			printf("Диагональ прямоугольника: %.2f\n", 2 * radius);
//			system("pause");
//			break;
//		case 4:
//			system("cls");
//			goto choiceOfFigure;
//		case 0:
//			return;
//		default:
//			break;
//		}
//		system("cls");
//		goto choiceOfActionCirlce;
//	default:
//		break;
//	}
//	
//
//	
//
//}


// #2

void main()
{
	setlocale(LC_ALL, "rus");

	int size, n, s_sq = 0;
	printf("Количество элементов: ");
	scanf_s("%d", &size);
	int *mass;
	int a = sizeof(int);
	mass = (int*)malloc(size * a);

	
	for (int i = 0; i < size; i++)
	{
		printf("Вводите элементы: ");
		scanf_s("%d", &mass[i]);
		 
		s_sq += mass[i] * mass[i];
	}
	printf("\nСумма квадратов элементов равна %d", &s_sq);
	free(mass);

}

int main() {
	int a = 2, sum = 0;
	setlocale(LC_ALL, "rus");
	printf("Эта программа считает сумму положительных чисел последовательности\n");
	printf("Введите последовательность: ");
	while (a != 0) {
		scanf_s("%d", &a);
		if (a > 0) {
			sum += a;
		}
		else {
			continue;
		}
	}
	printf("Сумма равна: %d", sum);
}