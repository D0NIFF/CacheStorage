#include <iostream>

int main()
{
    std::cout << "Hello, {user}!" << std::endl;
    std::string command;

    std::getline(std::cin, command);

    std::cout << command << std::endl;
    return 0;
}
