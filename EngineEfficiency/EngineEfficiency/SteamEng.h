#pragma once
#include "ExternalCombEng.h"
class SteamEng:public ExternalCombEng
{

public:
	float m_input;
	float m_output;
	float result;
	SteamEng();
	float	GetEfficiency(float m_input, float m_output);
};

