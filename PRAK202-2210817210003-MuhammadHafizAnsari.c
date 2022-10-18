#include <stdio.h>
void main(){
    float a,b,hasil;
    printf("Masukkan Nilai Pertama: ");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f",&b);
    hasil=a+b;
    printf("\nHasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",a,b,hasil);
}

