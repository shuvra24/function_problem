#include<stdio.h>
float AreaOfTriangle(int base,int height);
int main () {
int a,b,n,i;
float area;
printf(" Enter the number of Triangles \n");
scanf("%d",&n);
for (i = 1; i<=n;i++){
    printf(" Enter the base and height \n");
    scanf("%d%d",&a,&b);
    area =  AreaOfTriangle(a,b);
    printf("%.2f",area);

}

return 0;


}
float AreaOfTriangle(int base,int height){
float area;
area = base * height * 0.5;
return area;
}
