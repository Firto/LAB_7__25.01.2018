#include <iostream>
#include <string>
using namespace std;
string num_to_word(int num);
void main() {
	setlocale(LC_ALL, "Russian");
	int s;
	for (int i = 0; i < 10; i++)
	{
		s = rand() % 199 - 99;
		cout << "Num " << s << " = " << num_to_word(s) << endl;
	}
	system("pause");
}
string num_to_word(int num) {
	string nus = "";
	if (num < 0) { nus += "мiнус "; num *= -1; }
	else if (num == 0) nus += "нуль";
	if (num / 10 > 0) switch (num / 10)
	{
	case 1: 
		switch (num % 10)
		{
			case 0: nus += "дес€ть"; break;
			case 1: nus += "одинадц€ть"; break;
			case 2: nus += "дванадц€ть"; break;
			case 3: nus += "тринадц€ть"; break;
			case 4: nus += "чотирнадц€ть"; break;
			case 5: nus += "п'€тнадц€ть"; break;
			case 6: nus += "шiстнадц€ть"; break;
			case 7: nus += "сiмнадц€ть"; break;
			case 8: nus += "вiсiмнадц€ть"; break;
			case 9: nus += "дев'€тнадц€ть"; break;
		}
		break;
	case 2: nus += "двадц€ть "; break;
	case 3: nus += "тридц€ть "; break;
	case 4: nus += "сорок "; break;
	case 5: nus += "п'€дес€т "; break;
	case 6: nus += "шiздес€т "; break;
	case 7: nus += "сiмдес€т "; break;
	case 8: nus += "вiсiмдес€т "; break;
	case 9: nus += "дев'€нсто "; break;
	}
	if (num % 10 > 0 && (num / 10 > 1 || num / 10 < 1) ) {
		switch (num % 10)
		{
		case 1: nus += "один"; break;
		case 2: nus += "два"; break;
		case 3: nus += "три"; break;
		case 4: nus += "чотири"; break;
		case 5: nus += "п'€ть"; break;
		case 6: nus += "шiсть"; break;
		case 7: nus += "сiм"; break;
		case 8: nus += "вiсiм"; break;
		case 9: nus += "дев'€ть"; break;
		}
	}
	nus[0] = toupper(nus[0]);
	return nus;
}