#pragma once
#include "Engine.h"
class InternalCombEngine:public Engine

{
public:
	float m_input;
	float m_output;
public:
	InternalCombEngine();

	float GetEfficiency(float m_input,float m_output);
};
