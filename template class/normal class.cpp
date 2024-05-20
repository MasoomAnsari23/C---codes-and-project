#include<iostream>
using namespace std;

class stack{
    private:
    int *stk;
    int top; 
    int size;
    public:
    stack(int sz){
        size sz;
        top=-1;
        stk=new int[size];
    }
    void push(int x);
    int pop();
};
void stack::push(int x){
    if(top==size-1)
    cout<<"stack is full"<<endl;
    else{
        top++;
        stk[top]=x;
    }
}

int stack::pop(){
    int x=0;
    if(top==-1)
    cout<<"stack is empty"<<endl;
    else{
        x=stk[top];
        top--;
    }
    return x;
}

int main(){
    stack s(10);
    stack s(13);
    stack s(105);
}