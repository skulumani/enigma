#include "reflector.hpp"

Reflector::Reflector(const std::string& encoding) {
    this->forward_wiring = Reflector::decode_wiring(encoding);
}

std::vector<int> Reflector::decode_wiring(const std::string& encoding) {
    std::vector<int> wiring;

    wiring.push_back(1);
    wiring.push_back(20);

    return wiring;
}