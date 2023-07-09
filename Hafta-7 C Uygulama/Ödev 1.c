#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Bir kelime veya cumle girin: ");
    fgets(input, sizeof(input), stdin);

    // İnputun sonundaki satır sonu karakterini kaldırma
    if (input[strlen(input) - 1] == '\n')
        input[strlen(input) - 1] = '\0';

    printf("Girdiginiz kelimenin veya cumlenin uzunlugu: %zu\n", strlen(input));

    return 0;
}