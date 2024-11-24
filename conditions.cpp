#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    if(age>=18){
    cout<<"you are eligible to vote";
    }
    if (age<18){
        cout<< " you are not aligible for voting ";
        }
        return 0;
}
