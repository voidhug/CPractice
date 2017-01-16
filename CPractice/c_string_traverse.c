#include "c_string_traverse.h"

void c_string_traverse_one(char* str) {
    int len = (int) strlen(str);
    for (int i = 0 ; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void c_string_traverse_two(char* str) {
    while (*str) {
        printf("%c", *str);
        ++str;
    }
    printf("\n");
}

void c_string_traverse_test() {
    char str[] = "hello world";
    //    char *str = "hello world";
    c_string_traverse_one(str);
    c_string_traverse_two(str);
}
