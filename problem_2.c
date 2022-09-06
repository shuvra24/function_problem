/*Write a function that takes a character as input and returns true if the character is a
alphabet or digit, and returns false otherwise*/
#include<stdio.h>
int function(char);
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    int result = function(ch);
    if(result == 1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

int function(char a){
    if(a>='a' && a<='z' || a>='A' && a<='Z' || a>='0' && a<='9'){
        return 1;
    }
    else{
        return 0;
    }
}
