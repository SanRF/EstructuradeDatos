#include <iostream>
using namespace std;

int sumar_dig(int);

int main(int argc, const char*argv[]){
    int n;
    
    cout << "Dime tu numero: " << endl;
    cin >> n;
    
    sumar_dig(n);
    
    cout << "La suma de los valores de tu numero es: " <<  sumar_dig(n) << endl;
}

int sumar_dig (int n) {  
if (n == 0) {      //caso base  
return n;  
}  
else {  
return sumar_dig (n / 10) + (n % 10);  
}  
}