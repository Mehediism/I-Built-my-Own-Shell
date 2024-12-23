#include <iostream>
#include <string>

int main() {
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;
    
    while(true) {
        std::cout << "$ ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "exit 0") 
            return 0;
            
        std::cout << input << ": command not found" << std::endl;
    }
    
    return 0;
}
