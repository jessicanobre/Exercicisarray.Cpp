#include <iostream>

int main() {
    int array[7] = {5, 12, 9, 8, 15, 6, 10};
    std::cout << "Numeros pares do array:" << std::endl;
    for(int i = 0; i < 7; i++) {
        if(array[i] % 2 == 0) { // Verifica se o número é par
            std::cout << array[i] << std::endl;
        }
    }

    return 0;
}