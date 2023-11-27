#pragma once

#include <String>

class Criptograma {

    String mensaje;


    public:

    Criptograma(            );
    Criptograma( String msg );

    void cesar(    );
    void vigenere( );

    void set_message( String msg );
    String get_message(          );
}
