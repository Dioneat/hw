#include <stdio.h>
#include <math.h>

struct Dimensions
{
	int width;
	int height;
	int depth;
};

struct Books {
	char Author[10];
	char Name[10];
	char Publicher[10];

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
	char Brand[10];
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
	struct OrganicSubstance orgSub;
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
void TvInput(struct TV* tv)
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
struct Body BodyInput(float weight, float height, char gender[10])
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
	printf("Input height: ");
	scanf_s("%d", &size->height);
	printf("Input depth: ");
	scanf_s("%d", &size->depth);
	printf("Input width: ");
	scanf_s("%d", &size->width);
}

float calculateSquare(struct Dimensions size) {
	return (size.height * size.depth * 2 + size.height * size.width * 2 + size.width * size.depth * 2) * 0.0001;
}
int calculateVolume(struct Dimensions cupboard) {
	int V = cupboard.height * cupboard.depth * cupboard.width;
	return V;
}
float calculatePaintingCost(struct Dimensions cupboard, float consumption, float workCost, float paintCost) {
	return  (calculateSquare(cupboard) * consumption * paintCost) + (calculateSquare(cupboard) * workCost);
}

float calculateCupboardCost(struct Dimensions cupboard, float cupboardCost) {
	return calculateSquare(cupboard) * cupboardCost;
}

float calculateMassOfCupboard(struct Dimensions cupboard, float mass) {
	return calculateSquare(cupboard) * mass;
}

float CostLiftingCupboard(struct Dimensions cupboard, int floor, float cost, float mass, float rise) {
	return calculateMassOfCupboard(cupboard, mass) * floor * cost + rise;
}

float calculateCost(struct Dimensions cupboard, int floor, float cost, float mass, float rise, float paintConsumption, float workcost, float paintCost, float cupboardCost) {

	return calculateCupboardCost(cupboard, cupboardCost) + calculatePaintingCost(cupboard, paintConsumption, workcost, paintCost) + CostLiftingCupboard(cupboard, floor, cost, mass, rise);

}

void main()
{
	struct Body Person = { 67, 176, "Woman" };
	struct NSL Name = { "Igor", "Igorev", "Igorevich" };
	struct OrganicSubstance OS = { 150, 230, 132, 243.3 };

	struct Worker worker = { Name, {16, 01, 2003}, 20000, 11, "Writer" };

	struct Meals MealsEveryDay[3] = { {2, {345, 235, 123}}, {3, {345, 235, 123}}, {3, {345, 235, 123}}};
	struct FamilyMember Family[3] = { { Name, "Man", 32 }, { {"Anna", "Igorev", "Vikorovna"}, "Woman", 30 }, { {"Gennadiy", "Igorev", "Igorevich"}, "Man", 6 } };




	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	float cupboardCost = 650;
	float weight = 0.9;
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	float bonus = 0.1;
	struct Dimensions cupboard;
	InputDimensions(&cupboard);
	float cost;
	cost = calculateCost(cupboard, cupboardCost, paintConsumption,
		paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);
	int countOfWeek = 0;

	printf("Enter day of week for delivery your cupboard");
	scanf_s("%d", &countOfWeek);
	printf("Cost by position::\n");
	printf("- cupboard cost: %.2f\n", calculateCupboardCost(cupboard, cupboardCost));
	printf("- painting cost: %.2f\n", calculatePaintingCost(cupboard, paintConsumption, paintWorkCost, paintCost));
	if (countOfWeek == 6 || countOfWeek == 7)
	{
		printf("- delivery cost (with rise): %.2f\n", CostLiftingCupboard(cupboard, floorsCount, cost, weight, riseCost) * bonus);
	}
	else
	{
		printf("- delivery cost (with rise): %.2f\n", CostLiftingCupboard(cupboard, floorsCount, cost, weight, riseCost));
	}
	
	printf("Total cost: %.2f\n", cost);




}