#include <bits/stdc++.h>
int main(){
  char linie[] = "1 2 3 123 678 10678", *p;
  int nr;
  ///f.getline(linie, 1000);
  p = strtok(linie, " "); //identifica prima identitate si ia pana la " "
  while(p != NULL){
    std::cout << p << std::endl;
    nr = atoi(p);
    p = strtok(NULL, " ");
  }
}
