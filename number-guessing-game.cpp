#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    int myNumber = (rand() % 10)+1;
    int guessedNumber;
    int lives = 3;

    std::cout << myNumber << std::endl;

    while(lives>0) {
        std::cout << "Guess a number between 1 and 10: ";
        std::cin >> guessedNumber;

        if (guessedNumber == myNumber) {
            std::cout << "Congratulations! You guessed correctly.";
            break;
        } else {
            lives--;
            std::cout << "Incorrect guess. You have " << lives << " more live(s) left." << std::endl;
        }
    }

    if (lives<=0) {
        std::cout << "You are out of lives" << std::endl;
    }


    return 0;
}