#include<iostream>
#include<string>
#include"Unit.h"
int main()
{
	double num;
	std::string old_unit, new_unit;
	//----------------����������λת��
	std::cout << "1.����������λת������ת����λ���£�" << std::endl << "���ƣ�kg��ǧ�ˣ���g���ˣ���mg�����ˣ���t���֣���q����������point���֣�." << std::endl << "Ӣ�ƣ�lb��������oz����˾����gr�������st��Ӣʯ����dr����������ct��������." << std::endl;
	std::cout << "��������ֵ: ";
	std::cin >> num;
	std::cout << "������ɵ�λ: ";
	std::cin >> old_unit;
	std::cout << "�������µ�λ: ";
	std::cin >> new_unit;
	Weight_Converter resultone = Weight_Converter(num, old_unit, new_unit);
	resultone.Converter();
	std::cout << num << resultone;
	//-----------------�����¶ȵ�λת��
	std::cout <<std::endl<< "2.�����¶ȵ�λת������ת����λ���£�" << std::endl << "C�����϶ȣ���F�����϶ȣ���K�������ģ���R�����϶ȣ���Re����ʽ�ȣ�." << std::endl;
	std::cout << "��������ֵ: ";
	std::cin >> num;
	std::cout << "������ɵ�λ: ";
	std::cin >> old_unit;
	std::cout << "�������µ�λ: ";
	std::cin >> new_unit;
	Temper_Converter resulttwo = Temper_Converter(num, old_unit, new_unit);
	resulttwo.Converter();
	std::cout << num << resulttwo;
	return 0;
}

