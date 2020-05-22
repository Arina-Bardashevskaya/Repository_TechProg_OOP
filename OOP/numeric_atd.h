#pragma once
#ifndef __numeric_atd__
#define __numeric_atd__
#include "code_atd.h"
namespace simple_codes {
	class numeric : public code {
		int digit;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		numeric() {} 
	};
} // end simple_codes namespace
#endif
