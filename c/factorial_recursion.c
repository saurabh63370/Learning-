#include <stdio.h>

int fact(int x);

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Factorial of %d is %d\n", x, fact(x));
    return 0;
}

int fact(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * f(x - 1);
}