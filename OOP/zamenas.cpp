#include "zamena_atd.h"
#include <string>

using namespace std;
const int MAX_STRING_SIZE = 80;

namespace simple_codes 
{
	void zamena::InData(ifstream& ifst)
	{
		ifst >> rule;
		ifst >> message;
		ifst >> owner;
	}

	string codingZamena(char message[MAX_STRING_SIZE], int rule)
	{
		string alf = "abcdefghijklmnopqrstuvwxyz";
		string sz1 = "zyxwvutsrqponmlkjihgfedcba";
		string sz2 = "badcfehgjilknmporqtsvuxwzy";
		string sz3 = "shifrzamenybcdgjklopqtuvwx";
		string ALF = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string SZ1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
		string SZ2 = "BADCFEHGJILKNMPORQTSVUXWZY";
		string SZ3 = "SHIFRZAMENYBCDGJKLOPQTUVWX";

		string str_mes = "";
		int i = 0;
		while ((message[i]) != '\0' && i < MAX_STRING_SIZE)
		{
			str_mes += message[i];
			i++;
		}

		for (int i = 0; i < str_mes.length(); i++) {
			int tmp = alf.find(str_mes[i]);
			if (tmp >= 0) 
			{
				if (rule == 1) 
					str_mes[i] = sz1[tmp];
				
				if (rule == 2) 
					str_mes[i] = sz2[tmp];
				
				if (rule == 3) 
					str_mes[i] = sz3[tmp];
				
			}
			tmp = ALF.find(str_mes[i]);
			if (tmp >= 0) 
			{
				if (rule == 1) 
					str_mes[i] = SZ1[tmp];
				
				if (rule == 2) 
					str_mes[i] = SZ2[tmp];
				
				if (rule == 3) 
					str_mes[i] = SZ3[tmp];
				
			}
		}
		return str_mes;
	}

	void zamena::Out(ofstream& ofst)
	{
		string rulename = "Incorrect rule number";

		if (rule == 1) rulename = "Atbash"; 
		if (rule == 2) rulename = "Pare-change"; 
		if (rule == 3) rulename = "Keyword-change"; 
		ofst << "It is Zamena: rule = " << rulename
			<< ", open = " << message
			<< ", code = " << codingZamena(message, rule)
			<< ", owner = " << owner << ". ";
	}

	void zamena::OutZamena(ofstream& ofst)
	{
		Out(ofst);
	}

	int zamena::MesLength()
	{
		int length = 0;
		while (message[length] != '\0' && length < MAX_STRING_SIZE) length++;
		return length;
	}

	void zamena::MultiMethod(code* other, ofstream& ofst)
	{
		other->MMZamena(ofst);
	}

	void zamena::MMZamena(ofstream& ofst)
	{
		ofst << "Zamena and Zamena" << endl;
	}

	void zamena::MMCezar(ofstream& ofst)
	{
		ofst << "Cezar and Zamena" << endl;
	}

	void zamena::MMNumeric(ofstream& ofst)
	{
		ofst << "Numeric and Zamena" << endl;
	}
} // end simple_codes namespace