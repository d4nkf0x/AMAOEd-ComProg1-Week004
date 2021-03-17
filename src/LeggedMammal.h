class LeggedMammal{
    public:
        int legs;  
        bool hasTail;
        char* fur[50];
        LeggedMammal(int Legs,char* Fur,bool HasTail);
        int getLegs();
        char* getFur();
        bool getTail();
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
