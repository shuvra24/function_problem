#include<stdio.h>
void function(int a);
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);

    function(a);
    return 0;
}
void function(int a){
    if(a%2==0){
       printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
}
