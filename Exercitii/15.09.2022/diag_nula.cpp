#include <bits/stdc++.h>

int main(){
  int n;
  std::cin >> n;
  int k = n;
  int matrice[n][n];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(j < k)
        matrice[i][j] = j;
      else if(j > k){
        matrice[i][j] = n - (i - 1);
      }
      else{
        matrice[i][j] = 0;
        k--;
      }
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
