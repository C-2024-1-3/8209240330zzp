#include<iostream>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;;
    if(a + b <= c && a + c <= b && b + c <= a){
        cout<<"不是三角形"<<endl;
    }
    else{
        double sum = a + b + c;
        cout<<sum<<endl;
        if(a == b && a == c){
            cout<<"是等边三角形";
        }
        else{
            cout<<"不是等边三角形";
        }
    }
}