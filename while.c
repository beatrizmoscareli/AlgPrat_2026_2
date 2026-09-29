#include <stdio.h>


int main(){
    int a,b,c,d,aux,num=0;
    printf("Digite o valor de a: ");
    scanf("%d", &a);    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de d: ");
    scanf("%d", &d);


    printf("Valores:           a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }
    if(b>c){
        aux=b;
        b=c;
        c=aux;
        num++;
    }
    if(c>d){
        aux=c;
        c=d;
        d=aux;
        num++;
    }
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }  
    if(b>c){
        aux=b;
        b=c;
        c=aux;
        num++;
    }
    if(a>b){
        aux=a;
        a=b;
        b=aux;
        num++;
    }  


    printf("Valores Ordenados: a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
    printf("Quantidade de IFs utilizados: %d\n",num);
    return 0;


}


*/

#include <stdio.h>


int main(){
    int i,soma=0;
    i=0;
    printf("Saida: ");
    while(i<=10){
        printf("%d ",i);
        //i++;i++;//i=i+1 // i+=1
        soma+=i;//soma=soma+i;//acumulador
        i+=2;//contador
    }
    printf("\nSoma: %d\n",soma);
    printf("\n");
    printf("------------------\n");
    /*
    1) valor inicial? 11
    2) condição? i<=14 ou i<15
    3) contador? i++
    4) quantas vezes o looping foi executado? 4
    5) qual o valor tornou a condição como falsa? 15
    6) saida: 11 12 13 14
    7) soma:
    -----------------------------------
    1) 4
    2) i>=0 ou i>-1
    3) i--
    4) 5
    5) -1
    6) Saída: 4 3 2 1 0
    7) Soma:
    -----------------------------------
    1) 0
    2) i<=10
    3) i+=3
    4) 6
    5) 12
    6) Saída: 0 3 6 9
    7) soma:
    */
    return 0;
}
