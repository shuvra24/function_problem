/*Write a function that will take two integer numbers as parameter and
 returns the bigger one.*/

#include<stdio.h>
int big_num(int, int);
int main()
{
    int num1, num2;
    printf("enter two number:");
    scanf("%d %d",&num1, &num2);

    int result = big_num(num1, num2);
    printf("The biggest number:%d\n",result);
    return 0;
}
int big_num(int a, int b){
    //return (a>b?a:b);
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

