#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float soma;
    int auxiliar =1 ;

    // (n�+1)/(n+3)    
    while( auxiliar ) {
        printf("Digite um n�mero qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usu�rio digitou %d \n",auxiliar);
        if (auxiliar) {
          printf("Vamos somar at� %d \n",auxiliar);
          soma=0;
          for (n=1;n<=auxiliar;n++){
              soma += (n*n+1.0)/(n +3.0);
          };
          printf("O resultado da s�rie � %f \n\n",soma);
        }
        else {
             printf("entrada terminada pelo usu�rio \n");
        }
    };

}
