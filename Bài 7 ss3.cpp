#include <stdio.h>

int main() {
    int n;          
    int a, b, c, d; 
    int S;          

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    a = n / 1000;          
    b = (n / 100) % 10;     
    c = (n / 10) % 10;      
    d = n % 10;             

    S = a + b + c + d;
    printf("Tong cac chu so = %d\n", S);

    return 0;
}
