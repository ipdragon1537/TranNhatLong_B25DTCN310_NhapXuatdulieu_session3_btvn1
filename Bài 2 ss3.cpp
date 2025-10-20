#include <stdio.h>

int main() {
    float celsius;   
    float fahrenheit;
    printf("Moi ban nhap nhiet do theo do Celsius: ");
     if (scanf("%f", &celsius) != 1) {
        printf("Gia tri nhap vao khong hop le.\n");
        return 1;
    }
fahrenheit = celsius * 9.0/5.0 + 32;
printf("%.2f do Celsius bang %.2f do Fahrenheit.\n", celsius, fahrenheit);
return 0;
}
