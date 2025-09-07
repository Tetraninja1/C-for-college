#include <stdio.h>

void fibonacci(int n) {
    long long t1 = 0, t2 = 1, nextTerm;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }
    
    if (n >= 1) {
        printf("%lld", t1);
    }
    if (n >= 2) {
        printf(", %lld", t2);
    }

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %lld", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int numberOfTerms;
    printf("Enter the number of terms to see in the Fibonacci sequence: ");
   
    scanf("%d", &numberOfTerms);
    fibonacci(numberOfTerms);

    return 0;
}
