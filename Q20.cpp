#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int students, CaloriesNeededPerStudent, TotalCaloriesNeeded;
	float  CaloriesInNuts, CaloriesInDriedFruits, NutsAndFruitNeeded;
	cout << "Input number of students In Elementary school: ";
	cin >> students;
	cout << "Input number of calories required for each student from the mixture: ";
	cin >> CaloriesNeededPerStudent;
	cout << "Input number of calories in each pound of nuts: ";
	cin >> CaloriesInNuts;
	TotalCaloriesNeeded = students * CaloriesNeededPerStudent;
	CaloriesInDriedFruits = CaloriesInNuts / 0.7;
	NutsAndFruitNeeded = TotalCaloriesNeeded / (CaloriesInDriedFruits + CaloriesInNuts);
	cout << "Total Pounds of nuts and dry fruits needed: " << NutsAndFruitNeeded;
	return 0;
}