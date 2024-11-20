#include <iostream>  
#include <cmath>  
using namespace std;  

int main() {  
    double a;  

    cout << "请输入一个非负数 a: ";  
    cin >> a;  

    if (a < 0) {  
        cout << "错误：输入的数必须是非负数。" << endl;  
        return 1;   
    }  

    double xn = a;   
    double xn1;  

    do {  
        xn1 = 0.5 * (xn + a / xn);   
        if (fabs(xn1 - xn) < 1e-5)  
            break;  
        xn = xn1;   
    } while (true);  

    cout << "平方根: " << xn1 << endl;  
    return 0;  
}