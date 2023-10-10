#include <stdio.h>
#include <stdlib.h>

void num_Palindrome(int row);
void full_num_Palindrome(int row);
void letters_Palindrome(int row);
void iterate_num_Palindrome(int row);

int main()
{
    int row;

    printf("Enter the row number: \n");
    scanf("%i", &row);
    num_Palindrome(row);
    printf("\n \n \n");
    full_num_Palindrome(row);
    printf("\n \n \n");
    letters_Palindrome(row);
    printf("\n \n \n");
    iterate_num_Palindrome(row);
    printf("\n \n \n");
    return 0;
}

void num_Palindrome(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        for (int step = 1; step <= stars; step++){
            printf("%d", step);
        }

        for (int step = stars - 1; step != 0; step--){
            printf("%d", step);
        }
        putchar('\n');
    }
}

void full_num_Palindrome(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = row - stars;

        for (;blocks != 0; blocks--){
            putchar(' ');
        }
        if (blocks == 0){

            for (int step = 1; step <= stars; step++){
                if (step == 1 && stars == 1){
                        putchar(' ');
                }
                printf("%d ", step);
            }

            for (int step = stars - 1; step != 0; step--){
            printf("%d ", step);
            }
        }
        putchar('\n');
    }
}

void letters_Palindrome(int row){

    int stars = 1;
    char hohoz;

    for(;stars <= row; stars++){

        for (int step = 1, letter = 'A'; step <= stars; step++){
            printf("%c", letter);
            letter++;
            hohoz = letter - 2;
        }

        for (int step = stars - 1; step != 0; step--){
            printf("%c", hohoz);
            hohoz--;
        }
        putchar('\n');
    }
}

void iterate_num_Palindrome(int row){

    int stars = 1;

    for(;stars <= row; stars++){

        int blocks = 9 - stars;

        for (;blocks != 0; blocks--){
            putchar('*');
        }
        if (blocks == 0){

            for (int step = 1; step <= stars; step++){
                printf("%d*", stars);
            }
        }
        for (; blocks != 9 -stars; blocks++){
            putchar('*');
        }
        putchar('\n');
    }
}

