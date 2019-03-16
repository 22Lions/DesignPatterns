import java.util.List;
import java.util.ArrayList;

public class Subject 
{
    private List<IObserver> _observers = new ArrayList<IObserver>();

    public void Subscribe(IObserver obs) 
    {
        _observers.add(obs);
    }

    public void Unsubscribe(IObserver obs)
    {
        _observers.remove(obs);
    }

    public void Updadate()
    {
        for (IObserver obs : _observers) {
            obs.Notify();
        }
    }
}