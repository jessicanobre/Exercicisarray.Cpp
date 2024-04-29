#include <iostream>
template <size_t N>
void printArraySize(char (&arr)[N]) {
    std::cout << "Tamanho total do array: " << N << std::endl;
}
int main() {
    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    printArraySize(array);
    return 0;
}