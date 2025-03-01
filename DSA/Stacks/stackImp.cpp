#include <bits/stdc++.h>
using namespace std;
class Stack{
    //properties: 
    public:
    int *arr;
    int top;
    int size; 

    //behaviour using constructor:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size]; //dynamic array creation
        top = -1;

    }
    void push(int val)
    {
        if(top>=size)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]= val;
    }
    void pop()
    {
        if(top>=0)
        top--;
        else
        cout<<"Stack underflow"<<endl;

    }
    int peek()
    {
        if(top>=0)
        return arr[top];
        else
        return -1;

    }
    bool isEmpty()
    {
        if(top==-1)
        return true;
        else
        return false;

    }
    
};
int main(){

    Stack st(5);
    //Push operation
    st.push(22);
    st.push(8);
    st.push(35);
    //Pop operation
    st.pop();
    //Peek operation
    st.peek();
    //
    return 0;
}