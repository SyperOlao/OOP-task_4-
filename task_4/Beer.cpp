#include "Beer.h"

void Beer::heatUp(int temperature)
{
	if (temperature < 0) {
		taste += " �� �����";
		smell += " ������ ������";
		volume *= 1.1; 
	}
	else if (temperature > 60 && temperature < 100) {
		taste = "������� ��������� " + taste;
		smell += " �������";
	}
	else if (temperature > 100) {
		taste += "����� ������� ��������� ";
		smell = "�� ������";
		volume *= 0.9; 
	}
}
