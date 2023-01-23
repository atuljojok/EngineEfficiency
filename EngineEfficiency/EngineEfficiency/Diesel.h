#pragma once
#include "InternalCombEngine.h"
class Diesel:public InternalCombEngine
{
public:
	float m_input;
	float m_output;
	float result;
	Diesel();
	float	GetEfficiency(float m_input,float m_output);
};

