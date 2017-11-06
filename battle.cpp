#include "battle.hpp"

Battle::Battle(Persona lista[]){
        //int select[NOFMEM];
        this->members = new Persona[NOFMEM];
        int chave;
        int j=0;
        
        while(j<2){
            lista[j].printStat();
            cout << "Chave:\t" << j << endl;
            j++;
        }
        cout << "to aqui fora\n";
        //este abaixo é o metodo que mostra todos personas possiveis, por hora não utilizado
        /*
        for(int j=0;j<ALLOC_SIZE;j++){
            if(Character::id_alloc[j]){
                
            }
        }
        */
        for(int i=0;i<NOFMEM;i++){
            cout << "Selecione o membro para luta:\n";
            cin >> chave;
            this->setMembers(i,*(lista+chave));
        }
        blood(0);
}
void Battle::setMembers(int chave, Persona p){
    this->members[chave] = p;
}
Persona Battle::getMembers(int chave){
    return this->members[chave];
}
void Battle::blood(int cont){
    cout << "começou a luta\n";
    this->members[0].attack(this->members[1]);
}