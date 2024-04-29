#include <iostream>

int main() {
    int array[8] = {5, 8, 12, 15, 18, 20, 24, 30};
    
    std::cout << "Numeros que sao multiplos de 3 e maiores que 10:" << std::endl;
    for(int i = 0; i < 8; i++) {
        if(array[i] % 3 == 0 && array[i] > 10) {
            std::cout << array[i] << std::endl;
        }
    }

    return 0;
}