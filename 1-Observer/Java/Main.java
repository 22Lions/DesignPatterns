public class Main {
    public static void main (String []args){

        ObserverA observerA = new ObserverA();
        ObserverB observerB = new ObserverB();
        ObserverC observerC = new ObserverC();

        Subject subject = new Subject();

        subject.Subscribe(observerA);
        subject.Subscribe(observerB);
        subject.Subscribe(observerC);

        subject.Updadate();

        subject.Unsubscribe(observerA);
        
        subject.Updadate();
    }
}
