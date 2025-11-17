#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void sap_xep(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void in_mang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int array[] = {20, 5, 12, 7, 30, 1};
    int n = 6;
    printf("Mang ban dau: ");
    in_mang(array, n);
    sap_xep(array, n);
    printf("Mang sau khi sap xep: ");
    in_mang(array, n);
    return 0;
}
