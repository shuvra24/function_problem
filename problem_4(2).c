#include <stdio.h>
#include <math.h>
float getDiameter(float radius, float PI);
float getCircumference(float radius, float PI);
float getArea(float radius, float PI);

int main()
{
    const double PI = acos(-1);
    float radius, dia, circ, area;
    printf("enter radius:");
    scanf("%f", &radius);

    dia = getDiameter(radius, PI);
    circ = getCircumference(radius, PI);
    area = getArea(radius, PI);

    printf("diameter = %f\n", dia);
    printf("circumference = %f\n", circ);
    printf("area = %f\n", area);
    return 0;
}
float getDiameter(float radius, float PI){
    return (2*radius);
}
float getCircumference(float radius, float PI){
    return (2*PI*radius);
}
float getArea(float radius, float PI){
    return (PI*radius*radius);
}
