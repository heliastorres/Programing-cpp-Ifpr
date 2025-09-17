#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Função para encontrar o maior elemento do array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Função para fazer a ordenação por Counting Sort (usada como sub-rotina do Radix Sort)
void countingSort(int arr[], int n, int exp) {
    int output[n]; // Array de saída
    int count[10] = {0}; // Inicializa o array de contagem

    // Conta a ocorrência de cada dígito
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Atualiza count[i] para que contenha a posição atual do dígito no output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Constrói o array de saída
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copia o array de saída para o array original
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Função principal do Radix Sort
void radixSort(int arr[], int n) {
    // Encontra o maior número para saber o número de dígitos
    int max = findMax(arr, n);

    // Faz a ordenação por counting sort para cada dígito
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Para medir tempos muito curtos, precisamos repetir a operação muitas vezes
    const long long repetitions = 1000000; // 1 milhão de repetições
    
    printf("Vetor original: ");
    printArray(arr, n);

    // Fazer uma cópia do array original para reutilizar a cada repetição
    int* arr_copy = (int*)malloc(n * sizeof(int));
    
    // Medir o tempo de execução
    clock_t start = clock();
    
    for (long long i = 0; i < repetitions; i++) {
        // Restaurar o array original a cada repetição
        for (int j = 0; j < n; j++) {
            arr_copy[j] = arr[j];
        }
        radixSort(arr_copy, n);
    }
    
    clock_t end = clock();
    
    printf("Vetor ordenado: ");
    printArray(arr_copy, n);

    double total_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    double avg_time = total_time / repetitions;
    
    printf("Tempo total para %lld execuções: %f segundos\n", repetitions, total_time);
    printf("Tempo médio por ordenação: %f microsegundos\n", avg_time * 1000000);
    
    free(arr_copy);
    return 0;
}