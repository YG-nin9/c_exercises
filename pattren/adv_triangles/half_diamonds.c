#include <stdio.h>
#include <stdlib.h>

void half_num_diamond(int row, int start);
void half_starNum_diamond(int row);
/*void half_starNum_diamond2(int row);*/

int main()
{
    int row, start;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    printf("Enter the start number: \n");
    scanf("%i", &start);
    printf("\n \n \n");
    half_num_diamond(row, start);
    printf("\n \n \n");
    half_starNum_diamond(row);
    printf("\n \n \n");
    /*half_starNum_diamond2(row);*/

    return 0;
}

void half_num_diamond(int row, int start){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 0; step < stars; step++){
            printf("%d", start);
        }
        start++;
        putchar('\n');
    }

    for(stars = row - 1;stars >= 0; stars--){

        for (int step = 0; step < stars; step++){
            printf("%d", start - 2);
        }
        start--;
        putchar('\n');
    }
}

void half_starNum_diamond(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 0; step < stars; step++){

            if (step == stars - 1){
                printf("%d", stars);
            }
            else{
                printf("%d*", stars);
            }
        }
        putchar('\n');
    }

    for(stars = row;stars >= 0; stars--){

        for (int step = 0; step < stars; step++){

            if (step == stars - 1){
                printf("%d", stars);
            }
            else{
                printf("%d*", stars);
            }
        }
        putchar('\n');
    }
}







//not complete
/*void half_starNum_diamond2(int row){

    int stars = 1, cubes = 1 , hold;

    for(;stars <= row; stars++){

        for (int step = 0; step < stars; step++, cubes++){

            if (step == stars - 1){
                printf("%d", cubes);
            }
            else{
                printf("%d*", cubes);
            }
        }
        putchar('\n');
    }

    cubes = cubes - row;

    for(stars = row;stars >= 0; stars--){

        for (int step = 0; step < stars; step++, cubes++){

            if (step == stars - 1){
                printf("%d", cubes);
            }
            else{
                printf("%d*", cubes);
            }
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
*/

