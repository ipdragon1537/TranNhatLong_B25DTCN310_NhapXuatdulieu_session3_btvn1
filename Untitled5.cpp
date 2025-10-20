#include <stdio.h>
#define SEPARATOR "|-----|---------------|------|---------------|-----------------------------|\n"

int main() {
    printf("                          DANH SACH SINH VIEN \n");
    printf(SEPARATOR);
    printf("| STT | Ho va ten     | Tuoi | So dien thoai | email                       |\n");
    printf(SEPARATOR);
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com");
    printf(SEPARATOR); // Dòng phân cách
    printf("| %-3d | %-13s | %-4d | %-13s | %-27s |\n", 10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com");
    return 0;
}
