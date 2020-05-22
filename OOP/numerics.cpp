#include "numeric_atd.h"
#include <string>
using namespace std;
namespace simple_codes {

	void numeric::InData(ifstream& ifst)
	{
		ifst >> digit;
		ifst >> message;
		ifst >> owner;
	}
} 

using namespace std;
const int maxStringeSize = 80;

namespace simple_codes {
	string codingNumeric(char message[maxStringeSize], int digit)
	{
		string alf = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy";
		string str_mes = "";
		int i = 0;
		while ((message[i]) != '\0' && i < maxStringeSize)
		{
			str_mes += message[i];
			i++;
		}
		string str_result = "";
		for (int i = 0; i < str_mes.length(); i++)
		{
			int tmp = alf.find(tolower(str_mes[i]));
			if (tmp >= 0)
				str_result += to_string((tmp + (digit % 26)) % 26);
			else
				str_result += str_mes[i];
		}
		return str_result;
	}
}

namespace simple_codes {

	void numeric::Out(ofstream& ofst)
	{
		ofst << "It is Numeric: digit = " << digit
			<< ", open = " << message
			<< ", code = " << codingNumeric(message, digit)
			<< ", owner = " << owner << ". ";
	}
}

namespace simple_codes {
	int numeric::MesLength()
	{
		int length = 0;
		while (message[length] != '\0' && length < maxStringeSize) length++;
		return length;
	}
}