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
};



int main()
{

	menuItemType menu[8] = { {"Plain Egg    ", 1.45},
							 {"Bacon and Egg", 2.45},
							 {"Muffin       ", .99},
							 {"French Toast ", 1.99},
							 {"Fruit Basket ", 2.49},
							 {"Cereal       ", .69},
							 {"Coffee       ", .50},
							 {"Tea          ", .75} };


	
	for (int i = 0; i < 8; i++)
    {
		cout << fixed << showpoint;
		cout << setprecision(2);
		cout << menu[i].menuItem << "\t\t" << "$" << menu[i].menuPrice << endl;

    	
    }
}

