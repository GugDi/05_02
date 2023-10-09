#include <iostream>
using namespace std;

int main() {};
class TLogElement {
public:
    bool FIn1, FIn2;
    bool FRes;

    TLogElement() {}
};
class TNot : public TLogElement {};
class TAnd : public TLogElement {};
