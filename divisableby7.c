#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 7 == 0) {
        printf("Number is divisible by 7.\n");
    } else {
        printf("Number is not divisible by 7.\n");
    }

    return 0;
}
