#include <bits/stdc++.h>
std::ifstream f("balcon_feng_shui.in");
void fengShui(int n){
  int matrice[50][50], nr, k = 0, ok = 0;
  std::vector<int> vec;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      f >> nr;
      vec.push_back(nr);
    }
  }
  std::sort(vec.begin(), vec.end());
  int diagonala = 1;
  do{
    for(int i = diagonala; i <= n - diagonala + 1; i++){
      matrice[diagonala][i] = vec[k++];
    }
    for(int i = diagonala + 1; i <= n - diagonala + 1; i++){
      matrice[i][n - diagonala + 1] = vec[k++];
    }
    for(int i = n - diagonala; i >= diagonala; i--){
      matrice[n - diagonala + 1][i] = vec[k++];
    }
    for(int i = n - diagonala; i > diagonala; i--){
      matrice[i][diagonala] = vec[k++];
    }
    diagonala++;
  } while(diagonala <= n / 2);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << std::setw(4) << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}

int main(){
  int n;
  f >> n;
  fengShui(n);
}
