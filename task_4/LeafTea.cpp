#include "LeafTea.h"

void LeafTea::heatUp(int temperature)
{
	if (temperature < 0) {
		smell = "Нет";
		volume *= 1.1; //Жидкости при замезании увеличивают объем
	}
	else if (temperature > 100) {
		taste += " горячий";
		smell += " пахнет ещё сильнее";
		volume *= 0.9; //При нагревании жидкость испаряется 
	}
}
