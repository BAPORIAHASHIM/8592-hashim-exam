//Write a C program to read the age of a candidate and detemine whether it is eligible for casting his/her own vote.
#include <stdio.h>

int main() 
    int age;
{
    
    printf("Enter your age:19");
    scanf("%d", &age);

    
    if (age >= 19) 
    {
        printf("You are eligible to cast your vote.\n");
    } else {
        printf("You are not eligible to cast your vote.\n");
    }

    return 0;
}
