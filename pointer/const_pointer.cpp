#include <iostream> 
using std::cout;
using std::endl;

//1.指向常量的指针
void test(){
    int a = 10, b = 20;
    const int * p = &a;

    //(1)不能通过指针修改其指向的值
    /* *p = 20; //error */  
    
    //(2)但是可以改变指针的指向
    p = &b; 
}

//2.常量指针
void test2(){
    int a = 10, b = 20;
    int * const p = &a;
    
    //(1)可以通过指针,修改其指向的变量的值
    *p = 30;
    cout << a << endl;

    //(2)但不能改变指针的指向
    /* p = &b; //error */
}

int main()
{
    test();
    test2();
    return 0;
}
