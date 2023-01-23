#include "Diesel.h"
Diesel::Diesel() {
	

}
float Diesel::GetEfficiency(float m_input, float m_output) {
	float result= (m_output / m_input) * 100;
	return  result;

}
