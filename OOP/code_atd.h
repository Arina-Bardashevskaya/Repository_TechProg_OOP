#pragma once
#ifndef __code_atd__
#define __code_atd__
#include <fstream>
using namespace std;

namespace simple_codes 
{
const int MAX_STRING_SIZE = 80;	
	class code {
	public:
		char message[MAX_STRING_SIZE];
		char owner[MAX_STRING_SIZE];
		static  code* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; 
		virtual void Out(ofstream& ofst) = 0;   
		virtual void OutZamena(ofstream& ofst);
		virtual int MesLength() = 0;
		virtual void MultiMethod(code* other, ofstream& ofst) = 0;
		virtual void MMZamena(ofstream& ofst) = 0;
		virtual void MMCezar(ofstream& ofst) = 0;
		virtual void MMNumeric(ofstream& ofst) = 0;

		bool Compare(code& other);
	};
} // end simple_codes namespace
#endif