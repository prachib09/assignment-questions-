//Create a program that reads a user's name and age, then outputs: "Hello [name], you are [age] years old!". 
#include <iostream>
using namespace std;
int main(){
    string name;
    int age;

    cout<<"Name: "<<endl;
    cin>>name;

    cout<<"Age: "<<endl;
    cin>>age;

    cout<<"hello "<<name<<" , you are "<<age<<" years old ";
    
    return 0;
}