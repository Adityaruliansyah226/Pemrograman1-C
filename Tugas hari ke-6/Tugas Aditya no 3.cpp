#include <stdio.h>

int main() {
    // Menyatakan angka awal
    int number = 1;

    // Menggunakan perulangan untuk mencetak deret angka
    for (int i = 0; i < 11; i++) {
        printf("%d ", number);
        number *= 2;  // Mengalikan angka dengan 2 setiap iterasi
    }

    return 0;
}

