/*
Maquina de Saque
Solicite o valor do saque, número inteiro
Exemplo
Digite o valor do saque: 130
Cedula R$ 50: 2
Cedula R$ 20: 1
Cedula R$ 10: 1
*/ 

#include <stdio.h>

int main() {

    int saque=0, cedulas=0, saldo=0;
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    if(saque%10!= 0){
        printf("Não é possível sacar R$ %d\n", saque);
        return 1;
    }

    cedulas = saque / 50;
    printf("Cedula R$ 50: %d\n", cedulas);
    saldo = saque % 50;

    cedulas = saldo / 20;
    saldo%=20; //saldo = saldo % 20;
    printf("Cedula R$ 20: %d\n", cedulas);
    

    cedulas = saldo / 10;
    saldo%=10; //saldo = saldo % 10;
    printf("Cedula R$ 10: %d\n", cedulas);




    return 0;
}
