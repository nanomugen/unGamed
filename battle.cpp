#include "battle.hpp"

Battle::Battle(Persona *lista){
        //int select[NOFMEM];
        this->members = new Persona[NOFMEM];
        int chave;
        for(int i=0;i<NOFMEM;i++){
            cout << "Selecione o membro para luta:\n";
            cin >> chave;
            this->setMembers(i,*(lista+chave));
        }
        blood(0);
}
//************************
//ta dando ruim aqui
//consertei, criei só o construtor vazio de persona, que bobeira
void Battle::setMembers(int chave, Persona p){
    this->members[chave] = p;
}
Persona Battle::getMembers(int chave){
    return this->members[chave];
}
void Battle::blood(int cont){
    cout << "nada\n";
}