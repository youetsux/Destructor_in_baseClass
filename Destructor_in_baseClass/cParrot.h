#pragma once
#include "cAnimal.h"


class cParrot
	:public cAnimal
{
	//cAnimalクラスの機能は全部使える！
	string mPetName_;//種族ではなくペット名
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

	void Eat() override; //必ず実装しないとだめ　うちのオウムはピヨピヨ食べる
	void Sleep() override; //必ず実装しないとだめ　うちのオウムはコロッと寝る
	void GetUp() override; //必ず実装しないとだめ　うちのオウムはピーピー起きる
	//飛ぶ（鳥だもん）
	void Fly();
	//自分のペットネームを”しゃべり”ます
	void SayMyName();
	
};