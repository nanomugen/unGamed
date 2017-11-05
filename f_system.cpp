#include "f_system.hpp"


Point::Point(){
    this->setX(0);
    this->setY(0);
}
Point::Point(int x,int y){
    this->setX(x);
    this->setY(y);

}
void Point::setX(int x){
    this->x=x;
}
void Point::Point::setY(int y){
    this->y = y;
}
int Point::getX(){
    return this->x;
}
int Point::getY(){
    return this->y;
}
int Point::range(Point other){
    int a = abs(other.x - this->x);
    int b = abs(other.x - this->x);
    int c = (int) sqrt(pow(a,2)+pow(b,2));
}
Persona::Persona(){
    
}
Persona::Persona(character c):character(1){
    //cout << "comecei aqui a setar\n";
    this->setName(c.getName());
    //this->setName("loki");
    //cout << "depois do name\n";
    this->setId(c.getId());
    this->setJob(c.getJob());
    this->setHp(c.getHp());
    this->setMp(c.getMp());
    this->setAtt(c.getAtt());
    this->setDef(c.getDef());
    //cout << "terminei de setar o persona\n";
}
void Persona::setPos(Point p){
    this->pos = p;
}
Point Persona::getPos(){
    return this->pos;
}