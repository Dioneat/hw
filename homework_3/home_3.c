#include "stdio.h"
#include "math.h"
#include "locale.h"
#include <malloc.h>
#include <stdlib.h>
// #### 1
//void loading()
//{
//	system("cls");
//	printf("��������");
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
//	printf("����� ����������!");
//	Sleep(500);
//	loading();
//	loading();
//	system("cls");
//
//	choiceOfFigure:
//
//	printf("����� ������:\n1. �������������\n2. �����������\n3. ����\n0. ����� �� ����������\n����: ");
//	scanf_s("%d", &n1);
//	system("cls");
//	switch (n1)
//	{
//	case 1:
//	
//		printf("������� ��� ������� ��������������: ");
//		scanf_s("%f %f", &a, &b);
//		choiceOfActionPr:
//		system("cls");
//		printf("����:\n1. ����� ������� ��������������\n2. ����� ������� �������� ��������������\n3. ����� ��������� ��������������\n4. ��������� � ������ ������\n����: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("������� ��������������: %.2f\n", a * b);
//			system("pause");
//			break;
//		case 2:
//			printf("�������� ��������������: %.2f\n", (a + b) * 2);
//			system("pause");
//			break;
//		case 3:
//			printf("��������� ��������������: %.2f\n", sqrt(a * a + b * b));
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
//		printf("������� ��� ������� ������������: ");
//		scanf_s("%f %f", &a, &b);
//	choiceOfActionTriang:
//		system("cls");
//		printf("����:\n1. ����� ������� ������������\n2. ����� ������� �������� ������������\n3. ����� ��������� ������������\n4. ��������� � ������ ������\n����: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("������� ��������������: %.2f\n", (a * b) * 0.5);
//			system("pause");
//			break;
//		case 2:
//			printf("�������� ��������������: %.2f\n", (a + b + (sqrt(a * a + b * b))));
//			system("pause");
//			break;
//		case 3:
//			printf("��������� ��������������: %.2f\n", sqrt(a * a + b * b));
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
//		printf("������� ������ �����: ");
//		scanf_s("%f", &radius);
//		choiceOfActionCirlce:
//		system("cls");
//		printf("����:\n1. ����� ������� �����\n2. ����� ����� ���������� �����.\n3. ����� ������� �����.\n4. ��������� � ������ ������\n����: ");
//		scanf_s("%d", &n2);
//		switch (n2)
//		{
//		case 1:
//			printf("������� ��������������: %.2f\n", (3.14 * radius * radius));
//			system("pause");
//			break;
//		case 2:
//			printf("�������� ��������������: %.2f\n", 2 * 3.14 * radius);
//			system("pause");
//			break;
//		case 3:
//			printf("��������� ��������������: %.2f\n", 2 * radius);
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
	printf("���������� ���������: ");
	scanf_s("%d", &size);
	int *mass;
	int a = sizeof(int);
	mass = (int*)malloc(size * a);

	
	for (int i = 0; i < size; i++)
	{
		printf("������� ��������: ");
		scanf_s("%d", &mass[i]);
		 
		s_sq += mass[i] * mass[i];
	}
	printf("\n����� ��������� ��������� ����� %d", &s_sq);
	free(mass);

}

int main() {
	int a = 2, sum = 0;
	setlocale(LC_ALL, "rus");
	printf("��� ��������� ������� ����� ������������� ����� ������������������\n");
	printf("������� ������������������: ");
	while (a != 0) {
		scanf_s("%d", &a);
		if (a > 0) {
			sum += a;
		}
		else {
			continue;
		}
	}
	printf("����� �����: %d", sum);
}