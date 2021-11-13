#include "reflector.hpp"

#include <iostream>
#include <string>

int main() {
    
    char test = 'A';

    int test_int = (int) test;

    std::cout << test << " : " << test_int << std::endl;
    
    ReflectorType type(ThinC);
    Reflector reflector = Reflector::create(type);
    
    for (int i: reflector.forward_wiring) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
