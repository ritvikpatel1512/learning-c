#include <stdio.h>

float grams, kilos;

int main(){
    printf("Enter the number of kilograms :  ");
    scanf("%f", &kilos);
    grams = kilos*1000;
    printf("%f kilograms is %f grams",kilos, grams);
}
