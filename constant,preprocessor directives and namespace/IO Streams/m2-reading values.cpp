#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs;
    ifs.open("my.txt"); 
    
    if(ifs)cout<<"file is opened"<<endl;
    //or
    //if(ifs.is_open())cout<<"file is opened"<<endl;

    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;
    cout<<"name "<<name<<endl;
    cout<<"roll no "<<roll<<endl;
    cout<<"branch "<<branch<<endl;
}