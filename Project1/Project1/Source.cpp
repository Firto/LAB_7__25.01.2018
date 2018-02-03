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
	if (num < 0) { nus += "�i��� "; num *= -1; }
	else if (num == 0) nus += "����";
	if (num / 10 > 0) switch (num / 10)
	{
	case 1: 
		switch (num % 10)
		{
			case 0: nus += "������"; break;
			case 1: nus += "����������"; break;
			case 2: nus += "����������"; break;
			case 3: nus += "����������"; break;
			case 4: nus += "������������"; break;
			case 5: nus += "�'���������"; break;
			case 6: nus += "�i���������"; break;
			case 7: nus += "�i��������"; break;
			case 8: nus += "�i�i��������"; break;
			case 9: nus += "���'���������"; break;
		}
		break;
	case 2: nus += "�������� "; break;
	case 3: nus += "�������� "; break;
	case 4: nus += "����� "; break;
	case 5: nus += "�'������ "; break;
	case 6: nus += "�i������ "; break;
	case 7: nus += "�i������ "; break;
	case 8: nus += "�i�i������ "; break;
	case 9: nus += "���'����� "; break;
	}
	if (num % 10 > 0 && (num / 10 > 1 || num / 10 < 1) ) {
		switch (num % 10)
		{
		case 1: nus += "����"; break;
		case 2: nus += "���"; break;
		case 3: nus += "���"; break;
		case 4: nus += "������"; break;
		case 5: nus += "�'���"; break;
		case 6: nus += "�i���"; break;
		case 7: nus += "�i�"; break;
		case 8: nus += "�i�i�"; break;
		case 9: nus += "���'���"; break;
		}
	}
	nus[0] = toupper(nus[0]);
	return nus;
}