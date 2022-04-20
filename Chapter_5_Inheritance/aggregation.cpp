#include <iostream>
using namespace std;
class Address {
    public:
   string addressLine, city, state;
     Address(string addressLine, string city, string state)
    {   cout<<"Address constructor"<<endl;
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
    ~Address(){cout<<"Address Destructor"<<endl;}
};
class Employee
    {
        private:
        Address* address;  //Employee HAS-A Address
        public:
        int id;
        string name;
        Employee(int id, string name, Address* address)
       {
           cout<<"Employee constructor"<<endl;
           this->id = id;
           this->name = name;
           this->address = address;
       }
     void display()
       {
           cout<<id <<" "<<name<< " "<<
             address->addressLine<< " "<< address->city<< " "<<address->state<<endl;
       }
       ~Employee(){cout<<"Employee Destructor"<<endl;}
   };
int main(void) {
    Address a1= Address("C-146, Sec-15","Noida","UP");
    {
        Employee e1 = Employee(101,"Nakul",&a1);
    }
    Employee e2 = Employee(102, "Sahadev", &a1);
//            e1.display();
   return 0;
}












//
//#include<iostream>
//using namespace std;
//int main(){
//    int a =1;
//    int *b = &a;
//    ++(*b);
//    cout <<a;
//
//}
