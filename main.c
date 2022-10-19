/***************************************************************/
/**                                                           **/
/**   Tássyla Lissa Lima - 13684471                           **/
/**   Engenharia de Computação - Escola Politécnica           **/
/**   MAC0122 - Exercício-Programa 03                         **/
/**   Professor: Carlinhos                                    **/
/**                                                           **/
/***************************************************************/
 
#include <stdio.h>
#include <string.h>
#define MAX 100;

int main(){

    int k;
    char palavra[MAX];

    scanf("%d", &k);

    while(scanf("%s", palavra)!=EOF) {
        printf("%s", palavra);
    }


    return 0;
}