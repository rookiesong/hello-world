#include"Unit.h"
#include<string>
#include<iostream>

Value_Unit::Value_Unit(double newvalue, std::string newold_unit, std::string newnew_unit)
{
	value = newvalue;
	old_unit = newold_unit;
	new_unit = newnew_unit;
}

Value_Unit::~Value_Unit()
{

}

std::ostream & operator << (std::ostream &os, const Value_Unit&test)
{
	os << test.old_unit << "=" << test.value << test.new_unit << std::endl;
	return os;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*ʵ��������λת��
���ƣ�kg��ǧ�ˣ���g���ˣ���mg�����ˣ���t���֣���q����������ct����������point���֣�
Ӣ�ƣ�lb��������oz����˾����gr�������st��Ӣʯ����dr��������
*/
const std::string weightunit[12] { "kg", "g", "mg", "t", "q", "ct", "point", "lb", "oz", "gr", "st", "dr" };
//kgת����������λ�Ļ�����
const double kgTog = 1000.0, kgTomg = 1000000.0, kgTot = 0.001, kgToq = 0.01, kgToct = 5000.0, kgTopoint = 500000.0, kgTolb = 2.2046226, kgTooz = 35.2739619, kgTogr = 15432.3583529, kgTost = 0.157473, kgTodr = 564.3833912;
Weight_Converter::Weight_Converter(double newvalue, std::string newold_unit, std::string newnew_unit) :Value_Unit(newvalue, newold_unit, newnew_unit)
{

}

Weight_Converter::~Weight_Converter()
{

}

Value_Unit Weight_Converter::Converter()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->old_unit)
			break;
	switch (i)
	{
	case 0:return this->kgToothers();
	case 1:return this->gToothers(); 
	case 2:return this->mgToothers(); 
	case 3:return this->tToothers(); 
	case 4:return this->qToothers(); 
	case 5:return this->ctToothers(); 
	case 6:return this->pointToothers(); 
	case 7:return this->lbToothers(); 
	case 8:return this->ozToothers(); 
	case 9:return this->grToothers(); 
	case 10:return this->stToothers(); 
	case 11:return this->drToothers(); 
	}
}

