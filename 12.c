#include<stdio.h>

int main() {
    int n, x, i, r, temp, sum;
    printf("Enter the first number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &x);

    for (i = n; i <= x; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            r = temp % 10;
            sum += r * r * r;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d is an Armstrong number.\n", i);
        }
    }

    return 0;
}
