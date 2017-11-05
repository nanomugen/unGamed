#include "battle.hpp"

/*
#include <string>
*/
//using namespace std;
int main(){
    cout << "00" << endl;
    character char1("Lan");
    //char1.printStat();
    cout << "01" << endl;
    Persona per1(char1);
    cout << "02" << endl;
    char1.printStat();
    per1.printStat();
    //cout << per1.getAtt() << endl;
    return 0;
}