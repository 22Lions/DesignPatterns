class Subject:
    observers = []

    def subscribe(self,newObserver):
        self.observers.append(newObserver)

    def unSubscribe(self,removeObserver):
        self.observers.remove(removeObserver)

    def update(self):
        for obj in self.observers:
            obj.notify()