#include <stdio.h>
#include <math.h>

void main()
{
	

	// #1
	/*int x1, y1, x2, y2, x3, y3;
	float S, p, AB, BC, AC;

	printf("Input first coord: ");
	scanf_s("%d %d", &x1, &y1);

	printf("Input second coord: ");
	scanf_s("%d %d", &x2, &y2);

	printf("Input third coord: ");
	scanf_s("%d,%d", &x3, &y3);

	AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	if ((AB + BC <= AC) && (BC + AC <= AB) && (AB + AC <= BC))
	{
		printf("error\n");

		return 0;
	}

	p = (AB + BC + AC) * 0.5;
	S = sqrt(p * (p - AB) * (p - BC) * (p - AC));

	printf("Perimeters: %.2f\n", p * 2);
	printf("Square: %.2f\n", S);*/




	/*int x1, x2, x3, y1, y2, y3, a, b, c;
	double p, s, half_p;
	

	printf("Input value of first coordinate: ");
	scanf_s("%d %d", &x1, &y1);

	printf("Input value of second coordinate: ");
	scanf_s("%d %d", &x2, &y2);

	printf("Input value of third coordinate: ");
	scanf_s("%d %d", &x3, &y3);

	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	if ((a + b <= c) && (b + c <= a) && (a + c <= b))
	{
		printf("Error\n");
		return 0;
	}
	p = a + b + c;
	half_p = p * 0.5;
	s = sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));

	printf("Perimeter of triangle equal: %.1f\n", p);
	printf("Square of triangle equal: %f", s);*/
	// #2
	/*int count;
	scanf_s("%d", &count);
	for (int i = 0; i < count; i++)
	{
		printf("*");
	}*/
	// #3
	/*	printf("*************************\n*\t\t\t*\n*\t\t\t*\n*\t\t\t*\n*\t\t\t*\n*************************\n");
		printf("\t\t\t*\n\t\t*********\n\t*****************\n*************************");
		printf("*************************\n*\t|\t|\t*\n*\t|\t|\t*\n*\t|\t|\t*\n*\t|\t|\t*\n*************************\n");

	*/
	// #4
	/*int a;
	double v, s_b, s_p;

	printf("Input value of edge: ");
	scanf_s("%d", &a);

	v = pow(a, 3);
	s_b = pow(6 * a, 2);
	s_p = pow(4 * a, 2);

	printf("Volume is %.1f\n", v);
	printf("Square of surface_b is %.1f\n", s_b);
	printf("Square of surface_p is %.1f\n", s_p);*/
	// #5
	/*float a, b;
	printf("Input first value: ");
	scanf_s("%f", &a);
	
	printf("Input second value: ");
	scanf_s("%f", &b);

	printf("Sum is %.1f\n", a + b);
	printf("Difference is %.1f\n", a - b);
	printf("Product is %.1f\n", a * b);
	printf("Divde is %.1f\n", a / b);
	printf("Arithmetic mean is %.1f\n", (a + b) / 2);
	printf("Arithmetic abs mean is %.1f\n", ((abs(a) + abs(b)) * 0.5));*/

	
}