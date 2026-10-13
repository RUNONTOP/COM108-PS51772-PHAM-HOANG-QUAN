
#include <stdio.h>

int phanPhoiTien(int soTien, int *to500,
                 int *to200, int *to100, int *to50) {
    *to500 = soTien / 500000;
    soTien %= 500000;

    *to200 = soTien / 200000;
    soTien %= 200000;

    *to100 = soTien / 100000;
    soTien %= 100000;

    *to50 = soTien / 50000;

    return *to500 + *to200 + *to100 + *to50;
}

int main(void) {
    int soTien;
    int to500, to200, to100, to50;
    int tongSoTo;

    printf("Nhap so tien can rut: ");
    scanf("%d", &soTien);

    if (soTien <= 0 || soTien % 50000 != 0) {
        printf("So tien khong hop le!\n");
        return 0;
    }

    tongSoTo = phanPhoiTien(soTien, &to500,
                            &to200, &to100, &to50);

    printf("So to 500000: %d\n", to500);
    printf("So to 200000: %d\n", to200);
    printf("So to 100000: %d\n", to100);
    printf("So to 50000: %d\n", to50);
    printf("Tong so to: %d\n", tongSoTo);

    return 0;
}
