const int partic = 128;

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

//khai báo biến tại đây  
int ptcp = 0, number =0,fp=0,sp=0;
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
	for (int i = 0; i <= ptcp; i++) getline(std::cin, name[i]);
}

void process()
{
	std::cout << "Hay chon la phieu dau tien: " << std::endl;
	for (int i = 1; i <= (ptcp); i++) std::cout << " " << i;
	printf("\n");
	std::cin >> number;
	fp= rand() % (ptcp+1) + 1;
	std::cout << "Nguoi dau tien khai mac league se la " << name[fp-1] << std::endl;
	std::cout << "Hay chon la phieu cho nguoi thu hai: " << std::endl;
	for (int i = 1; i <= (ptcp); i++)
	{
		if (i == number) continue;
		std::cout << " " << i;
	}
	do
	{
		sp = rand() % (ptcp + 1) + 1;
	} while (sp == fp);
	std::cout << "Nguoi dau tien khai mac league se la " << name[fp - 1] << std::endl;
}

void output()
{
	for (int i = 0; i <= ptcp; i++) std::cout << name[i] << std::endl;
}