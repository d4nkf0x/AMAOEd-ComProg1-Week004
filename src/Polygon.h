class Polygon{
    public:
        int sides;  
        char* name[50];
        char* color[50];
        Polygon(int Sides,char* Name,char* Color);
        int getSides();
        char* getName();
        char* getColor();
};
Polygon::Polygon(int Sides,char* Name,char* Color){
    this->sides = Sides;
    *this->name = Name;
    *this->color = Color;
}
int Polygon::getSides(){
    return this->sides;
}
char* Polygon::getName(){
    return *this->name;
}
char* Polygon::getColor(){
    return *this->color;
}
