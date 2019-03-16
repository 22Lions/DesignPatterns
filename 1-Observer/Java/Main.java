public class Main {
    public static void main (String []args){

        IObserver observerA = new ObserverA();
        IObserver observerB = new ObserverB();
        IObserver observerC = new ObserverC();

        Subject subject = new Subject();

        subject.Subscribe(observerA);
        subject.Subscribe(observerB);
        subject.Subscribe(observerC);

        subject.Updadate();

        subject.Unsubscribe(observerA);
        
        subject.Updadate();
    }
}
