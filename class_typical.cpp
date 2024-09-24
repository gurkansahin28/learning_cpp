#include <iostream>
using std::cout, std::string, std::endl;

class Employee{
  private:
  int salary;

  public:
  string name;

    Employee(int sal, string name){
        this->salary = sal;
        this->name = name;
    }

  string getName(){
    return name;
  }
  int getSalary(){
    return salary;
  }
};

int main(){
    Employee employee = Employee(3700, "gurkan");
    cout << employee.getName() << endl;
    cout << employee.getSalary() << endl;
  return 0;
}
