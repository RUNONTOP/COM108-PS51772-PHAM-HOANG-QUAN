
#include <stdio.h>

int giaoDich(double *soDu, double tongTien,
             double tyLeHoanTien, double *tienHoan) {
    if (*soDu < tongTien) {
        *tienHoan = 0;
        return 0;
    }

    *tienHoan = tongTien * tyLeHoanTien / 100.0;
    *soDu = *soDu - tongTien + *tienHoan;

    return 1;
}

int main(void) {
    double soDu, tongTien, tyLeHoanTien, tienHoan;
    int ketQua;

    printf("Nhap so du vi: ");
    scanf("%lf", &soDu);

    printf("Nhap tong tien hoa don: ");
    scanf("%lf", &tongTien);

    printf("Nhap ty le hoan tien (%%): ");
    scanf("%lf", &tyLeHoanTien);

    tienHoan = 0;
    ketQua = giaoDich(&soDu, tongTien,
                      tyLeHoanTien, &tienHoan);

    if (ketQua == 1) {
        printf("Giao dich thanh cong!\n");
    } else {
        printf("Giao dich that bai!\n");
    }

    printf("Tien hoan: %.2f\n", tienHoan);
    printf("So du moi: %.2f\n", soDu);

    return 0;
}
