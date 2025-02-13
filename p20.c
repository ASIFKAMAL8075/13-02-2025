#include <stdio.h>

int main() {
    printf("Demonstrating break and continue:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping the iteration when i = %d (using continue)\n", i);
            continue; 
        }
        if (i == 8) {
            printf("Breaking the loop when i = %d (using break)\n", i);
            break; 
        }
        printf("i = %d\n", i);
    }

    printf("Loop ended.\n");
    return 0;
}

