#include <iostream>

int invertir(int,int);

int main(int argc, const char*argv[]){
 int n;
 
 std::cout<<"Dime un numero"<< std::endl;
 std::cin>>n;
 
 invertir(n,0);
 
 std::cout<<invertir(n,0)<< std::endl;
}


int invertir (int n, int p) {  

  int mov = n % 10;
  n = n/10;
  
  if(n == 0){
   return mov + p;
  }
  else {
   return invertir(n,(mov + p)*10);
  }
}  