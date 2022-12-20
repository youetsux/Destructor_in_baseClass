#include "cParrot.h"

//cAnimal::mName_ -> "NONE"
//cParrot::mPetName_ -> "NONE"
cParrot::cParrot()
:cAnimal(), mPetName_("None"){ }

//cAnimal::mName_ -> "species"
//cParrot::mPetName_ -> "NONE"
cParrot::cParrot(string species)
:cAnimal(species), mPetName_("NONE"){ }

//cAnimal::mName_ -> "species"
//cParrot::mPetName_ -> "petname"
cParrot::cParrot(string species, string petname)
:cAnimal(species), mPetName_(petname){ }

void cParrot::Eat() 
{
	cout << "�s���s��" << endl;
}

void cParrot::Sleep() 
{
	cout << "�R���b" << endl;
}

void cParrot::GetUp()
{
	cout << "�s�[�s�[" << endl;
	SayMyName();
}



//��ԁi��������j
void cParrot::Fly()
{
	cout << "�ς��ς�(���ł܂��j" << endl;
}
//�����̃y�b�g�l�[�����h����ׂ�h�܂�
void cParrot::SayMyName()
{
	if(mPetName_ == "NONE")
		cout << "�҂��[�҂��[" << endl;
	else
		cout << mPetName_ << "����񂾂�" << endl;
}
//main�ŁA3��ނ̃R���X�g���N�^��cParrot�̃C���X�^���X���쐬����
//�N���āA�H�ׂāA���ŁA���O������