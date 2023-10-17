#include <stdio.h>
#include <stdlib.h>
#include "fun.h"


int main()
{
    sum_();
    square_num();
    swap();
    odd_or_even();
    factor();
    d_to_binary();
    is_prime();
    great_in_array();
    info_num();
    perfect_limit();

    return 0;
}

void sum_(void){
    printf("Enter numbers to sum them \n");
    int a, b;
    scanf("%i",&a);
    scanf("%i", &b);

    printf("the total is : %i", a + b);
    printf("\n");
    printf("------------------------------------------------\n");
}

void square_num(void){

    printf("Enter a number to square it : \n");
    int base;
    scanf("%i", &base);
    int result;
    result = base* base;
    printf("the square of %i is : %i", base, result);
    printf("\n");
    printf("------------------------------------------------\n");
}

void swap(void){

    int hold, num1, num2;
    printf("Enter the num1 :");
    scanf("%i", &num1);
    printf("Enter the num2 :");
    scanf("%i", &num2);
    printf("Before >> num1 = %i, num2 = %i >> \n", num1, num2);
    hold = num1;
    num1 = num2;
    num2 = hold;
    printf("After >> num1 = %i, num2 = %i >> \n", num1, num2);
    printf("\n");
    printf("------------------------------------------------\n");
}

void odd_or_even(void){
    int data;
    printf("Enter a number pls :");
    scanf("%i", &data);
    if (data % 2 == 0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    printf("\n");
    printf("------------------------------------------------\n");
}

void factor(void){
    int num, factor = 1;
    printf("get the factor for :");
    scanf("%i", &num);
    for (; num > 0; num--){
        factor = factor * num;
    }
    printf("the factor is %i", factor);
    printf("\n");
    printf("------------------------------------------------\n");
}

void d_to_binary(void){

    int arr[8] = {0,0,0,0,0,0,0,0};
    long int num, result, index = 7;
    printf("Enter a num pls :");
    scanf("%li", &num);
    for(;num != 0; index--){
        if (num == 1){
            result = 1;
            num = 0;
            arr[index] = result;
        }
        else{
            result = (num % 2);
            num = num/2;
            arr[index] = result;
        }
    }
    for(index = 0; index < 8; index++){
        printf("%i", arr[index]);
    }
    printf("\n");
    printf("------------------------------------------------\n");
}

void is_prime(void){

    int x = 2, num;
    printf("Enter number :");
    scanf("%i", &num);
    while (x <= (num / 2)){

        if (num % x ==0){
            printf("Not prime number");
            goto here;
        }
        else{
            x++;
        }
    }
    printf("Is prime number");
    here :
    printf("\n");
    printf("------------------------------------------------\n");
}

void great_in_array(void){

    int  n, index, *arr, max = 0;

    printf("Enter the size of the array :");
    scanf("%i", &n);
    printf("Enter the array elements :");
    arr = malloc((n * sizeof(int)));

    for (index = 0; index < n; index++){

        scanf("%i", &arr[index]);
        fflush(stdin);
    }
    for(index = 0; index < n; index++){

        if(max <= arr[index]){
            max = arr[index];
        }
        else{
            max = max;
        }
    }
    printf("the largest in the array is %i", max);
    printf("\n");
    printf("------------------------------------------------\n");
}

void info_num(void){

    int info;
    printf("Enter a num to check it pls :");
    scanf("%i", &info);
    {
        int i = 1 , rem, sum = 0;

        for(; i < info; i++){

            rem = info % i;
            if(rem == 0){
                sum = sum + i;
            }
        }
        if(sum == info){
            printf("%i is a perfect number\n", info);
        }
        else{
            printf("%i not a perfect number\n", info);
        }
    }

    {
        int result = 0, rinfo, rr = 0;
        rinfo = info;
        while(rinfo != 0){

            rr = rinfo % 10;
            result += rr * rr * rr;
            rinfo /= 10;
        }
        if(result == info){
            printf("%i is an armstrong number\n", info);
        }
        else{
            printf("%i not an armstrong number\n", info);
        }
    }
    printf("\n");
    printf("------------------------------------------------\n");


}

void perfect_limit(void){

    int l1, l2, arr[10],n = 0;
    here:

        printf("Enter the start of the range :");
        scanf("%i", &l1);
        printf("Enter the end of the range :");
        scanf("%i", &l2);
        if(l2 <= l1){
            printf("pls try again ....\n");
            goto here;
    }

    {
        for(int info = l1; info <= l2; info++){
                int i = 1 , rem, sum = 0;
                for(; i < info; i++){

                    rem = info % i;
                    if(rem == 0){
                        sum = sum + i;
                    }
                }
                if(sum == info){
                    arr[n] = info;
                    n++;
                }
            }
    }
    printf("%i and %i are perfect numbers", arr[0], arr[1]);
    printf("\n");
    printf("------------------------------------------------\n");
}

