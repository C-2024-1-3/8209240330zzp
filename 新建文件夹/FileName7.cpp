#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int indexOf(const char s1[], const char s2[]) {
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    int i, j;

    for (i = 0; i <= len2 - len1; i++) 
    {
        for (j = 0; j < len1; j++) 
        {
            if (s2[i + j] != s1[j]) 
            {
                break;
            }
        }
        if (j == len1) 
        {
            return i; // s1 is a substring of s2
        }
    }
    return -1; // s1 is not a substring of s2
}

int main() {
     char s1[40], s2[40];
    printf("Enter the first string: ");
    scanf_s("%s", s1); // 注意：这里应该使用动态分配内存或预定义足够大的数组
    printf("Enter the second string: ");
    scanf_s("%s", s2); // 同上

    int result = indexOf(s1, s2);
    if (result != -1) 
    {
        printf("'%s' is a substring of '%s' at index %d.\n", s1, s2, result);
    }
    else 
    {
        printf("'%s' is not a substring of '%s'.\n", s1, s2);
    }

    return 0;
}