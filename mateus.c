#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    
    while (fim > inicio) {
        if (str[inicio++] != str[fim--]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char palavra[20];
    
    printf("Digite a palavra:\n");
    scanf("%s", palavra);
    
    if(ehPalindromo(palavra)) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }
    
    return 0;
}