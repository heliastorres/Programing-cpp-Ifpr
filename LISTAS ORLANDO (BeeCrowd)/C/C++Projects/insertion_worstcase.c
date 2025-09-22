#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, j, chave;
    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

void inverterVetor(int arr[], int n) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Função para calcular diferença entre tempos em milissegundos
double diff_ms(struct timespec inicio, struct timespec fim) {
    return (fim.tv_sec - inicio.tv_sec) * 1000.0 +
           (fim.tv_nsec - inicio.tv_nsec) / 1.0e6;
}

int main() {
    const int N = 10000;   // vetor com 10 mil elementos
    static int vetor[10000];

    // Preenche o vetor
    for (int i = 0; i < N; i++) vetor[i] = i + 1;

    struct timespec inicio, fim;
    double tempo_ms;

    // ---------- Melhor caso ----------
    clock_gettime(CLOCK_MONOTONIC, &inicio);
    insertionSort(vetor, N);
    clock_gettime(CLOCK_MONOTONIC, &fim);

    tempo_ms = diff_ms(inicio, fim);
    printf("Tempo (melhor caso): %.6f ms\n", tempo_ms);
    printf("Memoria usada: %zu bytes\n\n", sizeof(int) * 3);

    // ---------- Pior caso ----------
    inverterVetor(vetor, N); // deixa em ordem decrescente

    clock_gettime(CLOCK_MONOTONIC, &inicio);
    insertionSort(vetor, N);
    clock_gettime(CLOCK_MONOTONIC, &fim);

    tempo_ms = diff_ms(inicio, fim);
    printf("Tempo (pior caso): %.6f ms\n", tempo_ms);
    printf("Memoria usada: %zu bytes\n", sizeof(int) * 3);

    return 0;
}
