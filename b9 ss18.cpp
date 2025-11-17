#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void them_phan_tu(int arr[], int *n, int vitri, int giatri_moi) {
    for(int i = *n; i > vitri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[vitri] = giatri_moi;
    (*n)++;
}
void in_mang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int array[100] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Mang ban dau: ");
    in_mang(array, n);
    int vitri = 2;      
    int giatri = 99;     
    them_phan_tu(array, &n, vitri, giatri);
    printf("Mang sau khi them: ");
    in_mang(array, n);
    return 0;
}
