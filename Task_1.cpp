#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits> // Include the <limits> header for std::numeric_limits

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have picked a random number between 1 and 100." << std::endl;

    int userGuess;
    int attempts = 0;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        attempts++;

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << std::endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
