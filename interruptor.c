#include <stdio.h>

int main() {
    char foco = 'a'; // 'a' para apagado, 'p' para prendido

    while (1) {
        if (foco == 'a') {
            printf("El foco está apagado.\n");
        } else {
            printf("El foco está prendido.\n");
        }

        printf("Presiona Enter para cambiar el estado del foco.\n");
        getchar(); // Esperamos a que el usuario presione Enter

        foco = (foco == 'a') ? 'p' : 'a'; // Cambiamos el estado del foco
    }

    return 0;
}
