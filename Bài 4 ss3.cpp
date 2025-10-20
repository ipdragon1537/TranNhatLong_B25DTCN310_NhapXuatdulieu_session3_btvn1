#include <stdio.h>
int main() {
    float toan, van, anh;
    float tong_diem, diem_trung_binh;
    printf("Moi ban nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Moi ban nhap diem Van: ");
    scanf("%f", &van);
    printf("Moi ban nhap diem Anh: ");
    scanf("%f", &anh);
    tong_diem = toan + van + anh;
    diem_trung_binh = tong_diem / 3;
    printf("\nTong diem: %.2f\n", tong_diem);
    printf("Diem trung binh: %.2f\n", diem_trung_binh);
    return 0;
}
