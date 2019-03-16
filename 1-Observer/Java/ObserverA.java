public class ObserverA implements IObserver
{
    public void Notify(){
        System.out.println("Notifying at observer A");
    }
}