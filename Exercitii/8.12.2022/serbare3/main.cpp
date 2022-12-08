#include <bits/stdc++.h>
std::ifstream f("serbare.in");
std::ofstream g("serbare.out");

int main(){
    int cerinta;
    f >> cerinta;
    switch(cerinta){
        case 1:{
            int n, apar[151] = {0}, max = -1;
            std::string reading;
            int numRead;
            f >> n;
            for(int i = 0; i < n; i++){
                f >> reading >> numRead;
                apar[numRead]++;
            }
            for(int i = 0; i < 151; i++){
                if(apar[i] > max)
                    max = apar[i];
            }   
            g << max;
            break;
        }
        case 2:{
            int n;
            std::string reading;
            int numRead[100];
            f >> n;
            for(int i = 0; i < n; i++){
                f >> reading >> numRead[i];
            }
            std::sort(numRead, numRead + n);
            for(int i = 0; i < n / 2 + n % 2; i++){
                g << numRead[i] << ' ';
            }
            for(int i = n - 1; i >= n / 2 + n % 2; i--){
                g << numRead[i] << ' ';
            }
            break;
        }
        case 3:{
            int n;
            std::string reading;
            std::vector<std::string> nameStock(151);
            int numRead[100];
            f >> n;
            for(int i = 0; i < n; i++){
                f >> reading >> numRead[i];
                if(nameStock[numRead[i]].empty() != true){
                    if(nameStock[numRead[i]] > reading)
                        numRead[i]--;
                    else
                        numRead[i]++;
                    nameStock[numRead[i]] = reading;
                }
                nameStock[numRead[i]] = reading;
            }
            std::sort(numRead, numRead + n);
            for(int i = 0; i < n / 2 + n % 2; i++){
                g << nameStock[numRead[i]] << ' ';
            }
            for(int i = n - 1; i >= n / 2 + n % 2; i--){
                g << nameStock[numRead[i]] << ' ';
            }
            break;
        }
    }
}