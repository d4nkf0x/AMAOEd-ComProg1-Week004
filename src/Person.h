class Person{
    public:
        int age;  
        bool gender;
        char* address[100];
        char* name[100];
        char* occupation[100];
        Person(char* Name, char* Address,int Age,bool Gender,char* Occupation);
        int getAge();
        bool getGender();
        char* getName();
        char* getAddress();
        char* getOccupation();
      
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
