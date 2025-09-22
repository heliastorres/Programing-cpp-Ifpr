#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, j, chave;
    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

// Ordena em ordem decrescente (para garantir o pior caso)
void bubbleSortDecrescente(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 1000;
    int *arr = (int*) malloc(n * sizeof(int)); // alocação dinâmica

    srand(time(NULL));

    // Preenche vetor com números aleatórios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000 + 1;
    }

    // Ordena em ordem decrescente para garantir o pior caso
    bubbleSortDecrescente(arr, n);

    // Calculando memória usada
    size_t memoria = n * sizeof(int)     // vetor arr
                   + sizeof(int) * 3     // i, j, chave
                   + sizeof(int)         // n
                   + sizeof(arr);        // ponteiro

    // Medindo tempo de execução
    clock_t inicio, fim;
    double tempo_gasto;

    inicio = clock();
    insertionSort(arr, n);
    fim = clock();

    tempo_gasto = (((double)(fim - inicio)) / CLOCKS_PER_SEC) * 1000; // em milissegundos

    // Exibe apenas primeiros 20 elementos para confirmar
    printf("Vetor ordenado (primeiros 20 elementos): ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n...\n");
    printf("Tempo gasto: %f milisegundos\n", tempo_gasto);
    printf("Memoria usada (aprox.): %zu bytes\n", memoria);

    free(arr); // libera memória
    return 0;
}
