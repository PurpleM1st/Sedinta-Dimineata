#include <bits/stdc++.h>

int Fibonacci(int a){
  int t1, t2, urm = 0;
  t1 = 1; t2 = 1;
  for(int i = 3; i <= a; i++){
    urm = t1 + t2;
    t1 = t2;
    t2 = urm;
  }
  urm = t1 + t2;
  return urm;
}

int main(){
  int n, act = 1;
  std::cin >> n;
  int matrice[n][n];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      matrice[i][j] = act;
      act = Fibonacci(act);
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      std::cout << matrice[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
