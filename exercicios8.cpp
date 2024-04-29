#include <iostream>

int main() {
    const int tamanho = 10;
    float array[tamanho];
    float soma = 0;

    std::cout << "Insira um valor para cada elemento do array:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Elemento " << i << ": ";
        std::cin >> array[i];
        soma += array[i];
    }

    float media = soma / tamanho;
    std::cout << "A media dos valores inseridos e: " << media << std::endl;

    return 0;
}