//函数指针

#include <iostream>
using std::cout;
using std::endl;

int add(int x, int y){
    cout << "x + y = " << x + y << endl;
    return x + y;
}

//声明一个函数指针
void test(){
    //定义一个函数指针
    int (*pfunc)(int,int);
    //绑定
    pfunc = add;
    //调用
    pfunc(6,10); //省略形式
}

//typedef:声明一类函数指针
void test2(){
    typedef int(*funcptr)(int,int);
    funcptr p1 = add;
    (*p1)(7,8); //完整形式
}

//C++11:用using声明一类函数指针
void test3(){
    using pFunc = int(*)(int,int); //C++11的语法
    pFunc p1 = add;
    p1(1,2);
}

//延迟调用的思想
void test4(){
    typedef int(*pFunc)(int,int); //函数指针只能指向固定类型的函数
    //延迟add函数的调用
    pFunc f = &add; //回调函数的注册
    f(100,200);     //回调函数的执行
}

int main(void)
{
    /* test(); */   
    /* test2(); */   
    /* test3(); */   
    test4();   
    return 0;
}
