#include <stdio.h>
#include <stdlib.h>
#include "fun.h"


int main()
{

    cube_it();
    circles();
    //10
    int base, power, res;
    printf("Enter the base number : ");
    scanf("%i", &base);
    printf("Enter the power number : ");
    scanf("%i", &power);
    res = recu_power(base, power);
    printf("the power of %i is %i", base, res);
    printf("\n");
    printf("-----------------------------\n");
    //11
    int n,n1;
    printf("Enter the start of the line : ");
    scanf("%i", &n);
    printf("Enter the end of the line : ");
    scanf("%i", &n1);
    n_puts(n, n1);
    printf("\n");
    printf("-----------------------------\n");
    //13
    int num1, num2;
    printf("Enter the start :");
    scanf("%i",&num1);
    printf("Enter the end :");
    scanf("%i",&num2);
    printf("the sum of that range is %i", sum_range(num1, num2));
    printf("\n");
    printf("-----------------------------\n");
    return 0;
}

void cube_it(void){
    int number, cube;

    printf("Enter a number to cube it :\t");
    scanf("%i", &number);
    cube = number * number * number;
    printf("the cube of %i is %i", number, cube);
    printf("\n");
    printf("-----------------------------\n");
}

void circles(void){
    float r, diameter, circ,area;

    printf("pls Enter the radius :\t");
    scanf("%f", &r);
    diameter = r + r;
    area = (PI * (r * r));
    circ = 2 * PI * r;
    printf("the diameter is %0.2f and the circumference is %0.2f and the area is %0.2f", diameter, circ, area);
    printf("\n");
    printf("-----------------------------\n");
}

int recu_power(int base, int power){

    int result;

    if(power > 0){
        result = base * recu_power(base, power-1);
        return result;
    }
    else
        return 1;
}

void n_puts(int n, int n1){

    if(n < n1 +1){
        printf("%i\t",n);
        n_puts(n + 1, n1);
    }
    else{
            return;
        }
    }

int sum_range(int l1, int l2){

    if (l1 < l2){
        l1= l1 + sum_range(l1 + 1, l2);
    }
    else{

    }
    return l1;
}

