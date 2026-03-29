#include <stdio.h>
#include <math.h>
int main(){
    int a, b = 0, c, temp = 0;
    scanf("%d", &a);
    c = a;
    while (c != 0){
        c /= 10;
        b++;
    }
    c = a;
    while (c != 0){
        temp += (int)pow(c % 10, b);
        c /= 10;
    }
    if (a == temp){
        printf("armstrong number");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}

    
    