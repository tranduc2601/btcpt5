#include <stdio.h>
int main() {
    int n;
    int soThuNhat = 0, soThuHai = 0, soThuBa = 0;
    int daNhapSo = 0;
    while (true) {
        printf("\n\tMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban (1->6): ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &soThuNhat);
                printf("Nhap so thu hai: ");
                scanf("%d", &soThuHai);
                printf("Nhap so thu ba: ");
                scanf("%d", &soThuBa);
                daNhapSo = 1;
                break;
            case 2:
                if (daNhapSo) {
                    int tong = soThuNhat + soThuHai + soThuBa;
                    printf("Tong 3 so: %d\n", tong);
                } else {
                    printf("Vui long nhap 3 so truoc (lua chon 1).\n");
                }
                break;
            case 3:
                if (daNhapSo) {
                    float trungBinh = (soThuNhat + soThuHai + soThuBa) / 3.0;
                    printf("Trung binh cong 3 so: %.2f\n", trungBinh);
                } else {
                    printf("Vui long nhap 3 so truoc (lua chon 1).\n");
                }
                break;
            case 4:
                if (daNhapSo) {
                    int nhoNhat = soThuNhat;
                    if (soThuHai < nhoNhat) nhoNhat = soThuHai;
                    if (soThuBa < nhoNhat) nhoNhat = soThuBa;
                    printf("So nho nhat: %d\n", nhoNhat);
                } else {
                    printf("Vui long nhap 3 so truoc (lua chon 1).\n");
                }
                break;
            case 5:
                if (daNhapSo) {
                    int lonNhat = soThuNhat;
                    if (soThuHai > lonNhat) lonNhat = soThuHai;
                    if (soThuBa > lonNhat) lonNhat = soThuBa;
                    printf("So lon nhat: %d\n", lonNhat);
                } else {
                    printf("Vui long nhap 3 so truoc (lua chon 1).\n");
                }
                break;
            case 6:
                printf(" da thoat chuong trinh\n");
                return 0;

            default:
                printf("chon so tu 1 den 6\n");
        }
    }
    return 0;
}
// bai nay co ban chi em khuc nua sau a
// bai nay quy qua em nghi  
