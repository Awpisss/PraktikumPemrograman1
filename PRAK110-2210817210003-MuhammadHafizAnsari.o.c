#include<stdio.h>

int main(){
    int a,t,A,B,C,k,l;
    a=5;
    t=12;
    A=t;
    B=sqrt(a*a+t*t);
    C=a;
    k=A+B+C;
    l=A*C/2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n",a);
    printf("Tinggi = %d cm\n",t);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n",C);
    printf("Sisi B = %d cm\n",B);
    printf("Sisi C = %d cm\n",A);
    printf("Keliling = %d cm\n",k);
    printf("Luas = %d cm\n",l);
    return 0;
}
