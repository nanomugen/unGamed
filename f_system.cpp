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
int Point::range(Point* other){
    int a = abs(other->getX() - this->getX());
    int b = abs(other->getY() - this->getY());
    int c = (int) sqrt(pow(a,2)+pow(b,2));
    return c;
}
void Point::add(Point* p){
    this->setX(this->getX()+p->getX());
    this->setY(this->getY()+p->getY());
    
}
void Point::print(){
    cout << "(" << this->getX() << "," << this->getY() << ")\n";
}
void Point::setP(int x,int y){
    this->setX(x);
    this->setY(y);
}
Persona::Persona():Character(1){
    
}
Persona::Persona(Character c):Character(1){
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
    this->setHpb(c.getHp());
    this->setMpb(c.getMp());
    this->setPos(new Point(0,0));
    //cout << "terminei de setar o persona\n";
}
void Persona::setPos(Point *p){
    this->pos = p;
}
Point* Persona::getPos(){
    return this->pos;
}
void Persona::setHpb(int h){
    this->hpb=h;
}
void Persona::setMpb(int m){
    this->mpb=m;
}
int Persona::getHpb(){
    return this->hpb;
}
int Persona::getMpb(){
    return this->mpb;
}
void Persona::attack(Persona *other){
    //srand( (unsigned)time(NULL) );
    //******************************************
    //terminar aqui
    int damage = (this->getAtt()*(0.8+(rand()%5)/(float)10))/(1+(other->getDef()/(float)100));
    //cout << "Dano: " << damage << endl;
    other->setHpb(other->getHpb()-damage);
    if(other->getHpb()<0)
        other->setHpb(0);
    cout << "=================\nAttack\n=================\n";
    cout << "Damaged Player: " << other->getName() << endl;
    cout << "Dano: " << damage << endl << "Hp:" << other->getHpb() << "/";
    cout << other->getHp() << endl << "=================\n/Attack\n=================\n\n";
}
void Persona::move(){
    char move;
    Point* dir= new Point(0,0);
    cout << "indique a direção:\n";
    cin >> move;
    if(move == 'w')
        dir->setP(0,1);
    if(move == 'a')
        dir->setP(-1,0);
    if(move == 's')
        dir->setP(0,-1);
    if(move == 'd')
        dir->setP(1,0);
    this->getPos()->add(dir);
    delete dir;
    this->getPos()->print();
}