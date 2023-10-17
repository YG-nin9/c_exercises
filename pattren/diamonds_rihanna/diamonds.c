#include <stdio.h>
#include <stdlib.h>
#include "diamonds.h"

int main()
{
    int row;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    half_diamond(row);
    printf("\n \n \n");
    full_diamond(row);
    printf("\n \n \n");
    full_hollow_diamond(row);
    printf("\n \n \n");
    return 0;
}

void half_diamond(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 0; step < stars; step++){
            putchar('*');
        }
        putchar('\n');
    }

    for(stars = row - 1;stars >= 0; stars--){

        for (int step = 0; step < stars; step++){
            putchar('*');
        }
        putchar('\n');
    }
}

void full_diamond(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 0; step < stars; step++){
                printf("* ");
            }
        }
        putchar('\n');
    }

    for(stars = row;stars >= 0; stars--){

        int blocks = stars;

        for (;blocks < row; blocks++){
            putchar(' ');
        }
        for (int step = 0; step < stars; step++){
            printf("* ");
        }
        putchar('\n');
    }
}

void full_hollow_diamond(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 0; step < stars; step++){

                if ((step == 0 ) || (step == stars - 1)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        putchar('\n');
    }

    for(stars = row;stars >= 0; stars--){

        int blocks = stars;

        for (;blocks < row; blocks++){
            putchar(' ');
        }
        for (int step = 0; step < stars; step++){

            if ((step == 0 ) || (step == stars - 1)){
                    printf("* ");
                }
            else{
                    printf("  ");
                }
        }
        putchar('\n');
    }
}

