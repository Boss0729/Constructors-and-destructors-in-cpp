//cpy cons. 4
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(int a, string n){
        name=n;
        age=a;
    }
    Student(const Student&s){
        name=s.name;
        age=s.age;
        cout<<"Copy cons. is called"<<endl;
    }
    void display(){
        cout<<"Name of student is: "<<name<<"\n"<<"Age of sudent is: "<<age<<endl;
    }
};
int main() {
    //Student.s;
    Student s1(20,"Prajwal");
    s1.display();
    Student s2=s1;
    s2.display();
    return 0;
}
/*Output
Name of student is: Prajwal
Age of sudent is: 20
Copy cons. is called
Name of student is: Prajwal
Age of sudent is: 20
*/