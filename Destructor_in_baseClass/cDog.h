#pragma once
#include "cAnimal.h"

class cDog :
    public cAnimal
{
//cAnimal�N���X���S���܂܂ꂢ��
public:
	cDog()
	:cAnimal() //�e�N���XcAnimal�̃R���g���N�^���Ă�
	{
		//SetName("None");
	}

	cDog(string name)
	:cAnimal(name)
	{}
	//cAnimal::Eat()�Ɩ��O���
	void Eat() override; //�K���������Ȃ��Ƃ��߁@�����̌��͂��Ԃ��ԐH�ׂ�
	void Sleep() override; //�K���������Ȃ��Ƃ��߁@�����̌��͂��ҁ[���ҁ[�Q��
	void GetUp() override; //�K���������Ȃ��Ƃ��߁@�����̌��͂��΂��ƋN����
	//�ǉ����ꂽ�����o�֐�
	void bark(); //bark�͉p��Ō����i����
};