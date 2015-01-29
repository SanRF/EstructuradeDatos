#include <iostream>
#include "libro.h"


Libro::Libro() : Libro("Sin titulo", 0 , "---");
Libro::Libro(std::string t, int ap, std::stringi) : titulo(t), anio_pub(ap), isbn(i){
    
}

bool Libro::operator==(Libro & libro){
    return isbn == libro.isbn;
}

bool Libro::operator<(Libro & libro){
    return isbn < libro.isbn;
}

std::ostream & operator <<(std::ostream & os, Libro & libro){
    os << libro.titulo << std::endl;
    
    return os;
}