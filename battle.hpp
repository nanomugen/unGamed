#include "f_system.hpp"
#define NOFMEM 2
#define SIZE_TAB 20
class Battle{
    private:
    int field[SIZE_TAB][SIZE_TAB];
    Persona *members;
    //Persona champion;
    string champion;
    public:
    //talvez mudar aqui para character e depois transformar em persona
    //ja era, só criei o construtor vazio de persona
    Battle(Persona[]);
    void setMembers(int,Persona);
    Persona getMembers(int);
    void setStart();
    void blood(int);
    bool end();
    string getChampion();
    void setChampion(string);
    void op(Persona*);
};