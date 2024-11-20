#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    if(a <= 'z' && a >= 'a'){
        a = a - 'a' + 'A';
        cout<<a;
    }
    else{
        a = a + 1;
        cout<<(int)a;
    }
}