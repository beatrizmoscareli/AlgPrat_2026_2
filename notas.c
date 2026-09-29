#include <stdio.h>
int main (){
    int qtdNotas, i;
    float nota;
    do{
        printf("Quantidade de notas a serem calculadas: ");
        scanf("%d", &qtdNotas);

        if (qtdNotas<= 0){
            printf("Número invalido, insira um valor maior do que 0!\n");

        }

        printf("Digite nota: ");
        scanf ("%f", &nota);
        
        if (nota<0 && nota>10);
        printf("Nota Incorreta, nota: %f\n",nota);


    }while (qtdNotas <= 0);


    return 0;
}