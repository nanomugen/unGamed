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
        //cout << "to aqui fora\n";
        //este abaixo é o metodo que mostra todos personas possiveis, por hora não utilizado
        /*
        for(int j=0;j<ALLOC_SIZE;j++){
            if(Character::id_alloc[j]){
                
            }
        }
        */
        for(int i=0;i<NOFMEM;i++){
            int x,y;
            cout << "Selecione o membro para luta:\n";
            cin >> chave;
            this->setMembers(i,*(lista+chave));
            cout << "escolha a posição[field 20x20]\n";
            cin >> x >> y;
            if(x>SIZE_TAB)
                x=SIZE_TAB;
            else
                if(x<0)
                    x=0;
            if(y>SIZE_TAB)
                y=SIZE_TAB;
            else
                if(y<0)
                    y=0;
            this->getMembers(i).getPos()->setP(x,y);
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
    int turn = cont%NOFMEM;
    bool stAtt=true,stMv=true,stOp=true;
    cout << "Turno no. " << cont << "\n" << "Player " << turn << endl;
    
    //for(int i = 1;i<NOFMEM;i++){
        //this->members[turn].attack(&this->members[(turn+i)%NOFMEM]);
        //cout << "=================\nBattle\n=================\n"<< "Damaged Player: ";
        //cout << this->members[(turn+i)%NOFMEM].getName() << endl << "Hp:"; 
        //cout << this->members[(turn+i)%NOFMEM].getHpb() << "/" << this->members[(turn+i)%NOFMEM].getHp() << endl << "=================\n/Battle\n=================\n\n"; 
    //}
    //this->op(&this->members[turn]);
    char op;
    while(stOp){
        cout << "indique a operação:\n";
        cin >> op;
        
        if(op=='m'||op=='M'){
            if(stMv){
                this->getMembers(turn).move();
                stMv=false;
            }
            else
                cout << "não há movimento disponivel.\n";
                
        }
        
        if(op=='a'||op=='A'){
            if(stAtt){
                int j=1;
                bool ver=true;
                op='n';
                while(ver){
                    //*****************************
                    //consertar essa distancia
                    if(this->members[turn].getPos()->range(this->members[(turn+j)%NOFMEM].getPos())<2){
                        cout << "Deseja atacar " << this->members[(turn+j)%NOFMEM].getName() << "?[s/n]\n";
                        cin >> op;
                        if(op=='s'||op=='S'){
                            this->members[turn].attack(&this->members[(turn+j)%NOFMEM]);
                            ver=false;
                            stAtt=false;
                            
                        }
                    }
                    if(++j==NOFMEM)
                        ver=false;
                }
            }
            else
                cout << "não há ataque disponivel.\n";
        }
        if(op=='q'||op=='Q'){
            stOp=false;
        }
        if(!stMv && !stAtt)
            stOp=false;
    }    
    if(this->end()){
        cout << "o vencedor é: " << this->getChampion() << endl;
    }
    else{
        if(cont<31)
            blood(++cont);
    }
    
    
}
bool Battle::end(){
    int alive = 0;
    int only=0;
    this->setChampion("Ninguem");
    for(int i=0;i<NOFMEM;i++){
        //se o hpb do personagem i for maior que 0 ele esta vivo
        if(this->getMembers(i).getHpb()>0){
            only=i;
            alive++;
        }
        if(alive>1)
            return false;
    }
    //seta o nome champion com o nome do unico membro vivo(caso só sobre um) 
    this->setChampion(this->getMembers(only).getName());
    return true;
}
string Battle::getChampion(){
    return this->champion;
}
void Battle::setChampion(string s){
    this->champion=s;
}
void Battle::op(Persona* curr){
    char opr;
    cout << "Option?\n";
    cin >> opr;
    if(opr=='m'||opr=='M'){
        char move;
        cin >> move;
        
    }
    if(opr=='a'||opr=='A'){
        //*************************************
        //implementar a função para ver se tem alguem pra atacar e atacar caso tenha
        
    }
    
}