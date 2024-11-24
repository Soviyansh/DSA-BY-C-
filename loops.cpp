#include<iostream>
using namespace std;
int main()
{
    int count=1;
    while(count<=10)                       //using while loop
    {                                      //by for loop
        cout<< count<<"   ";               //for(i=1;i<=10;i++)
        count++;                         /*  by do while    do {             cout<<count:        count++:}              while(count<=10); */
    }                                          
    return 0;
}
