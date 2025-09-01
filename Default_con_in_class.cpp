//default consturors inside a class
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

class student{
    char name[49];
    char branch[20];
    int rollno;
    float fees;
    public:
    student(){
        cout<<"Enter the name of student: "<<"\n";
        cin>>name;
        cout<<"Enter branch of student: "<<"\n";
        cin>>branch;
        cout<<"Enter roll no.: "<<"\n";
        cin>>rollno;
        cout<<"Enter fees: "<<"\n";
        cin>>fees;
    }
};

int main() {
    student s;
    return 0;
}
/*output
Enter the name of student: 
Prajwal
Enter branch of student: 
Entc
Enter roll no.: 
10
Enter fees: 
1,00,000
*/