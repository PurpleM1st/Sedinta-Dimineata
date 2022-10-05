#include <bits/stdc++.h>
std::ifstream f("bac.in");
int main(){
  int x, y, numsprev, nums, k = 0;
  f >> x >> y;
  f >> numsprev;
  while(f >> nums && numsprev <= y){
    if(numsprev != nums && numsprev >= x){
      k++;
    }
    numsprev = nums;
  }
  if(numsprev >= x && numsprev <= y){
    k++;
  }
  std::cout << k;
}
