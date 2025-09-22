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

int main() {
    int n = 1000;
    int *arr = (int*) malloc(n * sizeof(int));
    int *backup = (int*) malloc(n * sizeof(int));

    // Melhor caso: vetor já ordenado em ordem crescente
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        backup[i] = arr[i]; // salva para restaurar em cada execução
    }

    // Calculando memória usada
    size_t memoria = n * sizeof(int) * 2 // arr + backup
                   + sizeof(int) * 3     // i, j, chave
                   + sizeof(int)         // n
                   + sizeof(arr) + sizeof(backup);

    // Medindo tempo com várias repetições
    clock_t inicio, fim;
    double tempo_gasto;
    int repeticoes = 10000; // executa 10 mil vezes

    inicio = clock();
    for (int r = 0; r < repeticoes; r++) {
        // restaura vetor para o melhor caso
        for (int i = 0; i < n; i++) arr[i] = backup[i];
        insertionSort(arr, n);
    }
    fim = clock();

    tempo_gasto = (((double)(fim - inicio)) / CLOCKS_PER_SEC) * 1000; // em milissegundos

    printf("Tempo total em %d execucoes: %f milisegundos\n", repeticoes, tempo_gasto);
    printf("Memoria usada (aprox.): %zu bytes\n", memoria);

    free(arr);
    free(backup);
    return 0;
}
