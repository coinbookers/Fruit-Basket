#include <iostream>
#include <cstdlib>
#include <ctime>

// Return a random fruit type
int randomFruit() {
    return std::rand() % 2;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int apples = 0;
    int bananas = 0;
    char choice = 'y';

    std::cout << "=== Fruit Basket Quest ===\n";

    while (choice == 'y' || choice == 'Y') {
        int fruit = randomFruit();

        if (fruit == 0) {
            std::cout << "You collected an apple!\n";
            apples++;
        } else {
            std::cout << "You collected a banana!\n";
            bananas++;
        }

        std::cout << "Apples : " << apples << "\n";
        std::cout << "Bananas: " << bananas << "\n";

        std::cout << "\nContinue exploring? (y/n): ";
        std::cin >
