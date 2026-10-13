
#include <stdio.h>

int nhapWh(void) {
    int Wh;
    do {
        printf("Nhap san luong dien (Wh > 0): ");
        scanf("%d", &Wh);
        if (Wh <= 0) {
            printf("Gia tri khong hop le! Nhap lai.\n");
        }
    } while (Wh <= 0);

    return Wh;
}

double doiKWh(int Wh) {
    return Wh / 1000.0;
}

double tinhCuocPhi(double kWh, double donGia) {
    return kWh * donGia;
}

int main(void) {
    int Wh;
    double kWh, donGia, tongTien;

    Wh = nhapWh();

    printf("Nhap don gia (dong/kWh): ");
    scanf("%lf", &donGia);

    kWh = doiKWh(Wh);
    tongTien = tinhCuocPhi(kWh, donGia);

    printf("San luong: %d Wh\n", Wh);
    printf("Dien nang: %.2f kWh\n", kWh);
    printf("Tong cuoc phi: %.2f dong\n", tongTien);

    return 0;
}


