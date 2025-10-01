#include <iostream>
#include "game.h"
using namespace std;


Pokemon::Pokemon(string n){
    pokemon_name = n;
}

Pokemon::~Pokemon(){
    
}

int Pokemon::getHealth(){
    return health;
}

void Pokemon::damage(int x){
    health -= x;
}

void Pokemon::healed(int x){
    health += x;
}

string Pokemon::getName(){
    return pokemon_name;
}


Pikachu::Pikachu() : Pokemon("Pikachu"){
 
}
string Pikachu::a1(){
    return "Quick Attack";
}
string Pikachu::a2(){
    return "Thunderbolt";
}
string Pikachu::a3(){
    return "Thunder";
}
string Pikachu::h1(){
    return "Snack Berry";
}
string Pikachu::h2(){
    return "Full Recharge";
}


Charmander::Charmander() : Pokemon("Charmander"){

}
string Charmander::a1(){
    return "Ember";
}
string Charmander::a2(){
    return "Flame Burst";
}
string Charmander::a3(){
    return "Flamethrower";
}
string Charmander::h1(){
    return "Warm Sunlight";
}
string Charmander::h2(){
    return "Blaze Rekindle";
}


Squirtle::Squirtle() : Pokemon("Squirtle"){

}
string Squirtle::a1(){
    return "Bubble";
}
string Squirtle::a2(){
    return "Water Pulse";
}
string Squirtle::a3(){
    return "Hydro pump";
}
string Squirtle::h1(){
    return "Splash Drink";
}
string Squirtle::h2(){
    return "Aqua Restore";
}


Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur"){
   
}
string Bulbasaur::a1(){
    return "Vine Whip";
}
string Bulbasaur::a2(){
    return "Razor Leaf";
}
string Bulbasaur::a3(){
    return "Solar Beam";
}
string Bulbasaur::h1(){
    return "Sap Sip";
}
string Bulbasaur::h2(){
    return "Photosynthesis";
}


Jigglypuff::Jigglypuff() : Pokemon("Jigglypuff"){

}

string Jigglypuff::a1(){
    return "Pound";
}
string Jigglypuff::a2(){
    return "Double Slap";
}
string Jigglypuff::a3(){
    return "Hyper Voice";
}
string Jigglypuff::h1(){
    return "Lullaby Rest";
}
string Jigglypuff::h2(){
    return "Encore Recovery";
}

