//Prajwal Gaikwad
//24070123073
//A3
#include<iostream>
using namespace std;
class Product{
    int Pcode;
    string name;
    string  type;
    double price;
    public:
    Product(int id,string n,string d,double p){
            Pcode=id;
            name=n;
            type=d;
            price=p;
    }
void display(){
    cout<<endl<<"Details of the product are :- "<<endl;
    cout<<"Product ID is: "<<Pcode<<endl;
    cout<<"Name of the product: "<<name<<endl;
    cout<<"Category of product: "<<type<<endl<<"Price of the product: "<<price;
}
};
int main(){
    Product p(547,"Samsung","Flip-phone",250000);
    p.display();
    return 0;
}

/*Output
Details of the product are :-
Product ID is: 547
Name of the product: Samsung
Category of product: Flip-phone
Price of the product: 250000
*/