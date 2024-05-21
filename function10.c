#include <stdio.h>
#include <string.h>

void revershello() {
    char str[] = "Hello";
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    revershello();
}
