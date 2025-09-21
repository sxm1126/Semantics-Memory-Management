#include <iostream>
#include <memory>
using namespace std;

int main() {
    int* p = new int(42);
    cout << "Manual pointer value = " << *p << endl;
    delete p;

    auto sp = make_unique<int>(99);
    cout << "Smart pointer value = " << *sp << endl;

    return 0;
}
