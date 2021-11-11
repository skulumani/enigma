#ifndef REFLECTOR_H
#define REFLECTOR_H

#include <string> 
#include <vector>

enum ReflectorType {
    B = 1,
    C = 2,
    ThinB = 3,
    ThinC = 4,
    Default = 5
};

class Reflector {
    public:
        Reflector( void ) {}
        virtual ~Reflector( void ) {}
    
        // constructor with user defined encoding - 26 letter string
        Reflector(const std::string& encoding);

        // Some predefined reflectors (B, C, thin B, thin C)
        static Reflector create(const ReflectorType& type);
        
        // forward path through reflector
        int forward(const int& c);

        static std::vector<int> decode_wiring(const std::string& encoding);

        // wiring array
        std::vector<int> forward_wiring;
};

#endif
