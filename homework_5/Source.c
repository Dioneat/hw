#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
struct Dimensions
{
	int width;
	int height;
	int depth;
};

struct Books {
	char* Author;
	char* Name;
	char* Publicher;

};

struct OrganicSubstance
{
	int Proteins;
	int Fats;
	int Carbonhydrates;
	float Calories;

};

struct NSL
{
	char Name[10];
	char Patronymic[10];
	char Lastname[10];
};

struct Copybook
{
	int Pages;
	int Articul;
	char TypeOfCopybook[10];
};

struct Date {
	int day;
	int month;
	int year;
};

struct Jeens {
	int Size;
	char Cloth[20][20];
};
struct TV
{
	int width;
	int height;
	int ID;
	char Company[20];

};

struct Body
{
	float Weight;
	float Height;
	char Gender[10];

};
struct Worker {
	struct NSL Name;
	struct Date Birhtday;
	float Salary;
	int ID;
	char typeOfPost[20];
};

struct Meals
{
	int CountMealsOfDay;
	int CountCalories;
	int AssessmentOfPropNutrition;
};

struct FamilyMember
{
	struct NSL Name;
	char Gender[10];
	int Age;

};
void NameInput(struct NSL* name)
{
	/*std::cout << "Input name: ";
	std::cin >> (*name.Name);
	std::cout << "Input lastname: ";
	std::cin >> (*name.Lastname);
	std::cout << "Input patronomyc: ";
	std::cin >> (*name.Patronomyc);*/

}
void NameInput(struct TV* tv)
{
	printf("Input height: ");
	scanf_s("%d", &tv->height);
	printf("Input ID: ");
	scanf_s("%d", &tv->ID);
	printf("Input widht: ");
	scanf_s("%d", &tv->width);
}
void DateInput(struct Date* date)
{
	printf("Input day: ");
	scanf_s("%d", &date->day);
	printf("Input day: ");
	scanf_s("%d", &date->month);
	printf("Input day: ");
	scanf_s("%d", &date->year);

}
struct Body NameInput(float weight, float height, char gender[10])
{
	struct Body body = { weight, height, gender };
	return body;

}








float calculateDye(struct Dimensions sizes, float consumption) {

	int square = calculateSquare(sizes);

	float dye_needed = square * consumption;
	return dye_needed;
}
void InputDimensions(struct Dimensions* size) {
	printf("Ââåäèòå âûñîòó øêàôà: ");
	scanf_s("%d", &size->height);
	printf("Ââåäèòå äëèíó øêàôà: ");
	scanf_s("%d", &size->depth);
	printf("Ââåäèòå øèðèíó øêàôà: ");
	scanf_s("%d", &size->width);
}

float calculateSquare(struct Dimensions size) {
	return (size.height * size.depth * 2 + size.height * size.width * 2 + size.width * size.depth * 2) * 0.0001;
}
int calculateVolume(struct Dimensions sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
float calculatePaintingCost(struct Dimensions size, float consumption, float workCost, float paintCost) {
	return  (calculateSquare(size) * consumption * paintCost) + (calculateSquare(size) * workCost);
}

float calculateCupboardCost(struct Dimensions size, float cupboardCost) {
	return calculateSquare(size) * cupboardCost;
}

float calculateMassOfCupboard(struct Dimensions size, float mass) {
	return calculateSquare(size) * mass;
}

float CostLiftingCupboard(struct Dimensions size, int floor, float cost, float mass, float rise) {
	return calculateMassOfCupboard(size, mass) * floor * cost + rise;
}

float calculateCost(struct Dimensions size, int qua, float cost, float masspersqr, float rise, float consupt, float workcost, float paintcost, float cupboardcost) {

	 return calculateCupboardCost(size, cupboardcost) + calculatePaintingCost(size, consupt, workcost, paintcost) + CostLiftingCupboard(size, qua, cost, masspersqr, rise);
	
}

void main()
{
	struct Body Person = { 67, 176, "Woman" };
	struct NSL Name = { "Igor", "Igorev", "Igorevich" };
	struct OrganicSubstance OS = { 150, 230, 132, 243.3 };

	struct Worker worker = { Name, {16, 01, 2003}, 20000, 11, "Writer" };

	struct Meals MealsEveryDay[3] = { {2, 3560, 3}, {3, 2570, 5}, {3, 2102, 4} };
	struct FamilyMember Family[3] = {{ Name, "Man", 32 }, { {"Anna", "Igorev", "Vikorovna"}, "Woman", 30 }, { {"Gennadiy", "Igorev", "Igorevich"}, "Man", 6 }};




	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	float cupboardCost = 650;
	float weight = 0.9;
	int floorsCount = 5;
	 float deliveryCost = 500.00;
	 float riseCost = 2.50;

	struct Dimensions cupboard;
	InputDimensions(&cupboard);
	float cost;
	cost = calculateCost(cupboard, cupboardCost, paintConsumption,
		paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);
	printf("Cost by position::\n");
	printf("- cupboard cost: %.2f\n", calculateCupboardCost(cupboard, cupboardCost));
	printf("- painting cost: %.2f\n", calculatePaintingCost(cupboard, paintConsumption, paintWorkCost, paintCost));
	printf("- delivery cost (with rise): %.2f\n", CostLiftingCupboard(cupboard, floorsCount, cost, weight, riseCost));
	printf("Total cost: %.2f\n", cost);



	
}