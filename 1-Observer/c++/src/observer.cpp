#include <observer.h>
#include <iostream>

using namespace std;

void ObserverA::notify() {
    cout << "Notifying at Observer A" << endl;
}

void ObserverB::notify() {
    cout << "Notifying at Observer B" << endl;
}

void ObserverC::notify() {
    cout << "Notifying at Observer C" << endl;
}