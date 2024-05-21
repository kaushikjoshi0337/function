#include <stdio.h>
void reversealphabetprint() {
    for (char letter = 'Z'; letter >= 'A'; letter--) {
        printf("%c\n", letter);
    }
}

int main() {
     reversealphabetprint();
}
