#include "LeggedMammal.h"
class Dog: public LeggedMammal{
    private:
        char* breed[50];
        float size;
        bool isRegistered;
    public:
        Dog(int Legs,char* Fur,bool HasTail,char* Breed,float size,bool Register);
        char* getBreed();
        float getSize();
        bool getRegister();
        void setBreed(char* Breed);
        void setSize(float Size);
        void setRegister(bool Register);

};
Dog::Dog(int Legs,char* Fur,bool HasTail,char* Breed,float Size,bool Register){
    setLegs(Legs);
    setFur(Fur);
    setTail(HasTail);
    *this->breed = Breed;
    this->size = Size;
    this->isRegistered = Register
}
char* Dog::getBreed(){
    return *this->breed;
}
float Dog::getSize(){
    return this->size;
}
bool Dog::getRegister(){
    return this->isRegistered;
}
void Dog::setBreed(char* Breed){
    *this->breed = Breed;
}
void Dog::setRegister(bool Register){
    this->isRegistered = Register;
}
void Dog::setSize(float Size){
    this->size = Size;
}