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
	cout << "ピヨピヨ" << endl;
}

void cParrot::Sleep() 
{
	cout << "コロッ" << endl;
}

void cParrot::GetUp()
{
	cout << "ピーピー" << endl;
	SayMyName();
}



//飛ぶ（鳥だもん）
void cParrot::Fly()
{
	cout << "ぱたぱた(飛んでます）" << endl;
}
//自分のペットネームを”しゃべり”ます
void cParrot::SayMyName()
{
	if(mPetName_ == "NONE")
		cout << "ぴぃーぴぃー" << endl;
	else
		cout << mPetName_ << "ちゃんだよ" << endl;
}
//mainで、3種類のコンストラクタでcParrotのインスタンスを作成して
//起きて、食べて、飛んで、名前を言う