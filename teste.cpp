#include "battle.hpp"

/*
#include <string>
*/
//using namespace std;
int main(){
    
    srand((unsigned)time(NULL));
    Character char1("Lan");
    Character char2("Gray");
    Persona ally(char1);
    Persona enemy(char2);
    Persona lista[NOFMEM];
    lista[0] = ally;
    lista[1] = enemy;
    for(int i=0;i<20;i++){
        if(Character::id_alloc[i])
            cout << i << "\n";
    }
    Battle testB(lista);
    for(int i=0;i<20;i++){
        if(Character::id_alloc[i])
            cout << i << "\n";
    }
    return 0;
}