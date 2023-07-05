#include <iostream>

int main() {
    std::cout << R"(
          _______
         |       |
         | Start |
         |_______|
             |
             |
             |
             V
          _______
         |       |
         | Beach |
         |   L   |
         |_______|
             |
             |
             |
         ____V____
        |         |
        |  Cave   |
        |  Door   |
        |   R     |
        |_________|
             |
      _______V_______
     |               |
     |  Cave         |
     |  Treasure    |
     |   Y           |
     |_______________|


)" << '\n';

    std::cout << "Welcome to Treasure Island." << '\n';
    std::cout << "Your mission is to find the treasure.\nThe map will guide you" << '\n';

    char step1;

    std::cout << "Left or Right: L or R\n";
    std::cin >> step1;

    switch (step1) {
        case 'L': {
            char step2;
            std::cout << "Swim or Wait: S or W\n";
            std::cin >> step2;

            switch (step2) {
                case 'W': {
                    char step3;
                    std::cout << "Which door? Red Blue Yellow: R B Y \n";
                    std::cin >> step3;

                    switch (step3) {
                        case 'R':
                            std::cout << "Burned by fire. Game over.\n";
                            break;
                        case 'B':
                            std::cout << "Eaten by beasts. Game over.\n";
                            break;
                        case 'Y':
                            std::cout << "You win!\n";
                            break;
                        default:
                            std::cout << "Game over.\n";
                            break;
                    }
                    break;
                }
                default:
                    std::cout << "Attacked by trout. Game over.\n";
                    break;
            }
            break;
        }
        default:
            std::cout << "Fall into a hole. Game over.\n";
            break;
    }

    return 0;
}
