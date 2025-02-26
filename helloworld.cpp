#include <iostream>

//modified so as to accept name as argument

int main(int argc, char* argv[]) { 

    // Default message
    std::cout << "Hello World";  //fixed the typo

    // If a name is provided as a command-line argument, append it
    
    if (argc > 1) {
        std::cout << " " << argv[1];
    }

    std::cout << "!" << std::endl;
    return 0;
}
