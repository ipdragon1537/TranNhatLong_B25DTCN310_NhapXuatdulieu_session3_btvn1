#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	double S;
	 printf("Moi ban nhap so a: ");
    scanf("%d", &a);

    printf("Moi ban nhap b: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Gia tri nhap vao phai la so nguyen duong > 0.\n");
        return 1;
    }
    double bieu_thuc_1 = sqrt(pow(a, 2) + pow(b, 2)) / (a + b);
    double bieu_thuc_2 = (sqrt(a) + sqrt(b)) / (double)(a * b);
    S= bieu_thuc_1+ bieu_thuc_2;
    printf ("Gia tri cua boeu thuc S là: %1f\n", S);
    return 0;
}

