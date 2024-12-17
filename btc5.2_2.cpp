#include <stdio.h>

int main() {
    int soChoTruoc = 26;
    int soNhap;
    printf(" hay doan so da cho truoc \n");
    while (true) {
        printf("nhap mot so: ");
        scanf("%d", &soNhap);
        if (soNhap == soChoTruoc) {
            printf(" gioi qua! ban nhap dung roi \n");
            break;
        } else {
            printf(" doan sai roi, doan lai di \n");
        }
    }
    return 0;
}

