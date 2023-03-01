#include <stdio.h>
#include <stdlib.h>


float calcArea(float base, float altura){
    //float area = base * altura; armazenar em variavel ou:
    return base * altura;//ja retorna o resultado se variavel
}

int main()
{
    float result = calcArea(12.5 , 25.0);//armazena o return de calcArea que recebeu os numeros como parametros
    printf("O resultado e: %f", result);//%f para float
    //exibirMsg();

    return 0;
}

void exibirMsg(){
    printf("Seja bem vindo(a)\n");
    printf("Programacao estrutrada\n");
    printf("ADS - UNIFIA\n");
    return 0;
}
