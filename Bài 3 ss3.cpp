#include <stdio.h>
#include <math.h>
int main(){
	float r;
	float chu_vi,dien_tich;
	printf("Moi ban nhap ban kinh cua hinh tron (r): ");
	if (scanf("%f", &r) != 1 || r < 0) {
		printf("Gia tri nhap vao khong hop le. Ban kinh phai la so duong.\n");
		return 1;
    }
    chu_vi = 2 * M_PI * r;
    dien_tich = M_PI * r * r;
    printf("Chu vi cua hinh tron la: %.2f\n", chu_vi);
    printf("Dien tich cua hinh tron la: %.2f\n", dien_tich);
    return 0;
}
