#pragma once

#include <String>

class Criptograma {

    String mensaje;


    public:

    Criptograma(            );
    Criptograma( std::String msg );

    char mover_char( char c, int offset );

    void cesar( int offset );
    void vigenere( );

    void set_message( std::String msg );
    String get_message(          );
}
