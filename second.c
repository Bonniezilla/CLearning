#include <stdio.h>

int main(int argc, char*argv[]) {
    if(sizeof(argv[1]) != 2) {
        printf("O formato do dia é de 2 digitos\n");
        return 0;
    }
    if(sizeof(argv[2]) != 2) {
        printf("O formato do mês é de 2 digitos\n");
        return 0;
    }
    if(sizeof(argv[3]) != 4 && sizeof(argv[3]) != 2) {
        printf("O formato do ano é de 2 ou 4 digitos\n");
        return 0;
    }

    printf("Data %s/%s/%s\n", argv[1], argv[2], argv[3]);

    return 0;
}