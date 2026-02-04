#include <stdio.h>

int main() {
    int a, b;
    int add, sub, mul, mod;
    float div;

    // Getting value from user
    printf("enter the number of a : ");
    scanf("%d", &a); // & symbol address-ah kurikkum
    printf("enter the number of b : ");
    scanf("%d", &b);

    // Operations
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b; 
    mod = a % b;

    // Results
    printf("\n--- Result Vandhruchu! ---\n");
    printf("Addition       : %d\n", add);
    printf("Subtraction    : %d\n", sub);
    printf("Multiplication : %d\n", mul);
    printf("Division       : %.2f\n", div);
    printf("Remainder (%)  : %d\n", mod);

    return 0;
}