//宏: 编译时加上 -D 宏名, 就相当于在代码里定义里该宏
//g++ macro.cpp -D __ED__
//./a.out   打印的是 Edward

#include <iostream> 
using std::cout;
using std::endl;

void test(){
#ifdef __ED__
    cout << "Edward" << endl;
#else
    cout << "hello" << endl;
#endif
}

int main()
{
    test();   
    return 0;
}
