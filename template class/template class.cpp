#include<iostream>
using namespace std;
template<class T>
class stack{
    private:
    T *stk;
    int top; 
    int size;
    public:
    stack(int sz){
        size sz;
        top=-1;
        stk=new T[size];
    }
    void push(T x);
    T pop();
};
void stack::push(T x){
    if(top==size-1)
    cout<<"stack is full"<<endl;
    else{
        top++;
        stk[top]=x;
    }
}

template <class T>
T stack<T>::pop(){
    T x=0;
    if(top==-1)
    cout<<"stack is empty"<<endl;
    else{
        x=stk[top];
        top--;
    }
    return x;
}

int main(){
    stack <int>s(10);
    stack s(13);
    stack s(105);
}