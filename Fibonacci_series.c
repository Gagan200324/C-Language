#include <stdio.h>
int main() {
    int n, i;
    long long int temp1 = 0, temp2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; ++i) {
        printf("%lld, ", temp1);
        nextTerm = temp1 + temp2;
        temp1 = temp2;
        temp2 = nextTerm;
    }

    printf("\n");
    return 0;
}
