/* Máquina de Saque
Solicite o valor do saque, numero inteiro
Exemplo: digite o valor do saque: 130
Cédulas de R$ 50,00 = 2
Cédulas de R$ 20,00 = 1
Cédulas de R$ 10,00 = 1 */
#include <stdio.h>
int main() {   
    int valor, nota50, nota20, nota10, resto;
    printf("Diga o valor que vai ser sacado: ");
    scanf("%d", &valor);

 if(valor%10!=0){
        printf("Não é possível sacar R$ %d \n", valor);
        return 1;
    } 

    nota50 = valor / 50;
    resto = valor % 50;

    nota20 = resto / 20;
    resto = resto % 20;

    nota10 = resto / 10;
    resto = resto % 10;

    printf("\nSaque:\n");
    printf("Cédulas de R$ 50,00 = %d\n", nota50);
    printf("Cédulas de R$ 20,00 = %d\n", nota20);
    printf("Cédulas de R$ 10,00 = %d\n", nota10);
    return 0;
}
