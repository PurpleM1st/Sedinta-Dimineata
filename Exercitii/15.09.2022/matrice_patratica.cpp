#include <bits/stdc++.h>

int main(){
  int n;
  std::cin >> n;
  int matrice[n][n];
  for(int i = 1; i <= n; i++){
    matrice[i][i] = i;
  }
  for(int i = 2; i <= n; i++){
    for(int j = 1; j < i; j++){
      matrice[i][j] = i + j;
      matrice[j][i] = matrice[i][j];
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
