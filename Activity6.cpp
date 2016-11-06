//
// Activity6.cpp
//
//
// Authored by Karl Lee 10/9/13
//
//
// Create a program for a small snack shop.
// Prompt the user for a variaty of meal choices, four in
// total.  The only user inputs are responses the the meal selection.

#include <iostream>
#include <istream>
#include <string>
#include <iomanip>

using namespace std;

// Function Prototypes
double comboMEAL(int choice1);
double drinkME(int choice2);

int main()
{
    // List of local variables.
    int choice1 = 0;
    int choice2 = 0;

	
    //Set double decimal place count
	cout << fixed << setprecision(2);
    
    // Icing on the cake
    cout << " **** " << " Welcome to COMBO FATTIES " << " **** " << endl;
    cout << "       Home of the Double Down Fatty Fries      " << endl;
    cout << endl;
    cout << endl;
    
    // Displays the Meal List and prompts the user for input.
    cout << "Which combo meal do you want?" << endl;
    cout << "1" << " -- " << " Hamburger & Fries " << endl;
    cout << "2" << " -- " << " Hotdog & Chips " << endl;
    cout << "3" << " -- " << " Chicken Nugggets & Fries " << endl;
    cout << "4" << " -- " << " House Salad " << endl;
	cout << endl;
	cout << "Choose: ";
    cin >> choice1;
    cout << endl;
    
    // Displays the Drink List and prompts the user for input.
    cout << "Which drink do you want with your Meal?" << endl;
    cout << "1" << " -- " << " Coke Classic " << endl;
    cout << "2" << " -- " << " Sprite " << endl;
    cout << "3" << " -- " << " Homemade Iced Tea " << endl;
    cout << "4" << " -- " << " Tap Water " << endl;
	cout << endl;
    cout << "Choose: ";
	cin >> choice2;
    cout << endl;
    
    // Displays the Meal Choice and Drink prices
    double mealPRICE = comboMEAL(choice1);
	double drinkPRICE = drinkME(choice2);
    cout << "Your meal cost is $" << mealPRICE << " and your drink cost is $" << drinkPRICE << endl;
    cout << endl;
    
    // Displays the total cost of the meal
    double comboTOTAL = mealPRICE + drinkPRICE;
    cout << "The total cost of your order is $" << comboTOTAL << endl;
    cout << endl;
    
    system("pause");
    
}

// Defines the Function used to select the Combo Meal and return the price.
double comboMEAL(int choice1)
{
    double mealPRICE = 0.0;
    if (choice1 = 1)
    {
        mealPRICE = 4.95;
    }
    else if (choice1 = 2)
    {
        mealPRICE = 3.95;
    }
    else if (choice1 = 3)
    {
        mealPRICE = 4.50;
    }
    else if (choice1 = 4)
    {
        mealPRICE = 3.95;
    }
    return mealPRICE;
}

// Defines the Function used the select the Drink choice and return price.
double drinkME(int choice2)
{
	double drinkPRICE = 0.0;
    switch(choice2)
    {
        case 1:
            drinkPRICE = 1.95;
            break;
        case 2:
            drinkPRICE = 1.95;
            break;
        case 3:
            drinkPRICE = 1.50;
            break;
        case 4:
            drinkPRICE = 0.0;
    }
    return drinkPRICE;
}
