// 01/09/2022
/*
Ranjith K
Full stack web development 
batch - 18
*/

#include<iostream>
using namespace std;

class Student{
    public:
    int tamil,english,match,science,social_science,total;
    Student(int t,int e,int m,int s, int ss){
        tamil=t;
        english=e;
        match=m;
        science=s;
        social_science=ss;
    }
};

int main(){
    Student Dinesh(65,76,76,65,54);
    Student Vasanth(67,78,89,77,90);
    Student Ranjith(76,87,76,88,70);
    cout<<"Dinesh Marks\n"<<Dinesh.tamil<<"\n"<<Dinesh.english<<"\n"<<Dinesh.match<<"\n"<<Dinesh.science<<"\n"<<Dinesh.social_science<<"\n\n";
    cout<<"Vasanth Marks \n"<<Vasanth.tamil<<"\n"<<Vasanth.english<<"\n"<<Vasanth.match<<"\n"<<Vasanth.science<<"\n"<<Vasanth.social_science<<"\n\n";
    cout<<"Ranjith Marks\n"<<Ranjith.tamil<<"\n"<<Ranjith.english<<"\n"<<Ranjith.match<<"\n"<<Ranjith.science<<"\n"<<Ranjith.social_science<<"\n";
    return 0;
}