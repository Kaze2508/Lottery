const int partic = 128;

#include <iostream>
#include <string>
#include <vector>

int ptcp = 0;
std::vector<int>order;
std::string name[partic];

void input();
void process();
void output();

int main(int argc, char* argv[])
{
	input();
	process();
	output();
	return 0;
}

void input()
{
	do
	{
		std::cout << "Hay nhap so nguoi tham gia:\n";
		std::cin >> ptcp;
		if (ptcp > partic) std::cout << "Hay nhap lai! So nguoi tham gia khong duoc vuot qua 128\n";
	} while (ptcp > partic);
	for (int i = 0; i < ptcp; i++) std::cin >> name[i];
}

void process()
{

}

void output()
{
	for (int i = 0; i < ptcp; i++) std::cout << name[i] << std::endl;
}