Weight_Converter Weight_Converter::kgToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 1:this->value*=kgTog ; break;
	case 2: this->value*=kgTomg ; break;
	case 3: this->value*=kgTot; break;
	case 4: this->value*=kgToq ; break;
	case 5: this->value*=kgToct ; break;
	case 6: this->value*=kgTopoint; break;
	case 7: this->value*=kgTolb ; break;
	case 8: this->value*=kgTooz ; break;
	case 9: this->value*=kgTogr ; break;
	case 10: this->value*=kgTost ; break;
	case 11: this->value*=kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::gToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTog ; break;
	case 2: this->value =this->value/ kgTog*kgTomg ; break;
	case 3: this->value =this->value/ kgTog*kgTot ; break;
	case 4: this->value =this->value/ kgTog*kgToq ; break;
	case 5: this->value =this->value/ kgTog*kgToct ; break;
	case 6: this->value =this->value/ kgTog*kgTopoint ; break;
	case 7: this->value =this->value/ kgTog*kgTolb ; break;
	case 8: this->value =this->value/ kgTog*kgTooz ; break;
	case 9: this->value =this->value/ kgTog*kgTogr ; break;
	case 10: this->value =this->value/ kgTog*kgTost ; break;
	case 11: this->value =this->value/ kgTog*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::mgToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0:this->value =this->value/ kgTomg ; break;
	case 1:this->value =this->value/ kgTomg*kgTog ; break;
	case 3:this->value =this->value/ kgTomg*kgTot ; break;
	case 4:this->value =this->value/ kgTomg*kgToq ; break;
	case 5:this->value =this->value/ kgTomg*kgToct ; break;
	case 6:this->value =this->value/ kgTomg*kgTopoint ; break;
	case 7:this->value =this->value/ kgTomg*kgTolb ; break;
	case 8:this->value =this->value/ kgTomg*kgTooz ; break;
	case 9:this->value =this->value/ kgTomg*kgTogr ; break;
	case 10:this->value =this->value/ kgTomg*kgTost ; break;
	case 11:this->value =this->value/ kgTomg*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::tToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTot ; break;
	case 1: this->value =this->value/ kgTot*kgTog ; break;
	case 2: this->value =this->value/ kgTot*kgTomg ; break;
	case 4: this->value =this->value/ kgTot*kgToq ; break;
	case 5: this->value =this->value/ kgTot*kgToct ; break;
	case 6: this->value =this->value/ kgTot*kgTopoint ; break;
	case 7: this->value =this->value/ kgTot*kgTolb ; break;
	case 8: this->value =this->value/ kgTot*kgTooz ; break;
	case 9: this->value =this->value/ kgTot*kgTogr ; break;
	case 10: this->value =this->value/ kgTot*kgTost ; break;
	case 11: this->value =this->value/ kgTot*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::qToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgToq ; break;
	case 1: this->value =this->value/ kgToq*kgTog ; break;
	case 2: this->value =this->value/ kgToq*kgTomg ; break;
	case 3: this->value =this->value/ kgToq*kgTot ; break;
	case 5: this->value =this->value/ kgToq*kgToct ; break;
	case 6: this->value =this->value/ kgToq*kgTopoint ; break;
	case 7: this->value =this->value/ kgToq*kgTolb ; break;
	case 8: this->value =this->value/ kgToq*kgTooz ; break;
	case 9: this->value =this->value/ kgToq*kgTogr ; break;
	case 10: this->value =this->value/ kgToq*kgTost ; break;
	case 11: this->value =this->value/ kgToq*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::ctToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgToct ; break;
	case 1: this->value =this->value/ kgToct*kgTog ; break;
	case 2: this->value =this->value/ kgToct*kgTomg ; break;
	case 3: this->value =this->value/ kgToct*kgTot ; break;
	case 4: this->value =this->value/ kgToct*kgToq ; break;
	case 6: this->value =this->value/ kgToct*kgTopoint ; break;
	case 7: this->value =this->value/ kgToct*kgTolb ; break;
	case 8: this->value =this->value/ kgToct*kgTooz ; break;
	case 9: this->value =this->value/ kgToct*kgTogr ; break;
	case 10: this->value =this->value/ kgToct*kgTost ; break;
	case 11: this->value =this->value/ kgToct*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::pointToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0:this->value =this->value/ kgTopoint ; break;
	case 1:this->value =this->value/ kgTopoint*kgTog ; break;
	case 2:this->value =this->value/ kgTopoint*kgTomg ; break;
	case 3:this->value =this->value/ kgTopoint*kgTot ; break;
	case 4:this->value =this->value/ kgTopoint*kgToq ; break;
	case 5:this->value =this->value/ kgTopoint*kgToct ; break;
	case 7:this->value =this->value/ kgTopoint*kgTolb ; break;
	case 8:this->value =this->value/ kgTopoint*kgTooz ; break;
	case 9:this->value =this->value/ kgTopoint*kgTogr ; break;
	case 10:this->value =this->value/ kgTopoint*kgTost ; break;
	case 11:this->value =this->value/ kgTopoint*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::lbToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0:this->value =this->value/ kgTolb ; break;
	case 1:this->value =this->value/ kgTolb*kgTog ; break;
	case 2:this->value =this->value/ kgTolb*kgTomg ; break;
	case 3:this->value =this->value/ kgTolb*kgTot ; break;
	case 4:this->value =this->value/ kgTolb*kgToq ; break;
	case 5:this->value =this->value/ kgTolb*kgToct ; break;
	case 6:this->value =this->value/ kgTolb*kgTopoint ; break;
	case 8:this->value =this->value/ kgTolb*kgTooz ; break;
	case 9:this->value =this->value/ kgTolb*kgTogr ; break;
	case 10:this->value =this->value/ kgTolb*kgTost ; break;
	case 11:this->value =this->value/ kgTolb*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::ozToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTooz ; break;
	case 1: this->value =this->value/ kgTooz*kgTog ; break;
	case 2: this->value =this->value/ kgTooz*kgTomg ; break;
	case 3: this->value =this->value/ kgTooz*kgTot ; break;
	case 4: this->value =this->value/ kgTooz*kgToq ; break;
	case 5: this->value =this->value/ kgTooz*kgToct ; break;
	case 6: this->value =this->value/ kgTooz*kgTopoint ; break;
	case 7: this->value =this->value/ kgTooz*kgTolb ; break;
	case 9: this->value =this->value/ kgTooz*kgTogr ; break;
	case 10: this->value =this->value/ kgTooz*kgTost ; break;
	case 11: this->value =this->value/ kgTooz*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::grToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTogr ; break;
	case 1: this->value =this->value/ kgTogr*kgTog ; break;
	case 2: this->value =this->value/ kgTogr*kgTomg ; break;
	case 3: this->value =this->value/ kgTogr*kgTot ; break;
	case 4: this->value =this->value/ kgTogr*kgToq ; break;
	case 5: this->value =this->value/ kgTogr*kgToct ; break;
	case 6: this->value =this->value/ kgTogr*kgTopoint ; break;
	case 7: this->value =this->value/ kgTogr*kgTolb ; break;
	case 8: this->value =this->value/ kgTogr*kgTooz ; break;
	case 10: this->value =this->value/ kgTogr*kgTost ; break;
	case 11: this->value =this->value/ kgTogr*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::stToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTost ; break;
	case 1: this->value =this->value/ kgTost*kgTog ; break;
	case 2: this->value =this->value/ kgTost*kgTomg ; break;
	case 3: this->value =this->value/ kgTost*kgTot ; break;
	case 4: this->value =this->value/ kgTost*kgToq ; break;
	case 5: this->value =this->value/ kgTost*kgToct ; break;
	case 6: this->value =this->value/ kgTost*kgTopoint ; break;
	case 7: this->value =this->value/ kgTost*kgTolb ; break;
	case 8: this->value =this->value/ kgTost*kgTooz ; break;
	case 9: this->value =this->value/ kgTost*kgTogr ; break;
	case 11: this->value =this->value/ kgTost*kgTodr ; break;
	default:
		break;
	}
	return *this;
}

