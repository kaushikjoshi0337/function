#include <stdio.h>
void squareprint() {
    for (int i = 1; i <= 10; i++) {
        printf("Square of %d: %d\n", i, i*i);
    }
}

int main() {
    squareprint();
}
