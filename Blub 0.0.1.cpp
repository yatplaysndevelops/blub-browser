#include <iostream>
#include <limits>
#include <string>
#include <unistd.h>

int main() {
  	std::cout << "ooooooooo  ooooo       ooooo  oooo oooooooooo  \n";
  	std::cout << " 888    888  888         888    88   888    888 \n";
  	std::cout << " 888oooo88   888         888    88   888oooo88  \n";
  	std::cout << " 888    888  888      o  888    88   888    888 \n";
 	 std::cout << "o888ooo888  o888ooooo88   888oo88   o888ooo888  \n";
  	std::cout << "                                               \n";

    std::cout << "WORD FROM OWNER: THIS ISNT THE FINISH PRODUCT DONT EXPECT THIS PROJECT TO BE FINAL\n";
  sleep(2);
    std::string word;
    std::cout << "Search: ";
    std::getline(std::cin, word);
    std::cout << "Heres The Available Searches About : \"" << word << "\": ";
    if (word == "allenmartinhack") {
      std::cout << "He is good admin at my game very kind. Needs A Promotion.\n";
    } else if (word == "cowxo_") {
      std::cout << "She Or He Is A Furry .\n";
    } else if (word == "evafan aka greed") {
      std::cout << "Very good guy determind to get world records";
    } else {
      std::cout << "The word \"" << word << "\" is not available yet...\n";
    }
    std::cout << "Press ENTER to exit...";
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
  return 0;
}

//if you see this just remmeber your a pussy
