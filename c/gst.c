#include <stdio.h>
int main() {
    float arr[3];
    scanf("%f%f%f", &arr[0], &arr[1], &arr[2]);
    for (int i = 0; i < 3; i++) {
        printf("new price: %.2f\n", arr[i] * 1.18);
    }
    return 0;
}