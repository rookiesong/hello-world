#ifndef UNIT_H_
#define UNIT_H_
#include<string>
#include <iomanip>
#include<iostream>
class Value_Unit
{
public:
	double value;//��ֵ
	std::string old_unit;//ԭ��λ
	std::string new_unit;//�µ�λ
	Value_Unit(){ value = 0; old_unit = "#"; new_unit = "#"; };//Ĭ�Ϲ��캯��
	Value_Unit(double newvalue,std::string newold_unit,std::string newnew_unit);
	virtual Value_Unit Converter(){ return  Value_Unit(); };
	~Value_Unit();
	friend std::ostream & operator << (std::ostream &os, const Value_Unit&test);//��<<��������أ�ʹ��ʾ���������
};

class Weight_Converter:public Value_Unit//Weight_Converter���м̳���Value_Unit,��ʾ������λת��
{
public:
	/*���ƣ�kg��ǧ�ˣ���g���ˣ���mg�����ˣ���t���֣���q����������ct����������point���֣�
	Ӣ�ƣ�lb��������oz����˾����gr�������st��Ӣʯ����dr��������
	*/
	Weight_Converter(double newvalue, std::string newold_unit, std::string newnew_unit);
	~Weight_Converter();
	virtual Value_Unit Converter();//������λת�������ǳ������Converter()����
	Weight_Converter kgToothers();//��kgת����������λ
	Weight_Converter gToothers();//��gת����������λ
	Weight_Converter mgToothers();//��mgת����������λ
	Weight_Converter tToothers();//��tת����������λ
	Weight_Converter qToothers();//��qת����������λ
	Weight_Converter ctToothers();//��ctת����������λ
	Weight_Converter pointToothers();//��pointת����������λ
	Weight_Converter lbToothers();//��lbת����������λ
	Weight_Converter ozToothers();//��ozת����������λ
	Weight_Converter grToothers();//��grת����������λ
	Weight_Converter stToothers();//��stת����������λ
	Weight_Converter drToothers();//��drת����������λ
	
};

class Temper_Converter :public Value_Unit//Temper_Converter���м̳���Value_Unit,��ʾ�¶ȵ�λת��
{
public:
	//C�����϶ȣ���F�����϶ȣ���K�������ģ���R�����϶ȣ���Re����ʽ�ȣ�
	Temper_Converter(double newvalue, std::string newold_unit, std::string newnew_unit);
	~Temper_Converter();
	virtual Value_Unit Converter();//�¶ȵ�λת�������ǳ������Converter()����
	Temper_Converter CToothers();//��Cת����������λ
	Temper_Converter FToothers();//��Fת����������λ
	Temper_Converter KToothers();//��Kת����������λ
	Temper_Converter RToothers();//��Rת����������λ
	Temper_Converter ReToothers();//��Reת����������λ
};

#endif UNIT_H_