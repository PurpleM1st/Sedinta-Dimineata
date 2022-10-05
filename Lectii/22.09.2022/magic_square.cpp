#include <bits/stdc++.h>

void generate(int n){
  int matrice[n][n] = {};
  int i = n / 2;
  int j = n - 1;
  for(int x = 1; x <= n * n;){
    if(i == -1 && j == n){
      j = n - 2;
      i = 0;
    }
    else{
      if(j == n)
        j = 0;
      if(i < 0)
        i = n - 1;
    }
    if(matrice[i][j] != 0){
      j = j - 2;
      i++;
      continue;
    }
    else{
      matrice[i][j] = x++;
    }
    j++;
    i--;
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      std::cout << matrice[i][j] << " ";
    }
    std::cout << '\n';
  }
}

int main(){
  int n;
  std::cin >> n;
  generate(n);
}
