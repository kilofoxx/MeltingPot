//
//  Activity5.cpp
//
//
//  Created by Karl Lee on 10/2/13.
//
// Activity 5 - Selection Structures
// Your company has been hired to create a program to calculate the speeding
// that will be assedssed to drivers who are caught driving over the speedlimit
//


#include <iostream>
#include <istream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


// Define the function prototypes
double speedFine(int excesspeed);
double specialViolate(char violate);
string translateContent(char violate);


int main()
{
    
    //List of variables
    
    int speed = 0;
    int limit = 0;
    char violate = ' ';
    
    
    
    //Set double decimal place count
	cout << fixed << setprecision(2);
    
    //Prompt the user for details of speeding
    cout << "Enter the speed indicated on your citation: ";
    cin >> speed;
    cout << "Enter the posted speed limit: ";
    cin >> limit;
    
    //Prompts the user to add special conditions
    cout << "Select any other applicable vilolations: " << endl;
    cout << "(N)one, (S)chool zone, No (I)nsurance, Suspended (L)icense : ";
	cin >> violate;
    
	//Seperates the output for easy reading
	cout << endl;
    cout << endl;
    
	//Displays the over limit speed and fine amout
	int excesspeed = speed - limit;
    cout << "Your were travelling " << excesspeed << " over the speed limit. " << endl;
	double fine = speedFine(excesspeed);
	cout << "The Fine for this infraction is : $" << fine << endl;
    
	//Displays the Fine for the addicional violation
	string violateContent = translateContent(violate);
    cout << "Additional violations include: " << violateContent << endl;
    
	double violateFine = specialViolate(violate);
	cout << "Your fine for this violation is: $" << violateFine << endl;
    
	//Displays the total amount of the ticket
	double totalFine = fine + violateFine;
	cout << "The total amount of your ticket is: $" << totalFine << endl;
	
    cout << endl;
	cout << endl;
	system("pause");
	
}

//Defines the speedFines() function
double speedFine(int excesspeed)
{
    double fine = 0.0;
    
    if (excesspeed <= 9)
    {
        fine = 0;
    }
    if (excesspeed >= 10 && excesspeed <= 19)
    {
        fine = 100.0;
    }
    if (excesspeed >= 20 && excesspeed <= 24)
    {
        fine = 150.0;
    }
    if (excesspeed >= 25)
    {
        fine = 250.0;
    }
    
    return fine;
}

//Defines the specialViolate() function
double specialViolate(char violate)
{
	double violateFine = 0.0;
	if (violate == 'N' || violate == 'n')
	{
		violateFine = 0.0;
	}
	if (violate == 'S' || violate == 's')
	{
		violateFine = 200.0;
	}
	if (violate == 'I' || violate == 'i')
	{
		violateFine = 100.0;
	}
	if (violate == 'L' || violate == 'l')
	{
		violateFine = 300.0;
	}
	return violateFine;
}

//Defines the translateContent() function
string translateContent(char violate)
{
    string violateContent = "";
    if (violate == 'N' || violate == 'n')
    {
        violateContent = "None";
    }
    if (violate == 'S' || violate == 's')
    {
        violateContent = "School Zone";
    }
    if (violate == 'I' || violate == 'i')
    {
        violateContent = "No Insurance";
    }
    if (violate == 'L' || violate == 'l')
    {
        violateContent = "Suspended License";
    }
    return violateContent;
}