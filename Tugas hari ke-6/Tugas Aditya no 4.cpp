#include <stdio.h>

int main() {
    // Kecepatan sepeda dalam meter/detik
    int kecepatan = 2;
    
    // Waktu dalam detik
    int waktu = 100;
    
    // Menghitung jarak yang ditempuh
    int jarak = kecepatan * waktu;
    
    // Mencetak hasil jarak yang ditempuh
    printf("Jarak yang ditempuh setelah bersepeda selama %d detik adalah %d meter.\n", waktu, jarak);
    
    return 0;
}

