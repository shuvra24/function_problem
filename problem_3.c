/*Write a function that will take three integer numbers as parameters and returns the
largest one.*/
#include<stdio.h>
int largest(int, int, int);
int main()
{
    int num1, num2, num3;
    printf("Enter three integers number:");
    scanf("%d %d %d",&num1, &num2, &num3);

    int result = largest(num1, num2, num3);
    printf("the largest number is %d",result);
    return 0;
}
int largest(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else if(b>a){
        if(b>c){
            return b;
        }
        return c;
    }
}
