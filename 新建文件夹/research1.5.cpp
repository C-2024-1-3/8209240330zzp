#include <iostream>  
#include <iomanip> // 用于设置精度  
using namespace std;  

int main() {  
    double fahrenheit; // 定义变量来存储华氏温度  
    cout << "请输入华氏温度: ";  
    cin >> fahrenheit; // 读取用户输入的华氏温度  

    // 温度转换公式：摄氏温度 = (华氏温度 - 32) * 5 / 9  
    double celsius = (fahrenheit - 32) * 5 / 9;  

    // 输出结果，保留两位小数  
    cout << "转换后的摄氏温度为: " << fixed << setprecision(2) << celsius << " °C" << endl;  

    return 0;  
}