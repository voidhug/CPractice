#include "AsteriskSwap.h"
#include "Swap.h"
#include "c_string_traverse.h"

/*
 方法一 快排 partition —— 数字相对顺序会变化
 循环不变式：[0..i - 1] 都是 *，[i..j - 1] 是数字，[j.. n - 1] 未探测。
 */
void asterisk_swap_method1(char *str) {
    int length = (int) strlen(str);
    char strBuff[length];
    strcpy(strBuff, str);

    for (int i = 0, j = 0; j < length; j++) {
        if (strBuff[j] == '*') {
            swap(&(strBuff[i++]), &(strBuff[j]));
        }
    }
    
    c_string_traverse_two(strBuff);
}

/*
 方法二 "倒着" —— 数字相对顺序不变
 */
void asterisk_swap_method2(char *str) {
    int length = (int) strlen(str);
    char strBuff[length];
    strcpy(strBuff, str);
    
    int j = length - 1;
    for (int i = length - 1; i >= 0; --i) {
        if (isdigit(strBuff[i])) {
            strBuff[j--] = strBuff[i];
        }
    }
    
    for (; j >= 0; j--) {
        strBuff[j] = '*';
    }
    c_string_traverse_two(strBuff);
}

void asterisk_swap_test() {
    char *str = "2*4*5**";
    asterisk_swap_method1(str);
    asterisk_swap_method2(str);
}
