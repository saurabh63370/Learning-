#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+c+b)/2;
    printf("%f",sqrt(s*(s-a)*(s-b)*(s-c)));
}