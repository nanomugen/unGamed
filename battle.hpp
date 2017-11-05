#include "f_system.hpp"
#define NOFMEM 2
class Battle{
    private:
    int field[20][20];
    Persona *members;
    public:
    //talvez mudar aqui para character e depois transformar em persona
    //ja era, só criei o construtor vazio de persona
    Battle(Persona *);
    void setMembers(int,Persona);
    Persona getMembers(int);
    void setStart();
    void blood(int);
    
};