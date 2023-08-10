
/* analyse if stack is empty ,is full and if elements are present 
    then return top element in stack using templates and also perform 
    push and pop operaion int stack */

#include<iostream>
#include<stack>
#include<string>
using namespace std;
#define SIZE 5

template<class T>                //Template Intialisation
class Stack{
    private:
    
    int top;
    T st[SIZE];
    
    public:
    
    Stack();                     // Initialize Stack
    void push(T k);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();

};

template <class T> Stack<T> :: Stack() { top = -1; }

template <class T> void Stack<T>::push(T k)               //Push Definition
{
    if (isFull()) {
        cout <<"Stack is full\n";
    }
    cout << "Inserted element " << k << endl;
    top = top + 1;
    st[top] = k;
}

template <class T> T Stack<T>::pop()                    //Pop Definition
{
    T popped_element = st[top];
    top--;
    return popped_element;
}

template <class T> bool Stack<T>::isEmpty()             //Empty Definition
{
    if (top == -1)
        return true;
    else
        return false;
}

template <class T> bool Stack<T>::isFull()              //Full Definition
{
    if (top == (SIZE - 1))
        return 1;
    else
        return 0;
}

template <class T> T Stack<T>::topElement()            //Top Element Definition
{
  
    T top_element = st[top];
    return top_element;
}

int main(){                                            //Driver Code
    Stack <int> Int_Stack;
  
    int val,ch;
    cout<<"1. Push";
    cout<<"\n2. Pop";
    cout<<"\n3. Is Full?";
    cout<<"\n4. Is Empty?";
    cout<<"\n5. Top Element\n";
    
    cin>>ch;
    switch(ch){

        case 1: {
        cout<<"Enter Element: ";
        cin>>val;
        Int_Stack.push(val);
        break;}

        case 2: {
        cout<<Int_Stack.pop();
        break;}

        case 3: {
        cout<<Int_Stack.isFull();
        break;}

        case 4: {
        cout<<Int_Stack.isEmpty();
        break;}

        case 5: {
        cout<<Int_Stack.topElement();
        break;}

    }
    return 0;

}