Weight_Converter Weight_Converter::drToothers()
{
	int i;
	for (i = 0; i < 12; i++)
		if (weightunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value =this->value/ kgTodr ; break;
	case 1: this->value =this->value/ kgTodr*kgTog ; break;
	case 2: this->value =this->value/ kgTodr*kgTomg ; break;
	case 3: this->value =this->value/ kgTodr*kgTot ; break;
	case 4: this->value =this->value/ kgTodr*kgToq ; break;
	case 5: this->value =this->value/ kgTodr*kgToct ; break;
	case 6: this->value =this->value/ kgTodr*kgTopoint ; break;
	case 7: this->value =this->value/ kgTodr*kgTolb ; break;
	case 8: this->value =this->value/ kgTodr*kgTooz ; break;
	case 9: this->value =this->value/ kgTodr*kgTogr ; break;
	case 10: this->value =this->value/ kgTodr*kgTost ; break;
	default:
		break;
	}
	return *this;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*ʵ���¶ȵ�λת��
C�����϶ȣ���F�����϶ȣ���K�������ģ���R�����϶ȣ���Re����ʽ�ȣ�*/
const std::string temperunit[5] { "C", "F", "K", "R", "Re" };
/*�¶ȵĻ��㲻�ǳ˷�����ѭ��ع�ʽ������޻����ʣ����϶�ת����������ʽ�¶ȵĹ�ʽ���£�
���϶�	���϶�	F = C �� 1.8 + 32
���϶�	������	K = C + 273.15
���϶�	���϶�	Ra = C �� 1.8 + 32 + 459.67
���϶�	���϶�	R =C �� 0.8
*/
Temper_Converter::Temper_Converter(double newvalue, std::string newold_unit, std::string newnew_unit) :Value_Unit(newvalue, newold_unit, newnew_unit)
{

}

Temper_Converter::~Temper_Converter()
{

}

Value_Unit Temper_Converter::Converter()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->old_unit)
			break;
	switch (i)
	{
	case 0:return this->CToothers();
	case 1:return this->FToothers();
	case 2:return this->KToothers();
	case 3:return this->RToothers();
	case 4:return this->ReToothers();
	}
}

Temper_Converter Temper_Converter::CToothers()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 1:this->value = this->value*1.8+32; break;
	case 2: this->value = this->value+273.15; break;
	case 3: this->value = this->value*1.8+32+459.67; break;
	case 4: this->value = this->value*0.8; break;
	default:
		break;
	}
	return *this;
}

Temper_Converter Temper_Converter::FToothers()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value = (this->value-32)/1.8; break;
	case 2: this->value = (this->value +459.67)/1.8; break;
	case 3: this->value = this->value+459.67; break;
	case 4: this->value = (this->value-32)/2.25; break;
	default:
		break;
	}
	return *this;
}

Temper_Converter Temper_Converter::KToothers()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0:this->value = this->value-273.15; break;
	case 1:this->value = this->value*1.8-459.67; break;
	case 3:this->value = this->value*1.8; break;
	case 4:this->value = (this->value-273.15)*0.8; break;
	default:
		break;
	}
	return *this;
}

Temper_Converter Temper_Converter::RToothers()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value = (this->value-32-459.67)/1.8; break;
	case 1: this->value = this->value -459.67; break;
	case 2: this->value = this->value / 1.8; break;
	case 4: this->value = (this->value - 32 - 459.67)/2.25; break;
	default:
		break;
	}
	return *this;
}

Temper_Converter Temper_Converter::ReToothers()
{
	int i;
	for (i = 0; i < 5; i++)
		if (temperunit[i] == this->new_unit)
			break;
	switch (i)
	{
	case 0: this->value = this->value *1.25; break;
	case 1: this->value = this->value *2.25+32; break;
	case 2: this->value = this->value *1.25+273.15; break;
	case 3: this->value = this->value *2.25+32+459.67; break;
	default:
		break;
	}
	return *this;
}





