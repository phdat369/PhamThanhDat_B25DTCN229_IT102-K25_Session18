#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void tinhTong(int *x, int *y, int *ketqua) {
    *ketqua = *x + *y; 
}
int main() {
    int a = 7;
    int b = 12;
    int result = 0;
    tinhTong(&a, &b, &result);
    printf("Tong cua %d va %d la: %d\n", a, b, result);
    return 0;
}
