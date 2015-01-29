#include <iostream>
#include <string>

class Libro{
    private:
    std::string titulo;
    int anio_pub;
    std::string isbn;
    
    public:
    libro();
    libro(std::string, int, std::string);
    
    bool operator==(Libro &); //se recibe una clase
    bool operator<(Libro &); //se recibe una clase
    friend ostream & operator <<(std::ostream &, Libro &);
    
};