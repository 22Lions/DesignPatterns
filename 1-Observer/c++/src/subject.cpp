#include <subject.h>
#include <observer.h>

void Subject::subscribe(Observer* newObserver) {
    _observers.push_back(newObserver);
}

void Subject::update() {
    for (auto it = _observers.begin(); it != _observers.end(); it++) {
        (*it)->notify();
    }
}
