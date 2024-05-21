
#include <stdio.h>

void multiplication() {
    int num = 5;
    printf("multiplication table %d:\n", num);
    for(int n=1; n<=10; n++) {
        printf("%d * %d = %d\n", num, n, num * n);
    }
}

int main() {
    multiplication();
}
