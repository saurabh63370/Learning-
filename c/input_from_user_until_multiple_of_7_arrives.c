#include <stdio.h>
int main(){
    int a;

    /* Keep reading until we get a multiple of 7 */
    while (1) {
        scanf("%d", &a);
        if (a % 7 == 0) {
            break;
        }
    }

    return 0;
}