#include "battle.hpp"

/*
#include <string>
*/
//using namespace std;
int main(){
    
    srand((unsigned)time(NULL));
    cout << "00" << endl;
    Character char1("Lan");
    Character char2("Gray");
    //char1.printStat();
    cout << "01" << endl;
    Persona ally(char1);
    Persona enemy(char2);
    cout << "01.1" << endl;
    Persona lista[NOFMEM];
    //lista[0](char1);
    cout << "01.2" << endl;
    lista[0] = ally;
    lista[1] = enemy;
    cout << "02" << endl;
    
    for(int i=0;i<20;i++){
        if(Character::id_alloc[i])
            cout << i << "\n";
        //else
        //    cout << "false\n";
    }
    //lista[0]->printStat();
    //lista[1]->printStat();
    Battle testB(lista);
    //char1.printStat();
    //per1.printStat();
    //cout << per1.getAtt() << endl;
    for(int i=0;i<20;i++){
        if(Character::id_alloc[i])
            cout << i << "\n";
        //else
        //    cout << "false\n";
    }
    return 0;
}