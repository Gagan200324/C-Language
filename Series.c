#include <stdio.h>

int main() {
    int n;
    int sum = 0, fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact =fact* i;
        sum =sum + i / fact;
    }

    printf("Sum of the series is %d\n", sum);

    return 0;
}
