#include <stdio.h>
#include <stdbool.h>
bool check_prime_numbers(int n) { //kiem tra so nguyen to  
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n1, n2;
    printf("Nhap so phan tu cua mang 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Nhap cac phan tu cua mang 1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Nhap so phan tu cua mang 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Nhap cac phan tu cua mang 2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr_prime_number1 = 0;
    int arr_prime_number2 = 0;

    printf("Cac so nguyen to trong mang 1: ");
    for (int i = 0; i < n1; i++) {
        if (check_prime_numbers(arr1[i])) {
            printf("%d ", arr1[i]);
            arr_prime_number1++;//so nguyen to mang  
        }
    }
    printf("\n");

    printf("Cac so nguyen to trong mang 2: ");
    for (int i = 0; i < n2; i++) {
        if (check_prime_numbers(arr2[i])) {
            printf("%d ", arr2[i]);
            arr_prime_number2++;
        }
    }
    printf("\n");
    
    if (arr_prime_number1 > arr_prime_number2) {
        printf("Mang 1 co nhieu so nguyen to hon mang 2.\n");
    } else if (arr_prime_number1 < arr_prime_number2) {
        printf("Mang 2 co nhieu so nguyen to hon mang 1.\n");
    } else {
        printf("Hai mang co so luong so nguyen to bang nhau.\n");
    }
}
