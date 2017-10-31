#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

//#include <string>
using namespace std;
string askName();
class character{
    private:
    string name;
    
    int job, hp, mp, att,def;
    public:
    character();
    character(int);
    character(string);
    character(string, int, int, int, int, int);
    void setName(string);
    void setJob(int);
    void setHp(int);
    void setMp(int);
    void setAtt(int);
    void setDef(int);
    void setInit();
    string getName();
    int getJob();
    int getHp();
    int getMp();
    int getAtt();
    int getDef();
    void printStat();
    
};
//class Persona:character;
//#include <iostream>