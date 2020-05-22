#pragma once
#ifndef __zamena_atd__
#define __zamena_atd__
#include "code_atd.h"

namespace simple_codes {
	class zamena : public code {
		int rule; 
	public:
		void InData(ifstream& ifst);  
		void Out(ofstream& ofst);  
		int MesLength();
		zamena() {} 
	};
}
#endif