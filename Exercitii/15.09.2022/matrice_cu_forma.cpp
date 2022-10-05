#include <bits/stdc++.h>

int main(){
  int n, i, j;
  std::cin >> n;
  int matrice[n][n];
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j <= i)
        matrice[i][j] = i;
      else
        matrice[i][j] = j;
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
