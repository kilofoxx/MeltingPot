/*  Karl Lee
    02/27/2015
    COP3223-S4 ARUP
    UCF - 15Spring
    triple.c
*/

#include <stdio.h>

int main(){

    // list of variables
    int a = 0, b = 0, c = 0;
    int x = 2, y = 1, max = 0;
    int gcd1 = 1, gcd2 = 1, gcd3 = 0;
    int n1 = 0, n2 = 0, n3 = 0;
    int p1 = 0, p2 = 0, p3 =0;

    // prompts the user for input; assign value to x.
    printf("What is the maximum bound on x?\n :");
    scanf("%d", &max);
    printf("\n");

    // sets condition on range of input. Prompt user to re-enter x value.
    if (max < 2 || max > 100){
        printf("Sorry the variable you entered is out of bounds.\n");
        printf("Please enter a value between [2] and [100].\n :");
        scanf("%d", &x);
    }

    // defines possible values (a,b,c) for constraints (x,y)6
    for (x=2; x<=max; x++){
        // debug statement
        //printf("x=%d  y=%d\n", x, y);
        //printf("\n");
        for (y=1; y<x; y++){
            // formula for triple
            a = x*x-y*y;
            b = 2*x*y;
            c = x*x+y*y;
            // debug statement
            //printf("... a=%d ... b=%d ... c=%d \n", a, b, c);

            // greatest common divisor variable group
            n1 = a;
            n2 = b;
            n3 = c;
            gcd1 = n1%n2;
            gcd2 = n2%n3;
            gcd3 = n1%n3;
            // debug statement
            //printf("gcd1=%d   gcd2=%d   gcd3=%d\n", gcd1, gcd2, gcd3);

            while (gcd1 != 0){
                n1 = n2;
                n2 = gcd1;
                gcd1 = n1%n2;
            }
            gcd1 = n2;
            // debug statement
            //printf("gcd1=%d\n", gcd1);

            while (gcd2 != 0){
                n2 = n3;
                n3 = gcd2;
                gcd2 = n2%n3;
            }
            gcd2 = n3;
            // debug statement
            //printf("gcd2=%d\n", gcd2);

            while (gcd3 != 0){
                n1 = n3;
                n3 = gcd3;
                gcd3 = n1%n3;
            }
            gcd3 = n3;
            // debug statement
            //printf("gcd3=%d\n", gcd3);
            //printf("\n");

            // refines triple group to prime integers.
            if (((x%2 == 0 && y%2 != 0) || (x%2 != 0 && y%2 == 0)) && gcd1 == 1 && gcd2 == 1 && gcd3 == 1){

                // sorts output by value
                if (a<b && b<c){
                    p1 = a;
                    p2 = b;
                    p3 = c;
                }
                else if (b<a && a<c){
                    p1 = b;
                    p2 = a;
                    p3 = c;
                }
                else if (c<a && a<b){
                    p1 = c;
                    p2 = a;
                    p3 = b;
                }
                else {
                    p1 = a;
                    p2 = c;
                    p3 = b;
                }
                // output of triple group
                printf("%d ", p1);
                printf("%d ", p2);
                printf("%d \n", p3);
                //printf("\n");
            }

        }
    }
    return 0;
}
