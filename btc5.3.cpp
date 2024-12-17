#include <stdio.h>
int main() {
    int n, i, tong = 0;
    do {
        printf(" nhap mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf(" hay nhap lai mot so nguyen duong \n");
        }
    } while (n <= 0);
    for (i = 1; i <= n; i++) {
        tong += i;
    }
    printf(" tong cac so tu 1 den %d la: %d \n", n, tong);
    return 0;
}

