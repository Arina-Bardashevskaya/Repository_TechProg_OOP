#pragma once
#ifndef __cezar_atd__
#define __cezar_atd__
#include "code_atd.h"
namespace simple_codes {
	class cezar : public code {
		int rot; 
	public:
		void InData(ifstream& ifst);  
		void Out(ofstream& ofst); 
		virtual void MultiMethod(code* other, ofstream& ofst);
		virtual void MMZamena(ofstream& ofst);
		virtual void MMCezar(ofstream& ofst);
		cezar() {} 
	};
}
#endif
