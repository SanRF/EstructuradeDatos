#include <iostream>

int suma_vec(int[],int);

int main(int argc, const char * argv[]){
    int n;

    std::cout << "Dime el tamano de tu arreglo"<<std::endl;
    std::cin >> n;

    int v[n];
    for(int i=0; i < n; i++){
        v[i]= 1;
    }
    
    suma_vec(v,n);
    
    std::cout << "La suma del vector es: " << suma_vec(v,n)<<std::endl;
    return 0;
}


int suma_vec(int v [], int n) {  
if (n == 0) {  
return v [n];  
}  
else {  
return suma_vec(v, n - 1) + v [n];  
}  
}   