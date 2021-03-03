#include "Cofe.h"

void Cofe::heatUp(int temperature)
{
	if (temperature < 0) {
		this->smell = " уменьшилс€";
		this->taste = " со льдом";
		this->volume *= 1.1; //∆идкости при замезании увеличивают объем
	}
	else if (temperature > 60 && temperature < 100) {
		taste+= " гор€чий";
		smell = " пахнет ещЄ сильнее";
	}
	else if (temperature > 100) {
		taste = " очень гор€чий";
		smell = " пахнет очень сильно";
		volume *= 0.6; //ѕри нагревании кофе "убежал"
	}
}
