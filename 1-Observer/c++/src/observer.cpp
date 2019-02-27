#include <observer.h>
#include <iostream>

using namespace std;

void ObserverA::notify(int val) {
    cout << "Notifying at Observer A with value " << val << endl;
}

void ObserverB::notify(int val) {
    cout << "Notifying at Observer B with value " << val << endl;
}

void ObserverC::notify(int val) {
    cout << "Notifying at Observer C with value " << val << endl;
}