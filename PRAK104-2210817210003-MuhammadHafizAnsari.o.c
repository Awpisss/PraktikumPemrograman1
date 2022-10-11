#include<stdio.h>

int main(){
    int A, B, C, D;
    A=400000;
    B=350000;

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);

    C=A-(A*0.13);
    D=B-(B*0.21);

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", C);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", D);
    return 0;
}
