#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main() {
    char inputString[100];
    char reverseString[100];
    printf("Nhap chuoi bat ky: ");
    fgets(inputString, 100, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int len = strlen(inputString);
    char *pInput = inputString;
    char *pReverse = reverseString + len - 1;
    for (int i = 0; i < len; i++) {
        *(pReverse - i) = *(pInput + i);
    }
    reverseString[len] = '\0';
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}
