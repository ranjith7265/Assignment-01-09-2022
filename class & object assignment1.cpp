// Date - 01/09/2022
/*
---- Assignment ----
Ranjith K
Full stack web development
batch - 18
*/

#include <iostream>
using namespace std;

class Fruits{
    public:
    string taste;
    string size; 
    string color;
    float price;
    Fruits(string a, string b, string c, int d){
        taste=a;
        size=b;
        color=c;
        price=d;
    }
};

int main() {
    Fruits apple("sweet","medium","red",150.00);
    Fruits lemon("sour","small","Yellow",35.00);
    Fruits watermelon("sweet","big","Green",60.00);
    cout<<"Apple = "<<apple.taste<<"\t"<<apple.size<<"\t"<<apple.color<<"\t Price= Rs."<<apple.price<<"\n";
    cout<<"Lemon = "<<lemon.taste<<"\t"<<lemon.size<<"\t"<<lemon.color<<"\t Price = Rs."<<lemon.price<<"\n";
    cout<<"Watermelon = "<<watermelon.taste<<"\t"<<watermelon.size<<"\t"<<watermelon.color<<"\tPrice = Rs."<<watermelon.price;
    

    return 0;
}