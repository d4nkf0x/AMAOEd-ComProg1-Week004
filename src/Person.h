class Person{
    private:
        int age;  
        bool gender;
        char* address[100];
        char* name[100];
        char* occupation[100];
    public:
        Person() = default;
        Person(char* Name, char* Address,int Age,bool Gender,char* Occupation);
        int getAge();
        bool getGender();
        char* getName();
        char* getAddress();
        char* getOccupation();
        void setAge(int x);
        void setGender(bool x);
        void setName(char* x);
        void setAddress(char* x);
        void setOccupation(char* x);
      
};
Person::Person(char* Name, char* Address, int Age,bool Gender,char* Occupation){
    this->age = Age;
    this->gender = Gender;
    *this->name = Name;
    *this->address = Address;
    *this->occupation = Occupation;
}
int Person::getAge(){
    return this->age;
}
char* Person::getName(){
    return *this->name;
}
char* Person::getAddress(){
    return *this->address;
}
char* Person::getOccupation(){
    return *this->occupation;
}
bool Person::getGender(){
    return this->gender;
}
void Person::setAge(int x){
    this->age = x;
}
void Person::setName(char* x){
    *this->name = x;
}
void Person::setAddress(char* x){
    *this->address = x;
}
void Person::setOccupation(char* x){
    *this->occupation = x;
}
void Person::setGender(bool x){
    this->gender = x;
}
