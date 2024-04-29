#include <iostream>

int main() {
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += array[i];
    }
    std::cout << "A soma dos elementos do array e: " << soma << std::endl;

    return 0;
}