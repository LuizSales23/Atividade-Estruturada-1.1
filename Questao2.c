#include <stdio.h>
#include <string.h>

struct Planta {
    char especie[50];
    int diasSemAgua;
    char status; 
};

void verificarPlanta(struct Planta *p) {
    if (p->diasSemAgua >= 3) {
        p->status = 'O';
        p->diasSemAgua = 0;
    }
}

int main() {
    struct Planta planta;

    printf("Especie: ");
    scanf("%s", planta.especie);

    printf("Dias sem agua: ");
    scanf("%d", &planta.diasSemAgua);

    planta.status = 'N';

    printf("\nANTES:\n");
    printf("Dias: %d | Status: %c\n", planta.diasSemAgua, planta.status);

    verificarPlanta(&planta);

    printf("\nDEPOIS:\n");
    printf("Dias: %d | Status: %c\n", planta.diasSemAgua, planta.status);

    return 0;
}
