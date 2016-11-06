/*  Karl Lee
*   COP3223-14Fall
*   09/26/2014
*   finaltax.c
*/

#include <stdio.h>

// list of constants
#define COST_PER_MILE 0.60
#define COST_PER_DINNER 100
#define taxtier1  0.00
#define taxtier2  0.10
#define taxtier3  0.20

// defines the main function
int main(){

    // list of variables
    double busiINC = 0.0, busiRNT = 0.0, busiNET, ttlDeduct = 0, wthldTax = 0;
    int busiMIL = 0, busiDNR = 0;
    double incmDlrs = 0.0, usrBrkt = 0.0, taxOwnd = 0.0;


    // prompts user for input and assigns value to variables
    printf("What is your business income in dollars?\n $");
    scanf("%lf", &busiINC);
    printf("How much rent did you pay this year?\n $");
    scanf("%lf", &busiRNT);
    printf("How many miles did you drive for business purposes?\n :");
    scanf("%d", &busiMIL);
    printf("How many business dinners did you have?\n :");
    scanf("%d", &busiDNR);
    printf("How much money was withheld for taxes in dollars? \n $");
    scanf("%lf", &wthldTax);

    // calculates the deductions and provides a net income
    ttlDeduct = (busiMIL * COST_PER_MILE) + (busiDNR * COST_PER_DINNER) + (busiRNT);
    incmDlrs = (busiINC - ttlDeduct);

    // displays output of Net income
    //printf("Your taxable income was $%.2lf \n", incmDlrs);

    // statement that defines tax bracket; assigns value
    if (incmDlrs <= 10000 && incmDlrs > 0){
        taxOwnd = incmDlrs * taxtier1;
        //debug statement
        //printf("1 %.2lf \n", taxOwnd);
    }
    if (incmDlrs <= 40000 && incmDlrs > 10000){
        taxOwnd = (incmDlrs - 10000) * taxtier2;
        //debug statement
        //printf("2 %.2lf \n", taxOwnd);
    }
    if (incmDlrs > 40000) {
        taxOwnd = ((30000 * taxtier2) + ((incmDlrs - 40000) * taxtier3));
        // debug statement
        //printf("3 %.2lf \n", taxOwnd);
    }

    taxOwnd = taxOwnd - wthldTax;

    // prints output to user based on met conditional
    if (taxOwnd > 0) {
        printf("You owe $%.2lf in taxes still.", taxOwnd);
    }

    if (taxOwnd < 0) {
        taxOwnd = taxOwnd * -1;
        printf("You will receive a refund of $%.2lf for your taxes.", taxOwnd);
    }

    if (taxOwnd == 0) {
        printf("You are perfectly squared away with the IRS!");
    }

    return 0;
}






