#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void xoa_phan_tu(int arr[], int *n, int vitri) {
    for(int i = vitri; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
void in_mang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int array[100] = {5, 10, 15, 20, 25};
    int n = 5;
    printf("Mang ban dau: ");
    in_mang(array, n);
    int vitri = 2;  
    xoa_phan_tu(array, &n, vitri);
    printf("Mang sau khi xoa: ");
    in_mang(array, n);
    return 0;
}
