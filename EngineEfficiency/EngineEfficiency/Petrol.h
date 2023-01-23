#pragma once
#include "InternalCombEngine.h"
class Petrol :public InternalCombEngine
{
public:
	float m_input;
	float m_output;
	Petrol();
	float	GetEfficiency(float m_input,float m_output);
};



