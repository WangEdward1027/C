//汉字的编码
#include <iostream>
#include <string>
using std::cout;
using std::string;

int main()
{
    char ch = 'e';
    //char c = '你'; //error,一个汉字占三个字节,不能用char,只能用字符串
    string str = "你";
    
    cout << "ch = " << ch << "\n";
    cout << "str = " << str << "\n";
    return 0;
}
