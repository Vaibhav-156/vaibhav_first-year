#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if((num%2==0 )&&( num%3==0)){
        cout<<"Num is even and divisible by 3"<<endl;
    }
    else{
        cout<<"The number you entered is odd"<<endl;
    }
     return 0;
}