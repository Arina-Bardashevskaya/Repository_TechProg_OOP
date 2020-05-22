#pragma once
#ifndef __cezar_atd__
#define __cezar_atd__
#include "code_atd.h"
namespace simple_codes {
	class cezar : public code {
	public:
		int rot; 
		void InData(ifstream& ifst);  
		void Out(ofstream& ofst);  
		int MesLength();
		cezar() {} 
	};
}
#endif
