#include <stdio.h>
#include <stdlib.h>
int minha_strlen(char *string);
void minha_strcpy (char *destino, char *origem) ;
int  minha_strcmp(char *s1, char *s2);
int e_palindromo(char *s);

int main() {
    printf("strlen('teste'): %d\n", minha_strlen("teste"));

    char copia[50];
    minha_strcpy(copia, "programacao");
    printf("strcpy: '%s'\n", copia);

    printf("strcmp('oi','oi'): %d\n", minha_strcmp("oi", "oi"));
    printf("strcmp('oi','ola'): %d\n", minha_strcmp("oi", "ola"));

    char nome[50];
    printf("Digite uma palavra para testar palindromo: ");
    scanf("%s", nome);
    int resultado = e_palindromo(nome);
    printf("e_palindromo('%s'): %d\n", nome, resultado);

    return 0;
}

int minha_strlen(char *string){
    int contador  =0;
    for(int i = 0; string[i] != '\0'; i++) {
        contador ++;
    }
    return contador;
}
void minha_strcpy (char *destino, char *origem) {
    int i;
    for(i = 0; origem[i] != '\0'; i++){
        destino[i] = origem[i];
    }
      destino[i] = '\0';
}

int minha_strcmp(char *s1, char *s2) {
    int i=0,diferente=0;
    while (s1[i] != '\0'|| s2[i] != '\0' ) {
        if (s1[i] != s2[i]) {
            diferente = 1;
            break;
        }
        i++; 
    }
    return(diferente);
}

int e_palindromo(char *s) {
    char *p1,*p2;
    int i  ,valor = 1;
    for(i = 0; s[i] != '\0'; i++) {
    }
    p2 = &s[i-1];
    p1 = &s[0];
    while(p1 < p2) {
        if(*p1 != *p2) {
            valor = 0;
            break;
        }
        p1++;
        p2--;
    }
    return (valor);
}