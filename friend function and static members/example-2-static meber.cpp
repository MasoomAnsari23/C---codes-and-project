#include<iostream>
using namespace std;

class student{
    public:
    int rollNo;
    string name;
    static int addminNo;

    student(string n){
        addminNo++;
        rollNo=addminNo;
        name=n;
    }

    void display(){
        cout<<"name:"<<name<<endl<<"roll no:"<<rollNo<<endl;
    }
};

int student::addminNo=0;

int main(){
    student s1("masoom");
    student s2("asif");
    student s3("sajjad");
    student s4("sahid");

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    cout<<"number of addmission"<<student::addminNo<<endl;

}