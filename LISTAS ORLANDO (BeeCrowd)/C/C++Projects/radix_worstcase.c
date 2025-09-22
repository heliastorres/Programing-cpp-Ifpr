#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Função para obter o valor máximo no array
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// Função para fazer counting sort do array de acordo com
// o dígito representado por exp
void countSort(int arr[], int n, int exp)
{
    // Array de saída
    int output[n];
    int i, count[10] = { 0 };

    // Armazena contagem de ocorrências em count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Altera count[i] para que contenha a posição real
    // deste dígito no array de saída
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Constrói o array de saída
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copia o array de saída para arr[]
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// Função principal que ordena arr[] de tamanho n usando Radix Sort
void radixsort(int arr[], int n)
{
    // Encontra o número máximo para saber o número de dígitos
    int m = getMax(arr, n);

    // Faz counting sort para cada dígito
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// Função utilitária para imprimir um array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// Programa principal para testar as funções
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    struct timeval inicio, fim;
    double tempo_gasto;
    size_t memoria;
    
    // Inicia a contagem do tempo
    gettimeofday(&inicio, NULL);
    
    // Função de ordenação Radix Sort
    radixsort(arr, n);
    
    // Finaliza a contagem do tempo
    gettimeofday(&fim, NULL);
    
    // Calcula o tempo gasto em milissegundos
    tempo_gasto = (fim.tv_sec - inicio.tv_sec) * 1000.0;
    tempo_gasto += (fim.tv_usec - inicio.tv_usec) / 1000.0;
    
    // Calcula a memória usada (aproximada)
    memoria = n * sizeof(int); // Array original
    memoria += n * sizeof(int); // Array temporário no counting sort
    memoria += 10 * sizeof(int); // Array de contagem
    
    // Mostra o vetor ordenado
    printf("Array ordenado: ");
    print(arr, n);
    
    printf("\nTempo gasto: %.3f milissegundos\n", tempo_gasto);
    printf("Memoria usada (aprox.): %zu bytes\n", memoria);
    
    return 0;
}