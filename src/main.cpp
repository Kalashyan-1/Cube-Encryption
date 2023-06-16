#include "encription.h"

int main() {
    std::string text;
    std::getline(std::cin, text);
    Encription e(text);
    std::cout << "Encrypted text: " << e.encript() << std::endl;
    std::cout << "Decrypted text: " << e.decript() << std::endl;
}