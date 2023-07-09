#include <stdio.h>

int faktoriyel(int n);

int main() {
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi < 0) {
        printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
    } else {
        int sonuc = faktoriyel(sayi);
        printf("%d! = %d\n", sayi, sonuc);
    }

    return 0;
}

int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}