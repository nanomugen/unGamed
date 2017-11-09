#include "c_system.hpp"

class Point{
    private:
    int x,y;
    public:
    Point();
    Point(int,int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    int range(Point*);
    void add(Point*);
    void print();
    void setP(int,int);
    
};
class Persona: public Character{
    private:
    Point* pos;
    int hpb,mpb;
    public:
    Persona(Character);
    Persona();
    void setPos(Point*);
    Point* getPos();
    void setHpb(int);
    void setMpb(int);
    int getHpb();
    int getMpb();
    void attack(Persona*);
    void move();
    //void setAll;
};