#ifndef SUBJECT
#define SUBJECT

#include <iostream> 
#include <list>
#include <observer.h>

using namespace std;

class Subject {

    list<Observer*> _observers;   

    public:
        void update();
        void subscribe(Observer* newObserver);
};

#endif //SUBJECT