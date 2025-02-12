#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    
    int randomNumber = std::rand() % 100 + 1;

    int guess = 0;
    
    std::cout << "I have generated a random number between 1 and 100. Try to guess it!" << std::endl;

    
    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
        }
    }

    return 0;
}