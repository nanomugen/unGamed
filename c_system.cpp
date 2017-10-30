#include "c_system.hpp"
//using namespace std;
string askName(){
    cout << "Say my name:" << endl;
    string a;
    cin >> a;
    return a;
}
class character{
    private:
    std::string name;
    
    int job, hp, mp, att,def;
    public:
    character();
    character(string);
    character(string, int, int, int, int, int);
    void setName(string);
    void setJob(int);
    void setHp(int);
    void setMp(int);
    void setAtt(int);
    void setDef(int);
    void setInit();
    int getHp();
    int getMp();
    int getAtt();
    int getDef();
    void printStat();
    
};
character::character(){
    this->setName(askName());
    this->setInit();
}
character::character(string n){
    this->setName(n);
    this->setJob(1);
    this->setInit();
}
character::character(string n,int j,int h,int m,int a,int d){
    this->setName(n);
    this->setJob(j);
    this->setHp(h);
    this->setMp(m);
    this->setAtt(a);
    this->setDef(d);
    
}


void character::setName(string n){
    this->name = n;
}
void character::setJob(int j){
    this->job = j;
}
void character::setHp(int h){
    this->hp = h;
}
void character::setMp(int m){
    this->mp = m;
}
void character::setAtt(int a){
    this->att = a;
}
void character::setDef(int d){
    this->def = d;
}
void character::setInit(){
    srand( (unsigned)time(NULL) );
    int x = 10+(rand()%6);
    this->setHp(x);
    this->setMp(25-x);
    //srand(1);
    //srand( (unsigned)time(NULL) );
    x = 10+(rand()%6);
    this->setAtt(x);
    this->setDef(25-x);
    
}

//*********************************
//code the gets
int character::getHp(){
    return this->hp;
}
int character::getMp(){
    return this->mp;
}
int character::getAtt(){
    return this->att;        
}
int character::getDef(){
    return this->def;
}
void character::printStat(){
    cout << this->getHp() << endl << this->getMp() << endl << this->getAtt() << endl << this->getDef() << endl;
}
/*
int main(){
    character teste("teste");
    teste.printStat();
    return 0;
}
*/


