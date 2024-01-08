#include <stdio.h>

int verifyNumber(short int number) {
    short int rNumber = -1;
    printf("Digite o número %hi\n", number);

    while (scanf("%hi", &rNumber) != 1 || rNumber < 0) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("Digite o número %hi\n", number);
    }
    if (rNumber < 0) {
        verifyNumber(number);
    }    

    return rNumber;
}

int main(void) {
    short int number1 = verifyNumber(1);
    short int number2 = verifyNumber(2);

    short int sum = number1 + number2;

    printf("A soma dos números é: %hi\n", sum);

    return 0;
}