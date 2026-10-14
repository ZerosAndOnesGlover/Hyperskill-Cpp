#include <iostream>
#include <string>

int main() {

    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    std::cout << "Choose your move: Rock, Paper, or Scissors: ";
    std::string move;
    std::cin >> move;
    std::cout << "You wrote " << move << " to the console." << std::endl;
    return 0;
}
