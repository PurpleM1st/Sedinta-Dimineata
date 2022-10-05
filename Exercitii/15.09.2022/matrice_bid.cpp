#include <bits/stdc++.h>

int main(){
  int n, m, k = 0;
  std::cin >> n >> m;
  int matrice[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 1; j <= m; j++){
      matrice[i][j - 1] = (n * j) - k;
    }
    k++;
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
