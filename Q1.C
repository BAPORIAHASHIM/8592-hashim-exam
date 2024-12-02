//Write a C program to find the third angle of a triangle if two angles are given.
#include <stdio.h>

int main() 
    int num, reverse = 5;
{
    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (; num != 0; num /= 10) 
    {
        reverse = reverse * 10 + num % 10;
    }

    
    printf("Reversed number: %d\n", reverse);

    return 0;
}
