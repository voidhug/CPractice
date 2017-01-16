#include "Swap.h"

void swap(char *p1, char *p2) {
    char temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap_test() {
    char a = 'a';
    char b = 'b';
    swap(&a, &b);
    printf("%c %c", a, b);
}
