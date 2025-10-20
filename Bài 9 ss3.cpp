#include <stdio.h>

int main() {
    int n;
    float A;
    printf("Nhap so nguyen duong n (n > 1): ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Gia tri n phai lon hon 1.\n");
    } else {
        A = 1.0 / ((n - 1) * n)
          + 1.0 / (n * (n + 1))
          + 1.0 / ((n + 1) * (n + 2));
    printf("Gia tri cua A = %.6f\n", A);          
}
return 0;
}
