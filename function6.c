#include <stdio.h>

 void star() {
  for ( int x = 0; x< 5; x++) {
    for ( int y = 0; y< 5; y++) {
         printf("* ");
        }
        printf("\n");
    }
}

int main() {
    star();
}
