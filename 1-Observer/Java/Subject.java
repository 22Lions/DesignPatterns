import java.util.List;
import java.util.ArrayList;

public class Subject 
{
    private List<Observer> _observers = new ArrayList<Observer>();

    public void Subscribe(Observer obs) 
    {
        _observers.add(obs);
    }

    public void Unsubscribe(Observer obs)
    {
        _observers.remove(obs);
    }

    public void Updadate()
    {
        for (Observer obs : _observers) {
            obs.Notify();
        }
    }
}
