#include <bits/stdc++.h>
std::ifstream f("date.in");
int main(){
    std::vector<std::string> words;
    std::string word;
    while(f >> word)
        words.push_back(word);
    std::sort(words.begin(), words.end());
    for(int i = 0; i < words.size(); i++){
        std::cout << words[i] << ' ';
    }
}