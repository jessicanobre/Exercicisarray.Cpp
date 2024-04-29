#include <iostream>

int main() {
    const int tamanho = 10;
    int array[tamanho];
    std::cout << "Insira valores para cada elemento do array:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Elemento " << i << ": ";
        std::cin >> array[i];
    }
    std::cout << "Valores do array:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Elemento " << i << ": " << array[i] << std::endl;
    }

    return 0;
}