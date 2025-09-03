#include <stdio.h>

void printNto1(int n) {
    if (n == 0) return;  // Base case
    printf("%d ", n);
    printNto1(n - 1);    // Recursive call
}

int main() {
    int N = 10;
    printNto1(N);
    return 0;
}
