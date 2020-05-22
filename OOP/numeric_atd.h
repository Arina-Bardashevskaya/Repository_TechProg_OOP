#pragma once
#ifndef __numeric_atd__
#define __numeric_atd__

#include "code_atd.h"
namespace simple_codes 
{
	class numeric : public code {
	public:
		int digit; 
		void InData(ifstream& ifst);  
		void Out(ofstream& ofst); 
		int MesLength();
		virtual void MultiMethod(code* other, ofstream& ofst);
		virtual void MMZamena(ofstream& ofst);
		virtual void MMCezar(ofstream& ofst);
		virtual void MMNumeric(ofstream& ofst);
		numeric() {}
	};
}  // end simple_codes namespace
#endif