/*
 * C program to find maximum and minimum between two numbers using functions
 */
 #include<stdio.h>
 int getResult(int a, int b);
 int getMin(a, b);
 int main()
 {
     int a, b;
     printf("enter two number:");
     scanf("%d %d",&a, &b);

     int num1 = getMax(a, b);
     int num2 = getMin(a, b);
     if(num1==1){
        printf("%d is maximum",a);
     }
     else{
        printf("%d is minimum",b);
     }
     if(num2 == 1){
        printf("%d is minmum",b);
     }
     else{
        printf("%d is maximum",b);
     }

     return 0;
 }
int getResult(int a, int b){
    if(a>b){
       return 1;
    }
    else{
       return 0;
    }
}
int getMin(a, b){
    if(a<b){
        return 1;
    }
    else{
        return 0;
    }

}
