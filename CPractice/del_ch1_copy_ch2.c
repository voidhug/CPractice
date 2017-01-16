#include "del_ch1_copy_ch2.h"

void del_ch1_copy_ch2_method(char* str, int arraySize, char chDel, char chCopy) {
    char strBuff[arraySize];
    strcpy(strBuff, str);
    
    /*
     删除所有的 a
     */
    int n = 0, numb = 0;
    for (int i = 0; strBuff[i]; i++) {
        if (strBuff[i] != 'a') {
            strBuff[n++] = strBuff[i];
        }
        if (strBuff[i] == 'b') {
            numb++;
        }
    }
    strBuff[n] = '\0';
    
    /*
     复制所有的 b
     */
    int newLength = n + numb;
    strBuff[newLength] = '\0';
    for (int i = newLength - 1, j = n - 1; j >= 0; --j) {
        strBuff[i--] = strBuff[j];
        if (strBuff[j] == 'b') {
            strBuff[i--] = 'b';
        }
    }
    
    /*
     遍历数组
     */
    for (int i = 0; strBuff[i]; i++) {
        printf("%c ", strBuff[i]);
    }
}

void del_che_copy_ch2_test() {
    char mStr[MAXLEN];
    strcpy(mStr, "bbba");
    del_ch1_copy_ch2_method(mStr, MAXLEN, 'a', 'b');
}
