#include "Cofe.h"

void Cofe::heatUp(int temperature)
{
	if (temperature < 0) {
		this->smell = " ����������";
		this->taste = " �� �����";
		this->volume *= 1.1; //�������� ��� ��������� ����������� �����
	}
	else if (temperature > 60 && temperature < 100) {
		taste+= " �������";
		smell = " ������ ��� �������";
	}
	else if (temperature > 100) {
		taste = " ����� �������";
		smell = " ������ ����� ������";
		volume *= 0.6; //��� ���������� ���� "������"
	}
}
