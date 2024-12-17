#include <stdio.h>
int main() {
    int n;
    do {
        printf(" nhap mot so nguyen tu 1 den 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf(" so khong hop le, nhap lai \n");
        }
    } while (n < 1 || n > 10);
    printf("\n bang cuu chuong cua %d: \n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

