#include<iostream>
using namespace std;
int power(int x, int y){
    
    if(y==0)
        return 1;
   
    int temp= power(x,y/2);
    
    if(y%2==0)
        return temp*temp;
    else
        return x*temp*temp;
    }
int main(){
    
    int x,y;
    
    cout<<"Enter the digit whose power you want to know: ";
    cin>>x;
    
    cout<<"Enter the power: ";
    cin>>y;
    
    cout<<"Answer is: "<<power(x,y);

}