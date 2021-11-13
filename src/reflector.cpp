#include "reflector.hpp"

#include <iostream>
#include <string>
#include <vector>

Reflector::Reflector(const std::string& encoding) {
    // make sure encoding is correct length
    if (encoding.length() != 26) {
        std::cout << "Incorrect reflector encoding" << std::endl;
    } else {
        this->forward_wiring = Reflector::decode_wiring(encoding);
    }
}

std::vector<int> Reflector::decode_wiring(const std::string& encoding) {
    std::vector<int> wiring;
    
    // loop over each character of encoding
    for (auto letter = encoding.begin(); letter != encoding.end(); letter++) {
        wiring.push_back((int) *letter - 65);
    }

    return wiring;
}

Reflector Reflector::create(const ReflectorType& type) {
    std::string encoding;

    switch (type) {
        case B :
            encoding = "YRUHQSLDPXNGOKMIEBFZCWVJAT";
            break;
        case C :
            encoding = "FVPJIAOYEDRZXWGCTKUQSBNMHL";
            break;
        case ThinB :
            encoding = "ENKQAUYWJICOPBLMDXZVFTHRGS";
            break;
        case ThinC :
            encoding = "RDOBJNTKVEHMLFCWZAXGYIPSUQ";
            break;
        default :
            encoding = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            break;
    }

    return Reflector(encoding);

}

int Reflector::forward(const int& c) {
    return forward_wiring[c];
}
