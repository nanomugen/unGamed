#include "f_system.hpp"
/*
class Persona{
    private:
    int hp,mp, att,def;
    int att_list[10];
    public:
    void setAll(string, int, int, int, int, int);
    void setName(string);
    //void setJob(int);
    void setHp(int);
    void setMp(int);
    void setAtt(int);
    void setDef(int);
    string getName();
    int getHp();
    int getMp();
    int getAtt();
    int getDef();
    void showPersona();
    void showAtt();
}; 
Persona::Persona(){
    setAll(askName(),10,10,10,10)
}

void Persona::setName(string n){
    this->name = n;
}
void Persona::setJob(int j){
    this->job = j;
}
void Persona::setHp(int h){
    this->hp = h;
}
void Persona::setMp(int m){
    this->mp = m;
}
void Persona::setAtt(int a){
    this->att = a;
}
void Persona::setDef(int d){
    this->def = d;
}
void Persona::setAll(string n, int h, int m, int a, int d){
    this->setName(n);
    this->setHp(h);
    this->setMp(m);
    this->setAtt(att);
    this->setDef(def);
}
string Persona::getName(){
    return this->name;
}
int Persona::getJob(){
    return this->job;
}
int Persona::getHp(){
    return this->hp;
}
int Persona::getMp(){
    return this->mp;
}
int Persona::getAtt(){
    return this->att;        
}
int Persona::getDef(){
    return this->def;
}
*/

Persona::Persona(character c):character(1){
    //this->setName(c.getName());
    this->setJob(c.getJob());
    this->setHp(c.getHp());
    this->setMp(c.getMp());
    this->setAtt(c.getAtt());
    this->setDef(c.getDef());
}