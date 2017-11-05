#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
//#include <string>
using namespace std;
string askName();
class character{
    private:
    string name;
    
    int id,job, hp, mp, att,def;
    public:
    character();
    character(int);
    character(string);
    character(string, int, int, int, int, int);
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
    
};
//class Persona:character;
//#include <iostream>