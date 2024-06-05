//it is a process of storing and retrieving the state of object

#include<iostream>
#include<fstream>

using namespace std;

class student{
    private:
    string name;
    int roll;
    string branch;

    public:
    student(){}
    student(string n,int r,string b){
        name=n;
        roll=r;
        branch=b;
    }

    friend ofstream & operator<<(ofstream & ofs, student &s);
    friend ifstream & operator<<(ifstream & ifs, student &s);
    friend ostream & operator<<(ostream & os, student &s);
};

ofstream & operator<<(ofstream &ofs,student s);{
    ofs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

ostream &operator<<(ofstream &os , student &s){
    os<<"name"<<s.name<<endl;
    os<<"roll no "<<s.roll<<endl;
    os<<"branch"<<s.branch<<endl;
    return os;
}

int main(){
    ofstream ofs("student.txt");
    student s1("masoom", 20,"cse");
    ofs<<s1;
    ofs.close();
    student s2;
    ifstream ifs("student.txt");
    ifs>>s2;
    cout<<s1;
}