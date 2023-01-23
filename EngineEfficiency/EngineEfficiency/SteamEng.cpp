#include "SteamEng.h"
#include<iostream>
using namespace std;
SteamEng::SteamEng() {
	

}
float SteamEng::GetEfficiency(float m_input, float m_output) {
	float result = (m_output / m_input)*100;
	return result;
}
