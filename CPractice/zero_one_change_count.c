#include "zero_one_change_count.h"

int get_zero_one_change_count(char* str) {
    int i;
    int j;
    int count = 0;
    for (i = 0, j = (int) strlen(str) - 1; i < j ; i++, j--) {
        for ( ; i < j && str[i] == '0'; ) i++;
        for ( ; j > i && str[j] == '1'; ) j--;
        if (i < j) count++;
    }
    return count;
}

void zero_one_change_count_test() {
    char* str = "000010010010001000111001";
    int count = get_zero_one_change_count(str);
    printf("%d", count);
}
