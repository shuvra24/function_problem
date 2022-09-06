/**
 * C program to find cube of any number using function
 */
#include <stdio.h>
int cube(int);

int main()
{
    int num, c;
    printf("Enter any number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d is %d", num, c);

    return 0;
}
int cube(int a)
{
    return (a*a*a);
}
