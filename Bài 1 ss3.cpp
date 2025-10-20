#include <stdio.h>

int main() {
    char ten[50]; 

    printf("Moi ban nhap ten cua minh: ");

    
    fgets(ten, sizeof(ten), stdin);

    int i = 0;
    while (ten[i] != '\n' && ten[i] != '\0') {
        i++;
    }
    ten[i] = '\0'; 

    printf("Xin chao %s\n", ten); 

    return 0;
}
