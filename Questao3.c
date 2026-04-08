#include <stdio.h>


struct Projeto {
    char nome[50];
    int tempo;   
    int status;  
};


void verificarProjetos(struct Projeto *p, int tamanho, int limite) {
    for (int i = 0; i < tamanho; i++) {
        if ((p + i)->tempo <= limite) {
            (p + i)->status = 1;
        }
    }
}

int main() {
    
    struct Projeto projetos[4] = {
        {"Engrenagem", 30, 0},
        {"Suporte", 50, 0},
        {"Capa", 20, 0},
        {"Base", 70, 0}
    };

    int limite;

    printf("Digite o tempo limite (em minutos): ");
    scanf("%d", &limite);

    
    verificarProjetos(projetos, 4, limite);

    printf("\nProjetos concluidos dentro do limite:\n");

    for (int i = 0; i < 4; i++) {
        if (projetos[i].status == 1) {
            printf("- %s\n", projetos[i].nome);
        }
    }

    return 0;
}
