#include <criptograma.hpp>

Criptograma::Criptograma(  ){
    mensaje = "";
}

Criptograma::Criptograma( String msg ){
    mensaje = msg;
}

char Criptograma::mover_char( char c, int offset ){
    c -= 97; 
    c += offset;
    c = c % 26;
    c += 97;
    return c;
}
