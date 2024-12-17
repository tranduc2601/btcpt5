#include <stdio.h>
int main() {
    int t, m, d;
    printf(" tat ca cac bang cuu chuong tu 1 den 9: \n\n");
    for (d = 1; d <= 9; d += 3) {
        for (t = 1; t <= 10; t++) {
            for (m = d; m < d + 3; m++) { 
                printf("%2d x %2d = %2d\t", m, t, m * t);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
//em lum cai (\t) tren  
