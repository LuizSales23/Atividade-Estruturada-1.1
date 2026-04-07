#include <stdio.h>
#include <string.h>

struct Notebook {
    char marca[50];
    char modelo[50];
    int ram;
    float preco;
};

int main() {
    int n = 3;

    struct Notebook notebooks[n];

    for (int i = 0; i < n; i++) {
        printf("\nNotebook %d\n", i + 1);

        printf("Marca: ");
        scanf("%s", notebooks[i].marca);

        printf("Modelo: ");
        scanf("%s", notebooks[i].modelo);

        printf("RAM (GB): ");
        scanf("%d", &notebooks[i].ram);

        printf("Preco: ");
        scanf("%f", &notebooks[i].preco);
    }

    int maior = 0;

    for (int i = 1; i < n; i++) {
        if (notebooks[i].ram > notebooks[maior].ram) {
            maior = i;
        }
    }

    printf("\nNotebook com mais RAM:\n");
    printf("Modelo: %s\n", notebooks[maior].modelo);
    printf("Preco: %.2f\n", notebooks[maior].preco);

    return 0;
}
