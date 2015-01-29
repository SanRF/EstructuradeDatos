#include <iostream>
#include <ctime> // cambia los numeros random 
#include "busGene.h"
#include <cstdlib>
#include "libro.h"

template <typename T>
void imprimeArre(T [], int);

int main(int argc, const char * argv[]){
    
    const int longitud = 10;
    
    int enteros[longitud];
    
    for(int i = 0; i < longitud ; ++i){
        enteros[i] = rand() % 100;
    }
    
    imprimeArre<int>(enteros, longitud);
    
    std::cout << "Entra a buscar: ";
    
    int valor;
    
    std::cin >> valor;
    
    bool existe = BusquedaGenerica<int>::busquedaSecuencial(enteros, valor, longitud);
    
    if(existe){
        std::cout << "El valor si existe en el arreglo." << std::endl;
    }
    else{
        std::cout << "El valor no existe en el arreglo." << std::endl;
    }
    
    /* Buscar en un arreglo de numeros flotantes*/
    
    float flotantes[longitud];
    
    for(int i = 0; i < longitud ; ++i){
        enteros[i] = (rand() % 100) * 0.5;
    }
    
    imprimeArre<float>(flotantes, longitud);
    
    std::cout << "Entra a buscar: ";
    
    int valor;
    
    std::cin >> valor;
    
    bool existe = BusquedaGenerica<float>::busquedaSecuencial(flotantes, valor, longitud);
    
    if(existe){
        std::cout << "El valor si existe en el arreglo." << std::endl;
    }
    else{
        std::cout << "El valor no existe en el arreglo." << std::endl;
    }
    
    /* Buscar libro */
    
    const int nlibros = 3;
    libro biblioteca[nlibros];
    
    biblioteca[0] = Libro();
    biblioteca[1] = Libro("Cien anios de soledad" , 1968, "1234");
    biblioteca[2] = Libro("Lala" , 1968, "6789");
    
    imprimeArre<Libro>(biblioteca, nlibros);
    
    std::cout << "Entra a buscar el ISBN: ";
    
    std::string isbn;
    
    std::cin >> isbn;
    
    existe = BusquedaGenerica<Libro>::busquedaBinaria(biblioteca,Libro("No importa", 0, isbn), 0, nlibros);
    
    if(existe){
        std::cout << "El valor si existe en el arreglo." << std::endl;
    }
    else{
        std::cout << "El valor no existe en el arreglo." << std::endl;
    }
    
    
    
    return 0;
}

template <typename T>
void imprimeArre(T v[], int longitud){
    for (int i = 0; i < longitud ; ++i){
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl;
}