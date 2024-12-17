#include <stdio.h>
int main() {
    int mang[] = {2, 6, 0, 1};
    int doDai = sizeof(mang) / sizeof(mang[0]);
    printf(" cac phan tu trong mang:\n");
    for (int i = 0; i < doDai; i++) {
        printf(" phan tu thu %d: %d\n", i + 1, mang[i]);
    }
    printf(" do dai cua mang: %d\n", doDai);
    return 0;
}

