#ifndef __container_atd__
#define __container_atd__
#include "code_atd.h"
namespace simple_codes {
	class container {
		enum { max_len = 100 }; 
		int len;
		code* cont[max_len];
	public:
		void In(ifstream& ifst);
		void Out(ofstream& ofst);
		void OutZamena(ofstream& ofst);
		void Clear();
		container();
		~container() { Clear(); } 
	};
}
#endif