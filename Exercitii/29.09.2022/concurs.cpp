#include <bits/stdc++.h>
std::ifstream f("PREFER.in");
int main(){
  int n, k = 0, nr;
  f >> n;
  char line[1000], *p;
  int elevi[1000][1000] = {0};
  int calc[1000][1000] = {0};
  f.getline(line, 1000);
  for(int i = 0; i < n; i++){
    f.getline(line, 1000);
    p = strtok(line, "\n");
    while(p != NULL){
      nr = atoi(p);
      elevi[i][nr] = 1;
      std::cout << elevi[i][k++] << std::endl;
      p = strtok(NULL, "\n");
    }
    k = 0;
  }
  for(int i = 0; i < n; i++){
    f.getline(line, 1000);
    p = strtok(line, "\n");
    while(p != NULL){
      nr = atoi(p);
      calc[i][nr] = 1;
      std::cout << calc[i][k++] << std::endl;
      p = strtok(NULL, "\n");
    }
    k = 0;
  }

}
