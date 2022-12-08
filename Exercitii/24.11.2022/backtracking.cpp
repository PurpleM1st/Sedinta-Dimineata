#include <bits/stdc++.h>

int x[30], num, k, vec[30], pairs;

void print(int k){
    for(int i = 1; i <= k; i++)
        std::cout << vec[x[i]] << " ";
    std::cout << '\n';
}

void backTrack(){
    k = 1, x[k] = 0;
    while(k){
        if (x[k] < num - pairs + k){
            x[k]++;
            if (k == pairs)
                print(k);
            else{
                k++;
                x[k] = x[k - 1];
            }
        }
        else
            k--;
    }
}

int main(){
    std::cin >> num >> pairs;
    for(int i = 1; i <= num; i++)
        std::cin >> vec[i];
    backTrack();
    return 0;
}