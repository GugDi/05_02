#include <iostream>
using namespace std;

class TLogElement {
public:
    bool FIn1, FIn2;
    bool FRes;

    TLogElement() {}
};
class TNot : public TLogElement {
public:
    TNot() { FRes = !FIn1; }
};

class TAnd : public TLogElement {
public:
    TAnd() { FRes = FIn1 && FIn2; }
};

int main() {
    TNot elNot;
    TAnd elAnd;
    int A, B;

    cout << " A B !(A&B)" << endl;
    cout << "-------------" << endl

};
