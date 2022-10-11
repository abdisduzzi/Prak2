#include <stdio.h>

int main(){
int pasukan, pahlawan, musuh;
printf("Jumlah pasukan yang dibawa Yu Zhong = ");
scanf("%d", &pasukan);
printf("Jumlah Pahlawan                     = ");
scanf("%d", &pahlawan);
musuh = pasukan / pahlawan;
printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah = %d pasukan", musuh);
return 0;
}
