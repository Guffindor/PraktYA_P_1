#include <iostream>
#include <string>


using namespace std;

wstring abc = L"абвгдежзийклмнопрстуфхцшщъыьэюя";
wstring ABC = L"АБВГДЕЖЗИЙКЛМНОПРСТУФХЦШЩЪЫЬЭЮЯ";


void fun(wchar_t s, int key, bool alpha){
	int p;
	if (alpha == 0) p = abc.find(s);
	if (alpha == 1) p = ABC.find(s);
	int c = (p + key) % abc.length();
	alpha == 0 ? wcout << abc[c] : wcout << ABC[c];
}
void funobr(wchar_t s, int key, bool alpha){
	int p;
	if (alpha == 0) p = abc.find(s);
	if (alpha == 1) p = ABC.find(s);
	int c = (abc.length() + (p - key)) % abc.length();
	alpha == 0 ? wcout << abc[c] : wcout << ABC[c];
}
int main(int argc, char **argv)
{
	int test = 0;
	bool alpha=0;
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring ws;
	int key;
	wcout << L"Введите строку: ";
	getline(wcin,ws);
	wcout << L"Введите значение ключа: ";
	wcin >> key;
	wcout << L"Что хотите сделать?? " << endl << L"1. Зашифровать строку" << endl << L"2. Расшифровать строку" << endl;
	wcin >> test;
	if (test == 1){
		for(size_t i = 0; i < ws.length(); i++){
			if(abc.find(ws[i]) != -1){
				fun(ws[i],key,0);
				continue;
			}
			if(ABC.find(ws[i]) != -1){
				fun(ws[i],key,1);
				continue;
			}
			wcout << ws[i];
		}
	}
	else if(test == 2){
		for(size_t i = 0; i < ws.length(); i++){
			if(abc.find(ws[i]) != -1){
				funobr(ws[i],key,0);
				continue;
			}
			if(ABC.find(ws[i]) != -1){
				funobr(ws[i],key,1);
				continue;
			}
			wcout << ws[i];
		}
	}
	else wcout << L"Вы что-то напутали(";

	wcout << endl;
	return 0;
}
