from observers import ObserverA
from observers import ObserverB
from observers import ObserverC
from subject import Subject

observer1 = ObserverA()
observer2 = ObserverB()
observer3 = ObserverC()

subject = Subject()

subject.subscribe(observer1)
subject.subscribe(observer2)
subject.subscribe(observer3)

subject.update()