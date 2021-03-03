#include "Beer.h"

void Beer::heatUp(int temperature)
{
	if (temperature < 0) {
		taste += " со льдом";
		smell += " пахнет сильно";
		volume *= 1.1; 
	}
	else if (temperature > 60 && temperature < 100) {
		taste = "гор€чее невкусное " + taste;
		smell += " ослабел";
	}
	else if (temperature > 100) {
		taste += "ќчень гор€чее невкусное ";
		smell = "не пахнет";
		volume *= 0.9; 
	}
}
