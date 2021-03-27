class Payslip{
    private:
        char* name[100];
        char paygrade;
        int basicsalary;
        float overtimehours;
        float overtimepay;
        float grosspay;
        float netpay;
        float withholdingtax;
        float taxrate;
        float sss = 500;
        float pagibig = 200;
        float philhealth = 100;
    public:
        Payslip(char* name,int basicsalary,float overtimehours);
        char* getName();
        char getPayGrade();
        float getBasicSalary();
        float getGrossPay();
        float getNetPay();
        float getTaxRate();
        float getFixedValues();
        float getOvertimeHours();
        float getOvertimePay();
        float getWithHoldingTax();
        void determinePayGradeAndTaxRate(); 
        void computePay();
};
Payslip::Payslip(char* name,int basicsalary,float overtimehours){;
    *this->name = name;
    this->basicsalary = basicsalary;
    this->overtimehours = overtimehours;
}
char* Payslip::getName(){
    return *this->name;
}
char Payslip::getPayGrade(){
    return ((this->basicsalary % 10000)==0) ? 'A' : 'B';
}
float Payslip::getBasicSalary(){
    return this->basicsalary;
}
float Payslip::getGrossPay(){
    return getBasicSalary() + getOvertimePay();
}
float Payslip::getNetPay(){
    return ((getGrossPay() - getWithHoldingTax())*-1) - getFixedValues();
}
float Payslip::getFixedValues(){
    return (this->sss + this->pagibig + this->philhealth);
}
float Payslip::getOvertimeHours(){
    return this->overtimehours;
}
float Payslip::getOvertimePay(){
    return getOvertimeHours() * (0.01*getBasicSalary());
}
float Payslip::getWithHoldingTax(){
    return getGrossPay() * getTaxRate();
}
float Payslip::getTaxRate(){
    int salarytemp = this->basicsalary;
    int count = 0;
    int taxes[] = {10,15,20,25,30};
    while(salarytemp > 15000 && salarytemp <= 55000){
        salarytemp -= 10000;
        count++;
    }
    if(salarytemp > 55000){ count = 4;}
    int tax = taxes[count];
    return tax;
} 
void Payslip::determinePayGradeAndTaxRate(){
    this->paygrade = getPayGrade();
    this->taxrate = getTaxRate();
}  
void Payslip::computePay(){
    determinePayGradeAndTaxRate();
    this->grosspay = getGrossPay();
    this->overtimepay = getOvertimePay();
    this->netpay = getNetPay();
    this->withholdingtax = getWithHoldingTax();
}