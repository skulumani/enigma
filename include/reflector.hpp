#ifndef REFLECTOR_H
#define REFLECTOR_H

#include <string> 
#include <vector>

class Reflector {
    public:
        Reflector( void ) {}
        virtual ~Reflector( void ) {}
    
        // constructor with user defined encoding - 26 letter string
        Reflector(const std::string& encoding);

        // Some predefined reflectors
        static Reflector create(const std::string& name);
        
        // forward path through reflector
        int forward(const int& c);

        static std::vector<int> decode_wiring(const std::string& encoding);

        // wiring array
        std::vector<int> forward_wiring;
};

#endif
