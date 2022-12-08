#include <bits/stdc++.h>

struct food {
    std::string type;
    std::string name;
    std::string nationality;
    int daysLastEaten;
} foodStruct;

int main(){
    foodStruct.type = "Main dish";
    foodStruct.name = "Spaghetti";
    foodStruct.nationality = "Italy";
    foodStruct.daysLastEaten = 0;
    std::cout << foodStruct.type << '\n';
    std::cout << foodStruct.name << '\n';
    std::cout << foodStruct.nationality << '\n';
    std::cout << foodStruct.daysLastEaten;
}