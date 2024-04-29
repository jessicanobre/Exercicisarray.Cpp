#include <iostream>

int main() {
    int array[] = {3, 7, 9, 12, 4, 6, 8, 10};
    int tamanho = sizeof(array) / sizeof(array[0]);

    std::cout << "O terceiro elemento do array: " << array[2] << std::endl;

    
    std::cout << "A soma do sexto elemento com o oitavo elemento: " << array[5] + array[7] << std::endl;
    std::cout << "A diferenca entre o segundo elemento e o primeiro: " << array[1] - array[0] << std::endl;
    if (array[3] > 6) {
        std::cout << "O quarto elemento: " << array[3] << std::endl;
    }
    if (array[0] % 2 == 0) {
        std::cout << "O ultimo elemento: " << array[tamanho - 1] << std::endl;
    }
    if (array[3] + array[7] > 22) {
        std::cout << "O primeiro elemento: " << array[0] << std::endl;
    }
    return 0;
}