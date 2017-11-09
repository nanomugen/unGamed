#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
//#include <string>
using namespace std;
string askName();
class Character{
    
    private:
    string name;
    
    int id,job, hp, mp, att,def;
    public:
    static bool id_alloc[20];
    Character();
    Character(int);
    Character(string);
    Character(string, int, int, int, int, int);
    void setName(string);
    void setId(int);
    void setJob(int);
    void setHp(int);
    void setMp(int);
    void setAtt(int);
    void setDef(int);
    void setInit();
    string getName();
    int getId();
    int getJob();
    int getHp();
    int getMp();
    int getAtt();
    int getDef();
    void printStat();
    int avaliableId();
    
};
//class Persona:Character;
//#include <iostream>