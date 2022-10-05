#include <bits/stdc++.h>

int diviz(int num){
  int sum = 0;
  int d;
  for(d = 1; d * d < num; d++){
    if(num % d == 0){
      if(d % 2 == 0)
        sum++;
      if(num / d % 2 == 0)
        sum++;
    }
  }
  if((d * d == num) && (d % 2 == 0))
    sum++;
  return sum;
}

int main(){
  int limitsmol, limitbig, div;
  int maxdiv = -1, nrmax = 0, min = 0, max = 0;
  std::cin >> limitsmol >> limitbig;
  for(int i = limitsmol; i <= limitbig; i++){
    div = diviz(i);
    if(div == maxdiv){
      nrmax++;
      max = i;
    }
    else if(div > maxdiv){
      maxdiv = div;
      nrmax = 1;
      min = i;
      max = i;
    }
  }
  std::cout << maxdiv << " " << min << " " << max;
}
