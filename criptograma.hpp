#pragma once

#include <String>

class Criptograma {

    String mensaje;


    public:

    Criptograma(            );
    Criptograma( String msg );

    char mover_char( char c, int offset );

    void cesar( int offset );
    void vigenere( );

    void set_message( String msg );
    String get_message(          );
}
