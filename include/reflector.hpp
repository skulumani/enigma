#ifndef REFLECTOR_H
#define REFLECTOR_H

#include <string> 


class Reflector {
    public:
        Reflector( void ) {}
        virtual ~Reflector( void ) {}
    
        // constructor with user defined encoding
        Reflector(const std::string& encoding);

        // Some predefined reflectors
        static Reflector create(const std::string& name);
        
        // forward path through reflector
        int forward(const int& c);

    private:
        static void decode_wiring(const std::string& encoding);

        // wiring array
        int forward_wiring [26];
};

#endif
