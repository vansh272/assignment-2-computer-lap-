#include <stdio.h>

int main() {
    float gross, discount, net;

    printf("Enter gross sales: ");
    scanf("%f", &gross);

    if (gross > 20000) {
        discount = 0.15 * gross;
    } else if (gross > 10000) {
        discount = 0.10 * gross;
    } else {
        discount = 0.05 * gross;
    }

    net = gross - discount;

    printf("Net sales = %f\n", net);

    return 0;
}
