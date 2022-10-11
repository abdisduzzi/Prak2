#include <stdio.h>
#include <math.h>
int main(){
int alas = 5, tinggi = 12, A, B, C, K, L, P;
printf("Diketahui :\n");
printf("Alas = %d cm\n", alas);
printf("Tinggi = %d c,\n", tinggi);
printf("Jawab :\n");
A = tinggi;
printf("sisi A = %d cm\n", A);
C = alas;
printf("Sisi C = %d cm\n", C);
P = (A * A) + (C * C);
B = sqrt(P);
printf("Sisi B = %d cm\n", B);

K = A + B + C;
printf("Keliling = %d\n", K);
L = 0.5 * A * C;
printf("Luas = %d\n", L);
return 0;
}
