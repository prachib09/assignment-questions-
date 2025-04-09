//Write a program that determines whether two integers are opposites in sign without using conditional statements.
#include <iostream>
using namespace std;
    bool opposite(int a , int b){
        return (a^b)<0;
    }

int main(){
    int a , b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    
    if (opposite (a,b))
    cout<<"The number have opposite sign"<<endl;
    else
    cout<<"The number have same sign"<<endl;

    return 0;
}




    