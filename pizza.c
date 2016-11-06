/*  Karl Lee
    COP3223-14Fall
    10/10/2014
    pizza.c
*/

#include <stdio.h>

#define SMALL_COST 6.99
#define MEDIUM_COST 9.99
#define LARGE_COST 12.99


int main(){

    // opens file reads first line of ticket: total orders/value assignment.
    FILE* ifp = fopen("pizza.in", "r");
    FILE* ofp = fopen("pizzaorders.txt", "w");

    int ttlordrs;
    int cntOrdr;
    fscanf(ifp, "%d", &ttlordrs);

    // debug::
    //printf("%d\n", ttlordrs);

    for (cntOrdr=1; cntOrdr<=ttlordrs; cntOrdr++) {

            int pzTimMd, pzSml, pzMed, pzLrg;
            float pzCost, pzTax;
            int pzOrdr, pzTimDu;
            fscanf(ifp, "%d%d%d%d", &pzTimMd, &pzSml, &pzMed, &pzLrg);

            // debug::
            //printf("%d   %d   %d", pzSml, pzMed, pzLrg);

            if (pzTimMd%8 >= 5) {
                // Time Rule #1
                pzTimDu = ((pzTimMd/10)*10)+20;
            }
            if (pzTimMd%10 == 0) {
                // Time Rule #2
                pzTimDu = (pzTimMd/10)*10+10;
            }

            // debug::
            //printf(" time due %d \n", pzTimMd);

            // calculates cost of pizza(s); derives tax; sums cost+tax.
            pzCost = ((pzSml*SMALL_COST)+(pzMed*MEDIUM_COST)+(pzLrg*LARGE_COST));
            pzTax = ((pzSml*SMALL_COST)+(pzMed*MEDIUM_COST)+(pzLrg*LARGE_COST))*.065;
            pzCost = pzCost + pzTax;
            pzOrdr = cntOrdr;

            // displays total to user; print to screen; writes to file "ofp".
            printf("Order :%d Ready at time %d , Cost = %.2lf\n", pzOrdr, pzTimDu, pzCost);
            fprintf(ofp, "Order :%d Ready at time %d , Cost = %.2lf\n", pzOrdr, pzTimDu, pzCost);

    }

    // closes file: etiquette; credits(pause)/close function.
    fclose(ifp);
    fclose(ofp);
    system("PAUSE");
    printf("Program created: 10/13/2014 22:30");
    return 0;
}
