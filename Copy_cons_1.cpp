// cpy. cons. 5
//prajwal
//24070123073
//a3
#include <iostream>
using namespace std;
class Books{
    string nameb;
    string name;
    float price;
    public:
    Books(string b,string a, float p){
        nameb=b;
        name=a;
        price=p;
    }
    Books(const Books&b){
        nameb=b.nameb;
        name=b.name;
        price=b.price;
        cout<<"Copy cons. is called"<<endl;
    }
    void display(){
        cout<<"Name of the book: "<<nameb<<"\n"<<"Name of the author: "<<name<<"\n"<<"Price of the book is: "<<price<<endl;
    }
};
int main() {
    string a;
    float p;
    string bo;
    cout<<"Enter the name of the book: "<<endl;
    cin>>bo;
    cout<<"Enter the name of the author: "<<endl;
    cin>>a;
    cout<<"Enter the price of the book: "<<endl;
    cin>>p;
    Books b(bo,a,p);
    b.display();
    Books b1=b;
    b1.display();

    return 0;
}
/*Output
Enter the name of the book: 
Geography
Enter the name of the author: 
Steve
Enter the price of the book: 
500
Name of the book: Geography
Name of the author: Steve
Price of the book is: 500
Copy cons. is called
Name of the book: Geography
Name of the author: Steve
Price of the book is: 500
*/