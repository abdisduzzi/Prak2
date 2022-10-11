#include <stdio.h>

int main(){
    int a, b , x, y, totalsisa;

    printf("variable a bernilai : ");
    scanf("%d", &a);
    printf("variable b bernilai : ");
    scanf("%d", &b);
    printf("variable x bernilai : ");
    scanf("%d", &x);
    printf("variable y bernilai : ");
    scanf("%d", &y);
    totalsisa = (a%b) + (x%y);
    printf("total sisa bagi dari a dibagi b dan x dibagi y adalah %d", totalsisa);
    return 0;
}
