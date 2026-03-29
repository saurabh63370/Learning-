#include <stdio.h>
int main(){
    int a=0, b=1, c;

    printf("%d\n", a);          // first Fibonacci number
    for (int i = 1; i < 10; i++){
        printf("%d\n", b);      // next Fibonacci number
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
