#include <criptograma.hpp>

Criptograma::Criptograma(  ){
    mensaje = "";
}

Criptograma::Criptograma( std::String msg ){
    mensaje = msg;
}

char Criptograma::mover_char( char c, int offset ){
    c -= 97; 
    c += offset;
    c = c % 26;
    c += 97;
    return c;
}

void cesar( int offset ){

    for( int i = 0; i < mensaje.size( ); i++ ){
        mensaje[i] = mover_char( mensaje[i], offset )
    }

}
