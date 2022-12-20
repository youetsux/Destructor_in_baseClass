#pragma once
#include <iostream>
#include <string>
//�R�[�f�B���O�K��F�R�[�h���������߂̃��[���W
//���̏����c�̂Ō��߂��Ă��
using std::string;
using std::endl;
using std::cout;

class cAnimal
{
private:
	//�����̎햼
	string mName_;
	//�����K���F�v���C�x�[�g�����o�͌���_
public:
	//�R���X�g���N�^ �C�����C����`���������
	cAnimal()
		:mName_("NONE")
	{
		cout << mName_ << "���a" << endl;
	}
	cAnimal(string name)
		:mName_(name)
	{
		cout << mName_ << "���a" << endl;
	}
	//�f�X�g���N�^
	~cAnimal()
	{
		cout << "�▽���܂���" << endl;
	}
	//�햼�̃Q�b�^�[�A�Z�b�^�[
	void SetName(string name) { mName_ = name; }
	string GetName() { return(mName_); }
	//�Q�� => �����͌p�����
	virtual void Sleep() = 0;
	//�H�ׂ� => �����͌p�����
	virtual void Eat() = 0;
	//�N���� => �����͌p�����
	virtual void GetUp() = 0;
};

