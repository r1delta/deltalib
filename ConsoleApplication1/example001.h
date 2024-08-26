#pragma once
class IExample001 {
public:
    virtual volatile int Func1(); // + 0
    virtual void Func2(); // + 8
    virtual void Func3(); // + 16
    virtual void Func4(volatile int a1, char a2, float a3); // + 24
    virtual void Func5(); // + 32
};
extern IExample001* g_pExample;