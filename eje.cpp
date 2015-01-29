#include <iostream>

int euc(int,int);

int main(int argc, const char * argv[]){
    int m , n;
    
    std::cout << "Dime tu primer numero" << std::endl;
    std::cin >> m;
    
    std::cout << "Dime tu segundo numero" << std::endl;
    std::cin >> n;
    
    euc(m,n);
    std::cout << euc(m,n);
    
    return 0;
}

int euc(int m, int n){
    int r = m % n;
    if (r == 0)
    return r;
    else
    return euc(n,r);
}