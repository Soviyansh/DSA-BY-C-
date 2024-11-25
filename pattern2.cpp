#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
     int num=1;
    cout << "Enter the number : ";
    cin >> n;                                                                      //to print a pattern
    for(i=0;i<n;i++){                                                             //    123
        for(j=0;j<n;j++){                                                         //    456
            cout<<num;    
            num++;                                                           //    789
    }
    cout<<endl;
    }
    return 0;
}