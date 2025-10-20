#include <stdio.h>
#include <math.h> 

int main() {
    int a, b;
    double S;

    printf("Moi ban nhap so nguyen duong a: ");
    scanf("%d", &a);

    printf("Moi ban nhap so nguyen duong b: ");
    scanf("%d", &b);
     if (a <= 0 || b <= 0) {
        printf("Gia tri nhap vao phai la so nguyen duong.\n");
        return 1;
    }
    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));
    printf("Gia tri cua bieu thuc S la: %lf\n", S);
    return 0;
}
