#include "Person.h"
class Student: public Person{
    private:
        char* program[100];
        int year;
        char* university[100];
    public:
        Student(char* Name, char* Address, int Age,bool Gender,char* Program,int Year,char* University);
        char* getProgram();
        int getYear();
        char* getUniversity();
        void setProgram(char* x);
        void setYear(int x);
        void setUniversity(char* x);      
};
Student::Student(char* Name, char* Address, int Age,bool Gender,char* Program,int Year,char* University){
    setName(Name);
    setAddress(Address);
    setAge(Age);
    setGender(Gender);
    setOccupation("Student");
    *this->program = Program;
    this->year = Year;
    *this->university = University;
}
char* Student::getProgram(){
    return *this->program;
}
int Student::getYear(){
    return this->year;
}
char* Student::getUniversity(){
    return *this->university;
}
void Student::setProgram(char* x){
    *this->program = x;
}
void Student::setYear(int x){
    this->year = x;
}
void Student::setUniversity(char* x){
    *this->university = x;
}      