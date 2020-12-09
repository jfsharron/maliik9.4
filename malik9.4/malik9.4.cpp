// malik9.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;



struct menuItemType
{
	string menuItem;
	double menuPrice;
	int item;
};

menuItemType menu[8] = { {"Plain Egg    ", 1.45, 1},
						 {"Bacon and Egg", 2.45, 2},
						 {"Muffin       ", .99, 3},
						 {"French Toast ", 1.99, 4},
						 {"Fruit Basket ", 2.49, 5},
						 {"Cereal       ", .69, 6},
						 {"Coffee       ", .50, 7},
						 {"Tea          ", .75, 8} };

menuItemType menuList[];

void showMenu();
void banner();
void getData(int);

int main()
{
	int sel;

	banner();
	cout << "\nplease make a selection to add to order or 0 to quit: " << endl;
	cin >> sel;

	while (sel != 0)
	{
		getData(sel);
	}
	

}


void banner()
{
	cout << "Welcome to Johnny's Restaurant" << endl;
	showMenu();
	
}

void showMenu()
{
	for (int i = 0; i < 8; i++)
	{
		cout << fixed << showpoint;
		cout << setprecision(2);
		cout << menu[i].item << "  " << menu[i].menuItem << "\t\t" << "$" << menu[i].menuPrice << endl;
	}	
}

void getData(int sel)
{
	cout << sel;
}

