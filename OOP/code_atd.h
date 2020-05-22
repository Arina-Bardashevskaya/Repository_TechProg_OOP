#pragma once
#ifndef __code_atd__
#define __code_atd__
#include <fstream>
using namespace std;


namespace simple_codes {
const int maxStringeSize = 80;	
	class code {
	public:
		char message[maxStringeSize];
		char owner[maxStringeSize];
		static  code* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; 
		virtual void Out(ofstream& ofst) = 0;   
		virtual void OutZamena(ofstream& ofst);
		virtual int MesLength() = 0;

		bool Compare(code& other);
	};
}
#endif