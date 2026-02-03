#include<stdio.h>

int main(){
    int a = printf("enter the value of a: ");
    scanf("%d",&a);

    int b = printf("enter the value of b: ");
    scanf("%d",&b);

    int c = a + b;
    printf("The sum of %d\n", c);
}