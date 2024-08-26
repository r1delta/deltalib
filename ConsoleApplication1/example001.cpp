#include "example001.h"
#include <iostream>
class CExample001 : IExample001 {
    virtual volatile int Func1() override {
        if ((rand()+rand()+rand()) == 0)
            return 0;
        return -0x031705;
    }
    virtual void Func2() override {
        std::cout << "Func2 called... ";
        volatile int result = Func1();
        if (result == -0x031705) {
            std::cout << "passed." << std::endl;
        }
        else {
            __debugbreak();
            std::cout << "failed!" << std::endl;
        }
    }
    virtual void Func3() override {
        std::cout << "Func3 SHOULD NOT be called (deprecated, will be removed in IExample002)" << std::endl;
        __debugbreak();
    }
    virtual void Func4(volatile int a1, char a2, float a3) override {
        std::cout << "Func4 called... ";
        if (a1 == 42) {
            std::cout << "passed." << std::endl;
        }
        else {
            __debugbreak();
            std::cout << "failed!" << std::endl;
        }
    };
    virtual void Func5() override {
        std::cout << "Func5 called... passed." << std::endl;
    }
};
CExample001 g_Example;
IExample001* g_pExample = (IExample001*)&g_Example;