#include <stdio.h>
#include <stdlib.h>

void half_num_pyramid(int row);
void half_num_inverted_pyramid(int row);
void half_hollow_inverted_num_pyramid(int row);
void full_num_pyramid(int row);
void full_num_inverted_pyramid(int row);
void full_num_hollow_pyramid(int row);

int main()
{
    int row;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    half_num_pyramid(row);
    printf("\n \n \n");
    half_num_inverted_pyramid(row);
    printf("\n \n \n");
    half_hollow_inverted_num_pyramid(row);
    printf("\n \n \n");
    full_num_pyramid(row);
    printf("\n \n \n");
    full_num_inverted_pyramid(row);
    printf("\n \n \n");
    full_num_hollow_pyramid(row);
    printf("\n \n \n");
    return 0;
}

void half_num_pyramid(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 1; step <= stars; step++){
            printf("%d", step);
        }
        putchar('\n');
    }
}

void half_num_inverted_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

        for (int step = 1; step <= stars; step++){
            printf("%d", step);
        }
        putchar('\n');
    }
}

void half_hollow_inverted_num_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

        for (int step = 1; step <= stars; step++){

            if ((stars == row) || (stars == 2)){
                printf("%d", step);
            }
            else {

                if ((step == 1) || (step == stars)){
                    printf("%d", step);
                }
                else{
                    putchar(' ');
                }
            }
        }
        putchar('\n');
    }
}

void full_num_pyramid(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 1; step <= stars; step++){
                printf("%d ", step);
            }
        }
        putchar('\n');
    }
}

void full_num_inverted_pyramid(int row){

    int stars = row;

    for(;stars >= 0; stars--){

        int blocks = stars;

        for (;blocks < row; blocks++){
            putchar(' ');
        }
        for (int step = 1; step <= stars; step++){
            printf("%d ", step);
        }
        putchar('\n');
    }
}

void full_num_hollow_pyramid(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 1; step <= stars; step++){

                if ((step == 1) || (step == stars) || (stars == row)){
                    printf("%d ", step);
                }
                else{
                    printf("  ");
                }
            }
        }
        putchar('\n');
    }
}

