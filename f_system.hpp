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
    int range(Point);
    
};
class Persona: public Character{
    private:
    Point pos;
    public:
    Persona(Character);
    Persona();
    void setPos(Point);
    Point getPos();
    void attack(Persona);
    //void setAll;
};