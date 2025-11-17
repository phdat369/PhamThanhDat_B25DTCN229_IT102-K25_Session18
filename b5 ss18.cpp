#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void cap_nhat(int arr[], int vitri, int giatri_moi) {
    arr[vitri] = giatri_moi; 
}
void in_mang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int array[] = {5, 10, 15, 20, 25};
    int n = 5;
    printf("Mang ban dau: ");
    in_mang(array, n);
    int vitri = 2;      
    int giatri_moi = 99; 
    cap_nhat(array, vitri, giatri_moi);
    printf("Mang sau khi cap nhat: ");
    in_mang(array, n);
    return 0;
}
