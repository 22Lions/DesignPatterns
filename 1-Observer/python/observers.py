class Observer:
	def notify(self):
		print('Notifying at class Observer')

class ObserverA(Observer):
	def notify(self):
		print('Notifying at class Observer A')

class ObserverB(Observer):
	def notify(self):
		print('Notifying at class Observer B')

class ObserverC(Observer):
	def notify(self):
		print('Notifying at class Observer C')		