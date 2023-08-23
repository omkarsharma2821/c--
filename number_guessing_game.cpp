#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 10
    int secretNumber = std::rand() % 10 + 1; 
    
    int guess;
    while (true) {
        // Ask the user to guess the number
        std::cout << "Guess a number between 1 and 10: ";
        std::cin >> guess; // Get user input
        
        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            break; // Exit the loop when the guess is correct
        } else if (guess < secretNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }

    return 0; 
}
