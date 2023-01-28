#include "main.h"
#include <iostream>

int main () {
    // Ask for name
    std::cout << "what is your name?\n";
    std::string name;
    std::cin >> name;
    std::cout << "hello " << name << " you are very cute and cuddly :3" << std::endl;
    return 0;
}