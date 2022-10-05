#include <bits/stdc++.h>
int main(){
  long long int num, sum = 0;
  std::cin >> num;
  int d;
  for(d = 1; d * d < num; d++){
    if(num % d == 0){
      if(d % 2 == 0)
        sum += d;
      if((num / d) % 2 == 0)
        sum = sum + num / d;
    }
  }
  if((d * d == num) && (d % 2 == 0))
    sum += d;
  std::cout << sum;
}
