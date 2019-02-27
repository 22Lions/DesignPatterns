#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
    public:
        virtual void notify(int) {}
};

class ObserverA : public Observer {
    public:
        void notify(int) override;
};

class ObserverB : public Observer {
    public:
        void notify(int) override;
};

class ObserverC : public Observer {
    public:
        void notify(int) override;
};

#endif