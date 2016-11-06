//
// HumanZombie.cpp
//
// Authored by Karl Lee
//
// This is a math integrated game aimed at middle school students. This assignment
// was given as the final exam of COP1000 by instructor Rhodes, G. during the Fall2013
// semester.  Part of the interworking of this game involve two randomly generated numbers
// which simulate combat with a zombie, as well as, the survivors odds.  Choice will
// also play a factor in the outcome of this game. Players will be given a series of
// choices about how to proceed throught the game.
// This is the most complex project we have attemped to date, and I am confident this build
// will enhance my knowledge of C++.
//

#include <istream>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <algorithm>
#include <string>

using namespace std;

// Function Prototypes
bool searchNightDay(char userNX);
void scoreUPDATE(int &humansPX, int &zombiePX, int &survivPX, char fghtRUN, int &zombieWAR);
int fightZOMBIE(int &humansPX, int &zombiePX);

// List of variables

// This is the main body of the program
int main()
{
	// List of valriables
	string displayDAY = " ";
	char fghtRUN = ' ';
	int zombieWAR = 0;
	int humansPX = 100;
	int zombiePX = 102;
	int survivPX = 0;
	

	// This is a one time banner with will introduce the user to HumanZombie!
	cout << "******************************************************************" << endl;
	cout << "*****************   'Human vs ZOMBIE'   **************************" << endl;
	cout << "******************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "...in the near future man will create a deadly strain of virus." << endl;
	cout << "After an accedental release of this pathogen quickly spreads accross" << endl;
	cout << "all of the globe.  Zombies now roam free.  Beware of the night! " << endl;
	cout << endl;
	cout << endl;

	// Array holding day of the week.
	string weekDAYs[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
    
    for(int i = 0; i < 7; i++)
    {
            cout << "Today is a " << weekDAYs[i] << "." << endl;
            cout << "Your Strength:     " << humansPX << endl;
            cout << "Zombie Strength:   " << zombiePX << endl;
            cout << "Survivors Rescued: " << survivPX << endl;
            cout << endl;

            char userNX = ' ';
            cout << "  When do you want to search for survivors?  " << "(D)ay  or  (N)ight : ";
            cin >> userNX;
            cout << endl;
    
            if (searchNightDay(userNX) == 1)
            {
                               cout << "A wandering Zombie has found you!" << endl;
                               cout << endl;
                               cout << "What do you wish to do? (F)ight or (R)un Away : ";
                               cin >> fghtRUN;
                               if (fghtRUN == 'r' || fghtRUN == 'R')
                               {
                                             cout << endl;
                                             cout << " You chose to run away. The Zombie bit the survivor and " << endl;
                                             cout << " almost bit you.  You did not rescue the survivor, you lose a point " << endl;
                                             cout << " and the Zombies gain a point. " << endl;
                                             cout << endl;
                               }
                               if (fghtRUN == 'f' || fghtRUN == 'F')
                               {
                                             cout << "You have chosen to fight the Zombie! " << endl;
                                             cout << endl;
                                             zombieWAR = fightZOMBIE(humansPX, zombiePX);              
                               }        
            }
            else
            {
                               zombieWAR = 1;
                               cout << "Today was a good day, no Zombies were found. " << endl;
                               cout << "You picked up a survivor and added one point to your score. " << endl;
                               cout << endl;
            }
            
            scoreUPDATE(humansPX, zombiePX, survivPX, fghtRUN, zombieWAR);
            
    }
    
    if (humansPX > zombiePX)
    {
                 cout << endl;
                 cout << " ** CONGRADULATIONS! ** " << " You have survived the week. " << endl;
                 cout << endl;
                 cout << "You ended the game with a score of :     " << humansPX << endl;
                 cout << "You have strengthen the human race with: " << survivPX << " survivors." << endl;
                 cout << endl;
                 cout << endl;
    }
    if (humansPX < zombiePX)
    {
                 cout << endl;
                 cout << " ** ZOMBIES !!! ** " << " ** GAME OVER ** " << endl;
                 cout << endl;
                 cout << "You have been bitten by a zombie and soon will have no worries. " << endl;
                 cout << "Better luck next time, " << endl;
                 cout << endl;
    }
    
	system("pause");
}

// function that determains if a zombie will be found.
bool searchNightDay(char userNX)
{
     srand(time( NULL));
     double zombieBATT = (rand() % 100) +1;
  
            if ((userNX == 'd' || userNX == 'D') && zombieBATT < 50)
            {
               return true;   
               
            }
            if ((userNX == 'n' || userNX == 'N') && zombieBATT < 70)
            {
               return true;
            }       
     return false;
}

// function that updates scores based on zombie encounter or lack there of.
void scoreUPDATE(int &humansPX, int &zombiePX, int &survivPX, char fghtRUN, int &zombieWAR)
{
     if (fghtRUN == 'r' || fghtRUN == 'R')
     {
                 humansPX = humansPX - 1;
                 zombiePX = zombiePX + 1;
     }
     else if(zombieWAR == -1)
     {
          zombiePX = zombiePX + 1;
          humansPX = humansPX - 1;
     }
     else if(zombieWAR == 0)
     {
          humansPX = humansPX + 0;
          zombiePX = zombiePX + 0;
     }
     else if(zombieWAR == 1)
     {
          humansPX = humansPX + 1;
          zombiePX = zombiePX - 1;      
          survivPX = survivPX + 1;
     }      
}


/*

switch(choice)
{
	case 3:
	write statement here;
	break;
	case 2:
	statement to be executed;
	break;
	default:
	cout << "This was an invalid choice";
	break;
}


*/

// function that determains the outcome of zombie encounter, based on currnt score.
int fightZOMBIE(int &humansPX, int &zombiePX)
{
        srand(time( NULL));
        int humansSCR = rand() % (humansPX + 1);
        int zombieSCR = rand() % (zombiePX - 1);
        
        cout << "Humans punch strength is equal to: " << humansSCR << endl;
        cout << "Zombie punch strength is equal to: " << zombieSCR << endl;
        cout << endl;
        
        if (zombieSCR < humansSCR)
        {
                      return 1;
        }
        if (humansSCR < zombieSCR)
        {
                      return -1;
        }
        if (zombieSCR == humansSCR)
        {
                      return 0;
        }        
}
