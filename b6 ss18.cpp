#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int tim_kiem(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;  
        }
    }
    return -1; 
}
int main() {
    int array[] = {3, 7, 10, 15, 20};
    int n = 5;
    int x = 10; 
    int vitri = tim_kiem(array, n, x);
    if(vitri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", x, vitri);
    } else {
        printf("Khong tim thay gia tri %d trong mang\n", x);
    }
    return 0;
}
