#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void swap(int *x, int *y) {
    int temp = *x;  
    *x = *y;       
    *y = temp;  
}
int main() {
    int a = 5;
    int b = 10;
    printf("Truoc khi hoan doi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);
    return 0;
}
