#include <subject.h>
#include <observer.h>
#include <cstdlib>
#include <ctime>

void Subject::subscribe(Observer* newObserver) {
    _observers.push_back(newObserver);
}

void Subject::update() {
    srand(time(NULL));
    int num = rand() % 100;
    for (auto it = _observers.begin(); it != _observers.end(); it++) {
        (*it)->notify(num);
    }
}
