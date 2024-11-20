#include <iostream>  
#include <string>  

using namespace std;  

int main() {  
    string input;   
    cout << "请输入一行字符（按 Enter 键结束）: ";  
    getline(cin, input); 

    int letterCount = 0;   
    int spaceCount = 0; 
    int digitCount = 0;    
    int otherCount = 0;  
  
    for (char c : input) {  
        if (isalpha(c)) { 
            letterCount++;  
        } else if (isspace(c)) { 
            spaceCount++;  
        } else if (isdigit(c)) {   
            digitCount++;  
        } else {   
            otherCount++;  
        }  
    }  
    cout << "英文字母个数: " << letterCount << endl;  
    cout << "空格个数: " << spaceCount << endl;  
    cout << "数字字符个数: " << digitCount << endl;  
    cout << "其他字符个数: " << otherCount << endl;  

    return 0;  
}