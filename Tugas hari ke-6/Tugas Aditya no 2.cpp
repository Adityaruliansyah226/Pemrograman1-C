#include <stdio.h>

int main() {
    // Menyatakan angka awal dan angka pengurang
    int start = 100;
    int decrement = 5;

    // Menggunakan perulangan untuk mencetak deret angka
    for (int i = start; i >= 55; i -= decrement) {
        printf("%d ", i);
    }
    return 0;
}

