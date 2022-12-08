#include<bits/stdc++.h>
std::ifstream f("serbare1.in");
std::ofstream g("serbare1.out");
struct elev{
    char num[51];
    int h;
} v[101],aux;
int n, i, j, fr[151],nr,k;
char sir[61];
int main(){
    f >> n;
    f.get();
    for(i= 1; i <= n; i++){
        f.getline(sir, 60);
        for(j = strlen(sir) - 1; j >= 0; j--)
            if(sir[j] == ' ')break;
        strncat(v[i].num, sir ,j);
        v[i].h = 0;
        for(k = j+1; k < strlen(sir); k++)
            v[i].h = v[i].h * 10+ (sir[k]-'0');
        fr[v[i].h]++;
    }
    for(i = 1; i < n; i++)
        for(j = i+1; j <= n; j++)
            if(v[i].h < v[j].h){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            else if(v[i].h == v[j].h)
                if(strcmp(v[i].num, v[j].num) > 0){
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
    nr = 0;
    for(i = 1; i <= 150; i++)
        if(fr[i])nr++;
    g << nr <<'\n';
    k=1;
    for(i = 150;i >= 1; i--)
        if(fr[i]){
            g << fr[i] << ' ';
            for(j = 1;j <= fr[i]; j++){
               g << v[k].num << ' ';
               k++;
            }
            g <<'\n';
      }
    return 0;
}