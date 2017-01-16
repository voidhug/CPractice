#ifndef c_string_traverse_h
#define c_string_traverse_h

#include <string.h>
#include <stdio.h>

/**
 * C 语言遍历字符串的两种方式
 * 第一种方法: c_string_traverse_one(char* str); 代码可阅读性强。
 * 第二种方法: c_string_traverse_two(char* str); 是根据字符串的结束标志, 来作为遍历的终止条件。
 * 但可读性差, 不过效率比第一种方法更高, 第一种方法在求 len 的时候需要遍历一次字符串数组。
 */

void c_string_traverse_one(char* str);
void c_string_traverse_two(char* str);
void c_string_traverse_test();

#endif /* c_string_traverse_h */
