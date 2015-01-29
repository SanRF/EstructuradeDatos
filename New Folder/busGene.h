#include <iostream>

template <typename T>
class BusquedaGenerica{
    public:
        static bool busquedaSecuencial(T [],T,int); // 3 int es la longitud del arreglo
        static bool busquedaBinaria(T [], T, int, int);

        static int busquedaSecuencialP(T [], T,int);
    
};

template <typename T>
bool BusquedaGenerica<T>::busquedaSecuencial(T v[],T bus_valor,int longitud)
{
    bool existe = false;
    int index = 0;
    
    if(longitud <= 0) return false;
    
    while(!existe && index < longitud){
        if(v[index++]==bus_valor){
            existe = true;
        }
    }
    
    return existe;
} // 3 int es la longitud del arreglo

template<typename T>
bool BusquedaGenerica<T>::busquedaBinaria(T v[], T valor, int inferior, int superior){
    if (inferior>=superior){
        return false;
    }
    else {
        int mitad = (inferior + superior) / 2;
        
        if (v[mita] == valor){
            return true;
        }
        else if(valor < v[mitad]){
            return busquedaBinaria(v, valor, inferior, mitad);
        }
        else{
            returnbusquedaBinaria(v, valor, mitad + 1, superior);
        }
    }
}

template <typename T>
int BusquedaGenerica<T>::busquedaSecuencialP(T v[],T bus_valor,int longitud)
{
    int existe = -1;
    int index = 0;
    
    if(longitud <= 0) return -1;
    
    while(existe == -1 && index < longitud){
        if(v[index]==bus_valor){
            existe = index;
        }
        ++index;
    }
    
    return index-1;
} // 3 int es la longitud del arreglo