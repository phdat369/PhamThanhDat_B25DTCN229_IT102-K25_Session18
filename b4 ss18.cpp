#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void in_mang(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = 5;  
    in_mang(array, n);
    return 0;
}
