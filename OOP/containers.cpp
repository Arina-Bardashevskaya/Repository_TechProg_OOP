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
			ofst << "   Length = " << cont[i]->MesLength() << endl;
		}
	}

	void container::Sort() {
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (cont[i]->Compare(*cont[j])) {
					code* tmp = cont[i];
					cont[i] = cont[j];
					cont[j] = tmp;
				}
			}
		}
	}

	void container::OutZamena(ofstream& ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		ofst << "Only zamena's." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OutZamena(ofst);
			ofst << "   Length = " << cont[i]->MesLength() << endl;
		}
	}
}