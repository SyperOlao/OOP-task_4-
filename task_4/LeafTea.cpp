#include "LeafTea.h"

void LeafTea::heatUp(int temperature)
{
	if (temperature < 0) {
		smell = "���";
		volume *= 1.1; //�������� ��� ��������� ����������� �����
	}
	else if (temperature > 100) {
		taste += " �������";
		smell += " ������ ��� �������";
		volume *= 0.9; //��� ���������� �������� ���������� 
	}
}
