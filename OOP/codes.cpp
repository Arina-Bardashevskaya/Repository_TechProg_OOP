#include "zamena_atd.h"
#include "cezar_atd.h"
#include "numeric_atd.h"
#include "code_atd.h"

using namespace std;

namespace simple_codes 
{
	code* code::In(ifstream& ifst) {
		code* sp;
		int k;
		ifst >> k;
		switch (k)
		{
		case 1:
			sp = new zamena;
			break;
		case 2:
			sp = new cezar;
			break;
		case 3:
			sp = new numeric;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}

	void code::OutZamena(ofstream& ofst)
	{
		//ofst << endl;
	}

	bool code::Compare(code& other)
	{
		return MesLength() < other.MesLength();
	}
} // end simple_codes namespace
