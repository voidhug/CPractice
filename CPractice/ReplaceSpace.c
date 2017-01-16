#include "ReplaceSpace.h"
#include "c_string_traverse.h"

void replace_space(char *str) {
    char strBuff[MAXLEN];
    strcpy(strBuff, str);
    
    int numSpace = 0;
    int oldLength = 0;
    int newLength = 0;
    for (int i = 0; strBuff[i] ; i++) {
        oldLength++;
        if (strBuff[i] == ' ') {
            numSpace++;
        }
    }
    newLength = oldLength + 2 * numSpace;
    strBuff[oldLength] = '\0';
    strBuff[newLength] = '\0';
    
    for (int i = newLength - 1, j = oldLength - 1; j >= 0; --j) {
        if (strBuff[j] == ' ') {
            strBuff[i--] = '0';
            strBuff[i--] = '2';
            strBuff[i--] = '%';
        } else {
            strBuff[i--] = strBuff[j];
        }
    }
    c_string_traverse_two(strBuff);
}

void replace_space_test() {
    char str[MAXLEN];
    strcpy(str, "we are happy");
    replace_space(str);
}
