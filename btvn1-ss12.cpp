#include <stdio.h>
int signal(int a, int b){
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}
int main() {
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > b + c && a + b > a + c) {
        printf("Cap so thu 1: %d + %d = %d, %d - %d = %d\n", a, b, a + b, b, a, signal(b, a));
    }
    if (b + c > a + b && b + c > a + c) {
        printf("Cap so thu 2: %d + %d = %d, %d - %d = %d\n", b, c, b + c, c, b, signal(c, b));
    }
    if (a + c > a + b && a + c > b + c) {
        printf("Cap so thu 3: %d + %d = %d, %d - %d = %d\n", a, c, a + c, c, a, signal(c, a));
    }
}
