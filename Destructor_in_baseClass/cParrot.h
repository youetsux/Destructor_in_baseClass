#pragma once
#include "cAnimal.h"


class cParrot
	:public cAnimal
{
	//cAnimal�N���X�̋@�\�͑S���g����I
	string mPetName_;//�푰�ł͂Ȃ��y�b�g��
public:
	//cAnimal::mName_ -> "NONE"
	//cParrot::mPetName_ -> "NONE"
	cParrot();
	//cAnimal::mName_ -> "species"
	//cParrot::mPetName_ -> "NONE"
	cParrot(string species);
	//cAnimal::mName_ -> "species"
	//cParrot::mPetName_ -> "petname"
	cParrot(string species, string petname);
	void SetPetName(string pname){ mPetName_ = pname; }
	string GetPetName(){ return(mPetName_); }

	void Eat() override; //�K���������Ȃ��Ƃ��߁@�����̃I�E���̓s���s���H�ׂ�
	void Sleep() override; //�K���������Ȃ��Ƃ��߁@�����̃I�E���̓R���b�ƐQ��
	void GetUp() override; //�K���������Ȃ��Ƃ��߁@�����̃I�E���̓s�[�s�[�N����
	//��ԁi��������j
	void Fly();
	//�����̃y�b�g�l�[�����h����ׂ�h�܂�
	void SayMyName();
	
};