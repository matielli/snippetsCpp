//Snippet para leitura de entrada de dados:
int n;
cin >> n;

//Snippet para declaração de um vetor:
int arr[10];

//Snippet para declaração de uma função:
int soma(int a, int b) {
    return a + b;
}

//Snippet para um loop while:
int i = 0;
while (i < 10) {
    // Corpo do loop
    ++i;
}

//Snippet para um loop for:
for (int i = 0; i < 10; ++i) {
    // Corpo do loop
}

//Snippet para declaração de uma estrutura (struct):
struct Pessoa {
    string nome;
    int idade;
};

//Snippet para uma função de impressão:
void imprimir(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Snippet para declaração de uma classe:
class Carro {
public:
    string marca;
    string modelo;
    int ano;
};

//Snippet para manipulação de strings:
string nome = "João";
cout << "Tamanho da string: " << nome.size() << endl;

//Snippet para leitura de uma linha inteira:
string linha;
getline(cin, linha);

//Snippet para encontrar o máximo entre dois números:
int maximo = max(a, b);

//Snippet para gerar números aleatórios:
#include <cstdlib>
#include <ctime>

srand(time(0));
int numeroAleatorio = rand() % 100 + 1; // Número aleatório entre 1 e 100

//Snippet para verificar se um número é primo:
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

//Snippet para ordenar um vetor usando a função sort():
#include <algorithm>

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + n);
    
    return 0;
}

//Snippet para realizar uma busca binária em um vetor ordenado:
int buscaBinaria(int arr[], int n, int chave) {
    int esq = 0, dir = n - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (arr[meio] == chave) return meio;
        if (arr[meio] < chave) esq = meio + 1;
        else dir = meio - 1;
    }
    return -1;
}

//Snippet para usar recursão para calcular o fatorial de um número:
int fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}