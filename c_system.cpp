#include "c_system.hpp"
#define ALLOC_SIZE 20
string askName(){
    cout << "Say my name:" << endl;
    string a;
    cin >> a;
    return a;
}
bool Character::id_alloc[ALLOC_SIZE];
Character::Character(){
    this->setName(askName());
    this->setInit();
}
Character::Character(int a){
    //cout << "estou no construtor com inteiro de Character\n";
}
Character::Character(string n){
    this->setName(n);
    this->setJob(1);
    this->setInit();
    this->setId(avaliableId());
}
Character::Character(string n,int j,int h,int m,int a,int d){
    this->setName(n);
    this->setJob(j);
    this->setHp(h);
    this->setMp(m);
    this->setAtt(a);
    this->setDef(d);
    this->setId(avaliableId());
}


void Character::setName(string n){
    this->name = n;
}
void Character::setId(int i){
    this->id=i;
}
void Character::setJob(int j){
    this->job = j;
}
void Character::setHp(int h){
    this->hp = h;
}
void Character::setMp(int m){
    this->mp = m;
}
void Character::setAtt(int a){
    this->att = a;
}
void Character::setDef(int d){
    this->def = d;
}
void Character::setInit(){
    //srand( (unsigned)time(NULL) );
    int x = 100+(rand()%21);
    this->setHp(x);
    this->setMp(220-x);
    //srand(1);
    //srand( (unsigned)time(NULL) );
    x = 10+(rand()%6);
    this->setAtt(x);
    this->setDef(25-x);
    this->setJob(1);
}

//*********************************
//code the gets
string Character::getName(){
    return this->name;
}
int Character::getId(){
    return this->id;
}
int Character::getJob(){
    return this->job;
}
int Character::getHp(){
    return this->hp;
}
int Character::getMp(){
    return this->mp;
}
int Character::getAtt(){
    return this->att;        
}
int Character::getDef(){
    return this->def;
}
void Character::printStat(){
    cout << this-> getName() << endl << this->getHp() << endl << this->getMp() << endl << this->getAtt() << endl << this->getDef() << endl;
}
int Character::avaliableId(){
    int i =0;
    while(Character::id_alloc[i] && i<=19){
        i++;
    }
    if(i>19){
        cout << "não há mais espaço para novos chars\n";
        return -1;
    }
    else{
        Character::id_alloc[i]=true;
        return i;
    }
}



