#include <stdio.h>
#include <assert.h>

// caso positivo ir� exibir o valor 1
// caso negativo ir� exibir o valor 0

int ehPositivo(int numero) {
    if(numero >= 0) {
       return 1;
    } else {
       return 0;
    }
}

int main (){

    assert(ehPositivo(100) == 1);
    assert(ehPositivo(0) == 1);
    assert(ehPositivo(-100) == 0);

    return 0;
}
