#include <iostream>
#include <cstdlib>

#define n 3
#define m 3

int busLineal(int v[n][m], int , int, int);

int main(){
    int fil;
    int col;
    int val;

    std::cout << "Dime el numero de filas de tu matriz: " << std::endl;
    std::cin >> fil;
    std::cout << "Dime el numero de columnas de tu matriz: " << std::endl;
    std::cin >> col;

    int matriz[fil][col];

    for(int i = 0; i < fil; i++){
        for(int a = 0; a < col; a++){
            matriz[i][a]= rand() % 10;
        }
    }

    for(int i = 0; i < fil; i++){
        for(int a = 0; a < col; a++){
            std::cout << matriz[i][a] << ", ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "Dime el valor que estas buscando: " << std::endl;
    std::cin >> val;
    bool ya = busLineal(matriz,fil,col,val);
    if (ya){
        std::cout << "El valor si existe en la matriz"<< std::endl;
    }
    
    return 0;
}

int busLineal(int v[n][m], int fil, int col,int val){
    
    if(v[fil][col] == val){
        return true;
    }
}