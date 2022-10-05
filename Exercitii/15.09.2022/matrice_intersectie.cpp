#include <bits/stdc++.h>

int main(){
  int n, a, b;
  std::cin >> n >> a >> b;
  int matrice[n][n];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(j == b)
        matrice[i][j] = 0;
      else if(j < b && i < a)
        matrice[i][j] = 1;
      else if(j > b && i < a)
        matrice[i][j] = 2;
      else if(i == a)
        matrice[i][j] = 0;
      else if(j < b && i > a)
        matrice[i][j] = 3;
      else if(j > b && i > a)
        matrice[i][j] = 4;
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
