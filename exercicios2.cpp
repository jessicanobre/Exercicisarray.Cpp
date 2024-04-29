#include <iostream>

int main() {
    char alphabet[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    std::cout << "Elementos do array:" << std::endl;
    int i = 0;
    while (i < 6) {
        std::cout << "Elemento " << i << ": " << alphabet[i] << std::endl;
        i++;
    }

    return 0;
}