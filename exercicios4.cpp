#include <iostream>

int main() {
    float array[8] = {3.2, 6.5, 4.8, 9.1, 2.3, 7.6, 5.0, 8.9};
    std::cout << "Valores maiores que 5 do array:" << std::endl;
    int i = 0;
    while (i < 8) {
        if (array[i] > 5.0) { // Verifica se o valor é maior que 5
            std::cout << array[i] << std::endl;
        }
        i++;
    }

    return 0;
}