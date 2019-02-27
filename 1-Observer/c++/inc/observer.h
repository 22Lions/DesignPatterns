#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
    public:
        virtual void notify() {}
};

class ObserverA : public Observer {
    public:
        void notify() override;
};

class ObserverB : public Observer {
    public:
        void notify() override;
};

class ObserverC : public Observer {
    public:
        void notify() override;
};

#endif