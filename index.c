#include <stdio.h>

int main(void){
    int n1, n2, opcao;
    float media, soma, resto, q1, q2;

    scanf("%d %d", &n1, &n2);
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            media = (n1+n2)/2;
            printf("A média é: %f", media);
        break;
        case 2: 
            q1 = (n1*n1);
            q2 = (n2*n2);
            soma = q1 + q2;
            printf("A soma dos quadrados dos números: %f", soma);
        break;
        case 3: 
            resto = n1%n2;
            printf("O resto da divisão do primeiro pelo segundo é: %f", resto);
        break;
        default: 
            printf("A mensagem de erro.");
        break;
    }

    

    /*
    float peso, g;
    int planeta;

    printf("Qual o seu peso?\n");
    scanf("%f", &peso);
    printf("Escolha um planeta e informe o número correspondente: 1 - Mercurio, 2 - Venus, 3 - Marte, 4 - Jupiter, 5 - Saturno, 6 - Urano \n");
    scanf("%d", &planeta);

    switch(planeta){
        case 1: 
            g = 3.7;
            peso = (peso/10) *  g;
            printf("Planeta: Mercúrio, Peso: %f", peso);
        break;
        case 2:
            g = 8.8;
            peso = (peso/10) *  g;
            printf("Planeta: Vênus, Peso: %f", peso);
        break;
        case 3:
            g = 3.8;
            peso = (peso/10) *  g;
            printf("Planeta: Marte, Peso: %f", peso);
        break;
        case 4:
            g = 26.4;
            peso = (peso/10) *  g;
            printf("Planeta: Júpiter, Peso: %f", peso);
        break;
        case 5:
            g = 11.5;
            peso = (peso/10) *  g;
            printf("Planeta: Saturno, Peso: %f", peso);
        break;
        case 6:
            g = 11.7;
            peso = (peso/10) *  g;
            printf("Planeta: Urano, Peso: %f", peso);
        break;
    }


   int dia, mes, ano, bissexto, totalDias;

   scanf("%d/%d/%d", &dia, &mes, &ano);
   bissexto = ano%400;
   
   if(bissexto == 0){
       if(mes == 2){
           totalDias = dia + 28;
       }
       printf("%d", totalDias);
   }
   if(bissexto != 0){
    if(mes == 2){
        totalDias = dia + 28;
    }

    if(mes > 2){
        totalDias = (31 * mes) - 3;
    }

    printf("%d", totalDias);
   }


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