#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void menu {
    printf("1 - Cadastrar\n2 - Listar\n3 - Media\n");
    scanf("%d", &menu);
    switch menu{
        case 1: Cadastrar(); break;
        case 2: Listar(); break;
        case 3: Media(); break;
        case 4: exit;
    }

void Cadastrar(){
    int idade[];
    char sexo[];
    printf("Digite a idade: ");
    scanf("%d", &idade[i]);
    getchar();
    printf("Digite a sexo: ");
    scanf("%c", &sexo[i]);
}

void Listar(){
    printf("#### Todos animais\n");
    for (int i = 0; i < TAM; i++){
        printf("Idade: %d - Sexo: %c\n", idade[i], sexo[i]);
    }
}

void Media(){
    // calcular a média
    int soma = 0;
    for (int i = 0; i < TAM; i++)
        soma += idade[i];

    int media = soma / TAM;

    //imprimindo maiores que a média
    printf("#### Animais com idade acima da média\n");
    for (int i = 0; i < TAM; i++){
        if (idade[i] > media)
            printf("Idade: %d - Sexo: %c\n", idade[i], sexo[i]);
    }
    
}

    
}

int main(){ 
    

}
