#include <stdio.h>
#include <stdlib.h>

void half_pyramid(int row);
void half_inverted_pyramid(int row);
void half_hollow_inverted_pyramid(int row);
void full_pyramid(int row);
void full_inverted_pyramid(int row);
void full_hollow_pyramid(int row);

int main()
{
    int row;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    half_pyramid(row);
    printf("\n \n \n");
    half_inverted_pyramid(row);
    printf("\n \n \n");
    half_hollow_inverted_pyramid(row);
    printf("\n \n \n");
    full_pyramid(row);
    printf("\n \n \n");
    full_inverted_pyramid(row);
    printf("\n \n \n");
    full_hollow_pyramid(row);
    printf("\n \n \n");
    return 0;
}

void half_pyramid(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 0; step < stars; step++){
            putchar('*');
        }
        putchar('\n');
    }
}

void half_inverted_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

        for (int step = 0; step < stars; step++){
            putchar('*');
        }
        putchar('\n');
    }
}

void half_hollow_inverted_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

        for (int step = 0; step < stars; step++){

            if ((stars == row) || (stars == 2)){
                putchar('*');
            }
            else {

                if ((step == 0) || (step == stars - 1)){
                    putchar('*');
                }
                else{
                    putchar(' ');
                }
            }
        }
        putchar('\n');
    }
}

void full_pyramid(int row){

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
}

void full_inverted_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

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

void full_hollow_pyramid(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 0; step < stars; step++){

                if ((step == 0 ) || (step == stars - 1) || (stars == row)){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        putchar('\n');
    }
}

