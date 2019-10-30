#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
    if (n < 2) return 1;
    return n * factorial(n -1);
}

int main(void) {
    int n;
    for (n = 0; n < 5; ++n) {
        printf("%d! = %d\n", n, factorial(n));
    }

    return EXIT_SUCCESS;
}



