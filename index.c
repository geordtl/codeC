#include <stdio.h>

int main(void){
    int h, m, s, hf, mf, sf, horas, minutos, segundos, total;
    
    scanf("%dh%dm%ds", &h, &m, &s);
    scanf("%dh%dm%ds", &hf, &mf, &sf);
    
    if(hf <= h){
        total = (((hf*3600) + (mf*60) + sf) + (24*3600))- ((h*3600) + (m*60) + s);
    }
    if(hf > h){
        total = ((hf*3600) + (mf*60) + sf) - ((h*3600) + (m*60) + s);
    }
    if(mf > m){
        total = ((hf*3600) + (mf*60) + sf) - ((h*3600) + (m*60) + s);
    }
    if(sf > s){
        total = ((hf*3600) + (mf*60) + sf) - ((h*3600) + (m*60) + s);
    }
    horas = total/3600;
    total = total%3600;
    minutos = total/60;
    segundos = total%60;
    printf("%dh%dm%ds", horas, minutos, segundos);



    /*
    float x, y, distancia, tempo1, tempo2;
    x = 60;
    y = 90;
    scanf("%f", &distancia);
    tempo1 = distancia/x;
    tempo2 = distancia/y;
    printf("O carro X gastará %.2f horas, e o Y %.2f horas\n", tempo1, tempo2);
    
    int a, b, c, D, S, R;
    scanf("%d %d %d", &a, &b, &c);
    R = (a + b) * (a + b);
    S = (b + c) * (b + c);
    D = (R + S)/2;
    printf("%d", D); */

    
    /* 
    EXERCÍCIO 1

    float n1, n2, n3, n4, menor, soma;
    printf("Informe quatro números:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    menor = n1;

    if(n2<menor){
        menor = n2;
    }
    if(n3<menor){
        menor = n3;
    }
    if(n4<menor){
        menor = n4;
    }
    printf("O menor número é o %.2f\n", menor);
    soma = n1 + n2 + n3 + n4 - menor;
    printf("E a soma dos três nº maiores é: %.2f\n", soma);

    -------

    EXERCÍCIO 2

    float n1, n2, n3, n4, maior, soma;
    printf("Informe quatro números: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    maior = n1;

    if(n2 > maior){
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }
    if(n4 > maior){
        maior = n4;
    }
    printf("O maior número é o %.2f\n", maior);
    soma = n1 + n2 + n3 + n4 - maior;
    printf("E a soma dos três menores é: %.2f", soma);

    -----

    EXERCÍCIO 3

    float a, b, c, delta;
    printf("Informe três números: \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b*b) - (4*a*c);

    printf("Delta: %.2f\n", delta);

    if(delta > 0){
        printf("Existem duas raízes reais\n");
    }
    if(delta < 0){
        printf("Não existem raízes reais\n");
    }
    if(delta == 0){
        printf("Existe uma raíz real\n");
    } 
    
    ----

    EXERCÍCIO 4

    int num;
    printf("Informe um número: \n");
    scanf("%d", &num);

    if(num % 7 == 0){
        printf("É múltiplo!\n");
    }
    if(num % 7 != 0){
        printf("Não é múltiplo!\n");
    }

    float x, y, z, menor, mediano, maior;
    printf("Informe três números:\n");
    scanf("%f %f %f", &x, &y, &z);
    menor = x;
    maior = y;
    mediano = z;

    if(y<menor){
        menor = y;
    }
    if(z<menor){
        menor = z;
    }
    if(x>maior){
        maior = x;
    }
    if(z>maior){
        maior = z;
    }

    if(x > menor && x < maior){
        mediano = x;
    }
    if(y > menor && y < maior){
        mediano = y;
    }

    x = menor;
    y = mediano;
    z = maior;

    printf("O menor número é: %0.2f, o mediano é: %0.2f, e o maior é: %0.2f: ", menor, mediano, maior);
    */
    return 0;
}