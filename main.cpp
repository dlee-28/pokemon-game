#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
// #include "trainer.h"

#include "game.h"
using namespace std;

int main() {
    // Pikachu::pikachu();
    // Jigglypuff::jigglypuff();
    // Charmander::charmander();
    // Squirtle::squirtle();
    // Bulbasaur::bulbasaur();

    Pikachu p;
    Charmander c;
    Squirtle s;
    Bulbasaur b;
    Jigglypuff j;

    vector<Pokemon*> pokemons;
    pokemons.push_back(&p);
    pokemons.push_back(&c);
    pokemons.push_back(&s);
    pokemons.push_back(&b);
    pokemons.push_back(&j);

    int damage_dealt = 0;
    int healed_amount = 0;
    srand(time(0));
    Pikachu::intro_ascii();
    cout << "Are you ready?" << endl;
    cout << "Type 'Ready' to ACCEPT BATTLE" << endl;
    string ready; 
    cin >> ready;
    string trainername1, trainername2;
    cout << endl;
    Pikachu::pokeball();
    cout << "What is your name trainer 1?" << endl;
    cin >> trainername1;
    cout << endl;
    cout << "Welcome trainer " << trainername1 << "!" << endl;
    cout << endl;
    cout << "What is your name trainer 2?" << endl;
    cin >> trainername2;
    cout << endl;
    cout << "Welcome trainer " << trainername2 << "!" << endl;
    cout << endl;

    // Trainers trainer1(trainername1);
    // Trainers trainer2(trainername2);




    cout << "Your Pokemons are being randomly assigned to you!" << endl;
    cout << endl;

    int random1 = rand() % 5;
    int random2 = rand() % 5;
    while(random1 == random2){
        random2 = rand()% 5;
    }

    // trainer1.assignPokemon(pokemons[random1]); //access vector and add pokemon to vector 
    // trainer2.assignPokemon(pokemons[random2]);

    cout << "Trainer " << trainername1 << ", you have been assigned " << pokemons[random1]->getName() << endl;
    if(random1 == 0){
        Pikachu::draw_Pikachu();
    }else if(random1 == 1){
        Charmander::draw_Charmander();
    }else if(random1 == 2){
        Squirtle::draw_Squirtle();
    }else if(random1 == 3){
        Bulbasaur::draw_Bulbasaur();
    }else if(random1 == 4){
        Jigglypuff::draw_Jigglypuff();
    }
    cout << "Trainer " << trainername2 << ", you have been assigned " << pokemons[random2]->getName() << endl;
    if(random2 == 0){
        Pikachu::draw_Pikachu();
    }else if(random2 == 1){
        Charmander::draw_Charmander();
    }else if(random2 == 2){
        Squirtle::draw_Squirtle();
    }else if(random2 == 3){
        Bulbasaur::draw_Bulbasaur();
    }else if(random2 == 4){
        Jigglypuff::draw_Jigglypuff();
    }
    //above is the assigned stuff
    //below is the attacks
while(pokemons[random1]->getHealth() > 0){
    cout << endl;
    cout << trainername1 << ", choose your attack (1) / heal (2)!" << endl;
    
    // int damage_dealt = 0;
    // int healed_amount = 0;
    
    int choice;
    cin >>choice;
    if(choice == 1){
        int attack;
        cout << "Choose 1 of these 3 attacks" << endl;
      cout << "===========================================================" << endl;
        cout << "(1) " << pokemons[random1]->a1() << " has a 100% chance of working!" << endl;
        cout << "(2) " << pokemons[random1]->a2() << " has a 50% chance of working!" << endl;
        cout << "(3) " << pokemons[random1]->a3() << " has a 25% chance of working!" << endl;
      cout << "===========================================================" << endl;
   
    cin >> attack;
    if(attack == 1){
         cout << trainername1 << " chooses " << pokemons[random1]->a1() << "!" << endl;
         damage_dealt = 10;
         cout << "===========================================================" << endl;

         
    }else if(attack == 2){
        if(rand() % 2 == 1){ //attack works
            damage_dealt = 25;
           cout << trainername1 << " chooses " << pokemons[random1]->a2() << "!" << endl;
           cout << "===========================================================" << endl; 
        }else{
            damage_dealt = 0;
            cout << "Unlucky! " << pokemons[random1]->getName() << " forgot how to attack!" << endl; //n1 is base class function that calls up objects name
            cout << "===========================================================" << endl;
        }
        
        
    }else if(attack == 3){
        if(1 + rand() % 4 == 1){
            damage_dealt = 40;
            cout << trainername1 << " chooses " << pokemons[random1]->a3() << "!" << endl;
            cout << "===========================================================" << endl;
        }else{
            damage_dealt = 0;
            cout << pokemons[random1]->getName() << " didn't feel like attacking!" << endl;
            cout << "===========================================================" << endl;
        }

    }

    }else if(choice == 2){
        int heal;
        cout << "Choose 1 of these 2 heals" << endl;
   cout << "===========================================================" << endl;
        cout << "(1) " << pokemons[random1]->h1() << " has a 65% chance of working!" << endl;
        cout << "(2) " << pokemons[random1]->h2() << " has a 25% chance of working!" << endl;
        cout << "===========================================================" << endl;
        cin >> heal;
        if(heal == 1){
            if(rand() % 100 < 65){
                healed_amount = 15;
                cout << trainername1 << " chooses " << pokemons[random1]->h1() << "!" << endl;
                cout << "===========================================================" << endl;
            }
            else{
            healed_amount = 0;
            }
        }
        
        
        else if(heal == 2){
            if(1 + rand() % 4 == 1){
                healed_amount = 40;
                cout << trainername1 << " chooses " << pokemons[random1]->h2() << "!" << endl;
                cout << "===========================================================" << endl;
            }
            else{
                healed_amount = 0;
            cout << pokemons[random1]->getName() << " doesn't want to heal right now!" << endl;
            cout << "===========================================================" << endl;
            }
        }
    }

    if(choice == 1){
        cout << pokemons[random1]->getName() << " did " << damage_dealt << " damage!" << endl;
        pokemons[random2]->damage(damage_dealt); //minus 2nd pokemon
    }else if(choice == 2){
        cout << pokemons[random1]->getName() << " healed by " << healed_amount << "!" << endl;
        pokemons[random2]->healed(healed_amount); //add 1st pokemon
    }
    
    if(random1 == 0){
        Pikachu::draw_Pikachu_attacking();
    }else if(random1 == 1){
        Charmander::draw_Charmander_attacking();
    }else if(random1 == 2){
        Squirtle::draw_Squirtle_attacking();
    }else if(random1 == 3){
        Bulbasaur::draw_Bulbasaur_attacking();
    }else if(random1 == 4){
        Jigglypuff::draw_Jigglypuff_attacking();
    }

if(pokemons[random1]->getHealth() >= 0){
    cout << pokemons[random1]->getName() << "'s current health: " << pokemons[random1]->getHealth() << endl;
}else{
    cout << pokemons[random1]->getName() << "'s current health: 0" << endl;
}

    if(random2 == 0){
        Pikachu::draw_Pikachu();
    }else if(random2 == 1){
        Charmander::draw_Charmander();
    }else if(random2 == 2){
        Squirtle::draw_Squirtle();
    }else if(random2 == 3){
        Bulbasaur::draw_Bulbasaur();
    }else if(random2 == 4){
        Jigglypuff::draw_Jigglypuff();
    }

  if(pokemons[random2]->getHealth() >= 0){
    cout << pokemons[random2]->getName() << "'s current health: " << pokemons[random2]->getHealth() << endl;
}else{
    cout << pokemons[random2]->getName() << "'s current health: 0" << endl;
}
            cout << "===========================================================" << endl;
    
    
    
    
    







    /////////////////////////////////////////////////////////////////////////////////////////////
    
    
    
    if(pokemons[random2]->getHealth() <= 0){//WILL BREAK OUT OF IT IF POKEMON 1 KILLS POKEMON 2 ALREADY
        break;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////










    
    cout << trainername2 << ", choose your attack (1) / heal (2)!" << endl;
    cin >> choice;
    if(choice == 1){
        int attack;
        cout << "Choose 1 of these 3 attacks" << endl;
        cout << "===========================================================" << endl;
        cout << "(1) " << pokemons[random2]->a1() << " has a 100% chance of working!" << endl;
        cout << "(2) " << pokemons[random2]->a2() << " has a 50% chance of working!" << endl;
        cout << "(3) " << pokemons[random2]->a3() << " has a 25% chance of working!" << endl;
        cout << "===========================================================" << endl;
    
    cin >> attack;
    if(attack == 1){
         cout << trainername2 << " chooses " << pokemons[random2]->a1() << "!" << endl;
         damage_dealt = 10;
            cout << "===========================================================" << endl;

         
    }else if(attack == 2){
        if(rand() % 2 == 1){ //attack works
            damage_dealt = 25;
           cout << trainername2 << " chooses " << pokemons[random2]->a2() << "!" << endl; 
            cout << "===========================================================" << endl;
        }else{
            damage_dealt = 0;
            cout << "Oops! " << pokemons[random2]->getName() << " says his stomach hurts so he didn't attack!" << endl; //n1 is base class function that calls up objects name
            cout << "===========================================================" << endl;
        }
        
        
    }else if(attack == 3){
        if(1 + rand() % 4 == 1){
            damage_dealt = 40;
            cout << trainername2 << " chooses " << pokemons[random2]->a3() << "!" << endl;
            cout << "===========================================================" << endl;
        }else{
            damage_dealt = 0;
            cout << pokemons[random2]->getName() << " is too sleepy to attack!" << endl;
            cout << "===========================================================" << endl;
        }

    }

    }else if(choice == 2){
        int heal;
        cout << "Choose 1 of these 2 heals" << endl;
        cout << "===========================================================" << endl;
        cout << "(1) " << pokemons[random2]->h1() << " has a 65% chance of working!" << endl;
        cout << "(2) " << pokemons[random2]->h2() << " has a 25% chance of working!" << endl;
        cout << "===========================================================" << endl;
        cin >> heal;
       
        if(heal == 1){
            if(rand() % 100 < 65){
                healed_amount = 15;
                cout << trainername2 << " chooses " << pokemons[random2]->h1() << "!" << endl;
            cout << "===========================================================" << endl;
            }
            else{
                healed_amount = 0;
            }
        }
        
        
        else if(heal == 2){
            if(1 + rand() % 4 == 1){
                healed_amount = 40;
                cout << trainername2 << " chooses " << pokemons[random2]->h2() << "!" << endl;
            cout << "===========================================================" << endl;
            }
            else{
            healed_amount = 0;
            cout << pokemons[random2]->getName() << " wants to fight sooooo bad so he doesn't want to heal right now" << endl;
            cout << "===========================================================" << endl;
            }
        }
    }

    if(choice == 1){
        cout << pokemons[random2]->getName() << " did " << damage_dealt << " damage!" << endl;
        pokemons[random1]->damage(damage_dealt); //minus 2nd pokemon
    }else if(choice == 2){
        cout << pokemons[random1]->getName() << " healed by " << healed_amount << "!" << endl;
        pokemons[random1]->healed(healed_amount); //add 1st pokemon
    }
    
            cout << "===========================================================" << endl;
    if(random1 == 0){
        Pikachu::draw_Pikachu();
    }else if(random1 == 1){
        Charmander::draw_Charmander();
    }else if(random1 == 2){
        Squirtle::draw_Squirtle();
    }else if(random1 == 3){
        Bulbasaur::draw_Bulbasaur();
    }else if(random1 == 4){
        Jigglypuff::draw_Jigglypuff();
    }

if(pokemons[random1]->getHealth() >= 0){
    cout << pokemons[random1]->getName() << "'s current health: " << pokemons[random1]->getHealth() << endl;
}else{
    cout << pokemons[random1]->getName() << "'s current health: 0" << endl;
}

    if(random2 == 0){
        Pikachu::draw_Pikachu_attacking();
    }else if(random2 == 1){
        Charmander::draw_Charmander_attacking();
    }else if(random2 == 2){
        Squirtle::draw_Squirtle_attacking();
    }else if(random2 == 3){
        Bulbasaur::draw_Bulbasaur_attacking();
    }else if(random2 == 4){
        Jigglypuff::draw_Jigglypuff_attacking();
    }
if(pokemons[random2]->getHealth() >= 0){
    cout << pokemons[random2]->getName() << "'s current health: " << pokemons[random2]->getHealth() << endl;
}else{
    cout << pokemons[random2]->getName() << "'s current health: 0" << endl;
}


            cout << "===========================================================" << endl;



    
}



//final result
if(pokemons[random1]->getHealth() > pokemons[random2]->getHealth()){
    cout << "Congratulations trainer " << trainername1 << ". You have defeated " << trainername2 << "!" << endl;
    cout << endl;
    cout << "Goodbye trainer " << trainername2 << "!" << " You are not worthy yet!" << endl;
}else{
    cout << "Congratulations trainer " << trainername2 << ". You have defeated " << trainername1 << "!" << endl;
    cout << endl;
    cout << "Goodbye trainer " << trainername1 << "!" << " You are not worthy yet!" << endl;
}

    


    return 0;
}
