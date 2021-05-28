#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::string url = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free deb-src \n http://mirror.mephi.ru/debian/ stretch main contrib non-free deb \n http://security.debian.org/ stretch/updates main contrib non-free deb-src \n http://security.debian.org/ stretch/updates main contrib non-free deb \n http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb-src \n http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb \n http://mirror.mephi.ru/debian stretch-backports main contrib non-free deb-src \n http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
 string stroka = "mephi";
 while (true) {
	int pointer = url.find(".mephi")+1;
	if (pointer!=0) {
		url.replace(pointer,stroka.size(),"yandex");
		pointer=0;
 }
	else break;
 }
 std::cout << url << std::endl;
 return 0;
}
