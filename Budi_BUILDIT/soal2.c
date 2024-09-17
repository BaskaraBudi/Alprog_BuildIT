#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];

    // Membaca input dua string
    scanf("%s %s", A, B);

    // Cek apakah panjang kedua string sama
    if (strlen(A) == strlen(B)) {
        // Jika string identik (karakter dan urutan persis sama)
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } 
        // Jika panjang sama, tapi ada perbedaan karakter
        else {
            printf("MIRIP\n");
        }
    } 
    // Jika panjang kedua string berbeda
    else {
        printf("BERBEDA\n");
    }

    return 0;
}
