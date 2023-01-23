#include "InternalCombEngine.h"
InternalCombEngine::InternalCombEngine()
{
	
	
	

}
float InternalCombEngine::GetEfficiency(float m_input,float m_output)
{ 
	float result = (m_output / m_input )* 100;
	return result;
}