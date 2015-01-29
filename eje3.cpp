#include <iostream>

int suma(int fila, int col, int m[3][3]);
int main(int argc, const char*argv[]){
  int s = 3;
  int r = 3;


  int mat[s][r];
  
  for(int i = 0; i < s; i++){
    for(int a = 0; a < r; a++){
      mat[i][a] = 1;
    }
  }
  
  for(int i = 0; i < s; i++){
   for(int a = 0; a < r; a++){
    std::cout << mat[i][a] << ", ";
  }
  
  std::cout << std::endl;
  }

  //suma(fila,col,orden,mat);
  
  std::cout <<"La suma de tu matriz es: " << suma(s-1,r-1,mat) << std::endl;
  std::cout << mat[s][r] << std::endl;
  return 0;
}

int suma (int fila, int col, int m[3][3]){  
  int s = 3;
  int r = 3;

  if (fila == 0 && col == 0){  
    return m[fila][col];
  }
  else if(fila == 0){
    return m[fila][col] + suma(fila, col - 1, m);
  }
  else
    return m[fila][col] + suma(fila-1,3-1,m);
}