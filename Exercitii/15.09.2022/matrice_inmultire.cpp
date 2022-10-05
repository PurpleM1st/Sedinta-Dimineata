#include <bits/stdc++.h>

int main(){
  int n, k = 1;
  std::cin >> n;
  int matrice[n][n];
  for(int i = n; i >= 1; i--){
    for(int j = 1; j <= n; j++){
      if(i >= j)
        matrice[i][j] = k * j;
      else
        matrice[i][j] = 0;
    }
    k *= 3;
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
