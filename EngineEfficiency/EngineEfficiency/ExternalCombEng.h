#pragma once
#include"Engine.h"
class ExternalCombEng:public Engine
{
	public:
		float m_input;
		float m_output;
	public:
		ExternalCombEng();
		float GetEfficiency(float m_input,float m_output);
};

