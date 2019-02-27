#include <iostream>
#include <observer.h>
#include <subject.h>
#include <vector>

using namespace std;

int main(){

    ObserverA* observerA = new ObserverA();
    ObserverB* observerB = new ObserverB();
    ObserverC* observerC = new ObserverC();

    Subject* subject = new Subject();
    subject->subscribe(observerA);
    subject->subscribe(observerB);
    subject->subscribe(observerC);

    subject->update();

    return 0;
}