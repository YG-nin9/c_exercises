#include <stdio.h>
#include <stdlib.h>
#include "rectangles.h"

int main()
{
    int row, column;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    printf("Enter the column number: \n");
    scanf("%i", &column);

    hollow_rectangle(row, column);
    printf("\n \n \n");
    solid_rectangle(row, column);

    return 0;
}



void solid_rectangle(int row, int column){

    int rr = 0;
    int cc;

    for(;rr < row; rr++){

        for (cc = 0;cc < column; cc++){
            putchar('*');
        }

        putchar('\n');
    }
}


void hollow_rectangle(int row, int column){

    int rr = 0;
    int cc;

    for(;rr < row; rr++){

        for (cc = 0;cc < column; cc++){

            if ((rr == 0) || (rr == row - 1)){
                putchar('*');
            }
            else{

                if ((cc == 0) || (cc == column - 1)){
                    putchar('*');
                }
                else {
                    putchar(' ');
                }
            }
        }

        putchar('\n');
    }
}

