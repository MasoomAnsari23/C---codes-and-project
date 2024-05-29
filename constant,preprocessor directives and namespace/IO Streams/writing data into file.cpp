#include<iostream>
#include<fstream>
using namespace std;

int main(){
 ofstream ofs("my.txt",ios::trunc); //creating file my.txt if it is already present and it have some data already it will delete it
 ofs<<"masoom"<<endl;  // data enterying
 ofs<<23<<endl;
 ofs<<"cse"<<endl;
 ofs.close(); // closing the file
}