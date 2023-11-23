#include <stdio.h>
#include <string.h>
int symmetrical_arr(int arr[], int n) { //mang doi xung  
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
        }
    }
}

int main() {
    int arr_One[] = {1, 2, 3, 2, 1};
    int arr_Two[] = {'a', 'n', 'n', 'a', 'a'};
    int n1 = sizeof(arr_One) / sizeof(arr_One[0]);
    int n2 = sizeof(arr_Two) / sizeof(arr_Two[0]);
    if (symmetrical_arr(arr_One, n1)) {
        printf("arr_One la mang doi xung.\n");
    } else {
        printf("arr_One khong la mang doi xung.\n");
    }
    if (symmetrical_arr(arr_Two, n2)) {
        printf("arr_Two la mang doi xung.\n");
    } else {
        printf("arr_Two khong la mang doi xung.\n");
    }
}
