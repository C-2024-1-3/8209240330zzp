#include <iostream>  
using namespace std;  

int main() {  
    double num1, num2;
    char operation; 
    cout << "请输入第一个数字: ";  
    cin >> num1;  
    cout << "请输入运算符 (+, -, *, /, %): ";  
    cin >> operation;  
    cout << "请输入第二个数字: ";  
    cin >> num2;  
    double result;  
    switch (operation) {  
        case '+':  
            result = num1 + num2;  
            cout << "结果: " << result << endl;  
            break;  
        case '-':  
            result = num1 - num2;  
            cout << "结果: " << result << endl;  
            break;  
        case '*':  
            result = num1 * num2;  
            cout << "结果: " << result << endl;  
            break;  
        case '/':  
            if (num2 == 0) {  
                cout << "错误：除数不能为 0。" << endl;  
            } else {  
                result = num1 / num2;  
                cout << "结果: " << result << endl;  
            }  
            break;  
        case '%':  
            if (num2 == 0) {  
                cout << "错误：除数不能为 0。" << endl;  
            } else {  
                int intNum1 = static_cast<int>(num1);  
                int intNum2 = static_cast<int>(num2);  
                result = intNum1 % intNum2;  
                cout << "结果: " << result << endl;  
            }  
            break;  
        default:  
            cout << "错误：非法运算符。" << endl;  
            break;  
    }  
    return 0;  
}