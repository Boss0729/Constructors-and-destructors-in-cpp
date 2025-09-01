//Default cons. outside class
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

class day{
    int year;
    int month;
    int date;
    public:
    day();
    void display();
};
    day::day(){
        cout<<"Enter today's date: "<<"\n";
        cin>>date;
        cout<<"Enter month: "<<"\n";
        cin>>month;
        cout<<"Enter the year: "<<"\n";
        cin>>year;
    }
    void day::display(){
        cout<<endl<<"Today's Date is: "<<date<<"-"<<month<<"-"<<year<<endl;
    }
int main() {
    day d;
    d.display();

    return 0;
}
/*Output
Enter today's date: 
26
Enter month: 
08
Enter the year: 
25

Today's Date is: 26-8-25
*/