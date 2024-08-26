#pragma once
class IExample002 {
public:
    virtual void Func4(volatile int a1, char a2, float a3); // + 24
    virtual void Func2(); // + 8
    virtual volatile int Func1(); // + 0
    virtual void Func5(); // + 32
};