/*  Karl Lee
    04/27/2015
    COP3223-S4 ARUP
    UCF - 15Spring
    pizzasim.c
*/

 /* This code is unfinished. After many attempts to successfully use the concepts
    discussed in class I have developed and commented the code bellow which I believe
    was on a trajectory to become a deliverable application. thank you. (edit)
*/


// Library includes

#include <stdio.h>
#include <math.h>

// defined constants provided by instructor
#define MAXLEN 20
#define MAXPIZZATYPES 100
#define MAXINGREDIENTS 20

const float PRICES [4] = {7.00, 10.00, 13.00, 16.00};

// list of structures
//
// defines and ingredient: Name and amount of that ingredient.
typedef struct ingredient {
    char name [MAXLEN];
    int quantity;
} Ingredient;

// defines a pizza: Name of pizza, number of toppings, number of ingredients
// and list of ingredients (nested) from structure Ingredients.
typedef struct pizza {
    char name[MAXLEN];
    int numIngredients;
    Ingrediant ingredientList[MAXINGREDIENTS];
    int size;
} Pizza;

// defines a bank account: place to store sales and pull from to buy ingredients
typedef struct bank {
    float balance;
} BankAcct;

// define the items received when the user completes the action 'BUY'
typedef struct delivery {
    char ingredientName[MAXLEN];
    int stockIngredient;
    float priceIngredient;
} Delivery;

// defines the pizza being sold to a Customer by the action 'SELL'
// and set by the selection in the input file and located in the array 'PRICES'
typedef pizzasales {
    char name[MAXLEN];
    float price;
} PizzaSales;

// defines a holding place for ingredients (inventory) post delivery
// and the pre-make period of the process. Also allows for the ability
// to report if a pizza can be made.
typedef struct stockroom {
    char name[MAXLEN];
    float price;
} Stockroom;

// function prototypes: outlines the functions called during the run of main(){}
void fileHandler (struct Pizza *p, struct Ingredient *ii, struct BankAcct *b);

// main function
int main(){

    // List of variables
    int in_out;
    // Opens pizza file.
    FILE* ifp = fopen("pizzasim.txt", "r");

    // Call function to read from file
    fileHandler ();






}

// This function takes the input file provide by main and runs the actions as define
//  by the documentation outlined in this assignment. After reading in each buy statement
//  the buy or sell action is stored in the struct BUYSELL.
void fileHandler (struct Pizza *p, struct Ingredient *ii, struct BankAcct *b) {

    int numpizzas, numactions;
    scanf(%d, &numpizzas);
    for (int i=0; i<numpizzas; i++){
        scanf(%s %d %d, &(*p.name[i]), &(*p.size), &(*p.numIngredients));
        for (int j=0, j<(*p.numIngredients); j++){
            scanf(%s %d, *ii.quantity);
        }
        // This part of the function should call a pizza maker
        //  and store the pizza made for a later sale.
        // Updating after each call. ???
    }

    // This part of the function reads in the balance
    //  of the bank account.
    scanf(%lf, &(*b.balance));

    // Reads in the total number of BUYSELL actions
    scanf(%d, &numactions);

    // Reads actions and routes action to collect function.
    for (int k=0; k<numactions; k++){
        scanf(%s, &action[MAXLEN]);
        if (action == 'BUY')
            scanf(%s)
        else if (action == 'SELL')
            scanf(%s)
    }
}
