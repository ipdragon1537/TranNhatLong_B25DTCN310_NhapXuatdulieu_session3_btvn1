#include <stdio.h>

int main() {
    int n;          
    int a, b, c, d; 
    int reverse;    

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    a = n / 1000;         
    b = (n / 100) % 10;   
    c = (n / 10) % 10;    
    d = n % 10;           

    // Gh�p l?i th�nh s? ngh?ch d?o
    reverse = d * 1000 + c * 100 + b * 10 + a;

    // In k?t qu?
    printf("So nghich dao la: %d\n", reverse);

    return 0;
}

