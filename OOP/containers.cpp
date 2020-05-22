#include "container_atd.h"

namespace simple_codes {
	container::container() : len(0) { }
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}
	void container::In(ifstream& ifst) {
		while (!ifst.eof()) {
			if (((cont[len] = code::In(ifst)) != 0) && len < 99) {
				len++;
			}
		}
	}
	void container::Out(ofstream& ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
		}
	}

	void container::OutZamena(ofstream& ofst) {
		ofst << "Only zamena's." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OutZamena(ofst);
		}
	}
}