#ifndef GAME_H
#define GAME_H

// #include "trainers.h"
#include <string>

class Pokemon {
public:
    Pokemon(std::string n);
    virtual ~Pokemon();

    virtual std::string a1() = 0;
    virtual std::string a2() = 0;
    virtual std::string a3() = 0;
    virtual std::string h1() = 0;
    virtual std::string h2() = 0;

    int getHealth();
    void damage(int x);
    void healed(int x);

    std::string getName();

protected:
    std::string pokemon_name;

    // string attacks[3];
    // int attack_#[3] = {10, 25, 40};

    // string heals[2];
    // int heal_#[2] = {15, 40};

    int health = 100;
};


class Pikachu : public Pokemon {
public:
    Pikachu();
    static void intro_ascii();
    static void draw_Pikachu(); // draw Pikachu
    static void draw_Pikachu_attacking();
    static void pokeball();
    std::string a1();
    std::string a2();
    std::string a3();
    std::string h1();
    std::string h2();
};


class Charmander : public Pokemon {
public:
    Charmander();
    static void draw_Charmander(); // draw Charmander
    static void draw_Charmander_attacking();
    std::string a1();
    std::string a2();
    std::string a3();
    std::string h1();
    std::string h2();
};


class Squirtle : public Pokemon {
public:
    Squirtle(); 
    static void draw_Squirtle(); // draw Squirtle
    static void draw_Squirtle_attacking();
    std::string a1();
    std::string a2();
    std::string a3();
    std::string h1();
    std::string h2();
};

class Bulbasaur : public Pokemon {
public:
    Bulbasaur();
    static void draw_Bulbasaur(); // draw Bulbasaur
    static void draw_Bulbasaur_attacking();
    std::string a1();
    std::string a2();
    std::string a3();
    std::string h1();
    std::string h2();
};

class Jigglypuff : public Pokemon {
public:
    Jigglypuff();
    static void draw_Jigglypuff(); // draw Jigglypuff
    static void draw_Jigglypuff_attacking();
    std::string a1();
    std::string a2();
    std::string a3();
    std::string h1();
    std::string h2();
};

// class Ghastly : public Pokemon {
// public:
//     static void ghastly(); // draw Ghastly
// };

// class Meowth : public Pokemon {
// public:
//     static void meowth(); // draw Meowth
// };

// class Snorlax : public Pokemon {
// public:
//     static void snorlax(); // draw Snorlax
// };
#endif
