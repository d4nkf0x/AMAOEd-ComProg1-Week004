#include <string>
class LeggedMammal{
    private:
        int legs;  
        bool hasTail;
        char* fur[50];
    public:
        LeggedMammal() = default;
        LeggedMammal(int Legs,char* Fur,bool HasTail);
        int getLegs();
        char* getFur();
        bool getTail();
        void setLegs(int x);
        void setFur(char* x);
        void setTail(bool x);
};
LeggedMammal::LeggedMammal(int Legs,char* Fur,bool HasTail){
    this->legs = Legs;
    *this->fur = Fur;
    this->hasTail = HasTail;
}
int LeggedMammal::getLegs(){
    return this->legs;
}
char* LeggedMammal::getFur(){
    return *this->fur;
}
bool LeggedMammal::getTail(){
    return this->hasTail;
}
void LeggedMammal::setLegs(int x){
    this->legs = x;
}
void LeggedMammal::setFur(char* x){
    *this->fur = x; 
}
void LeggedMammal::setTail(bool x){
    this->hasTail = x;
}


