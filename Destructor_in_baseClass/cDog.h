#pragma once
#include "cAnimal.h"

class cDog :
    public cAnimal
{
//cAnimalクラスが全部含まれいる
public:
	cDog()
	:cAnimal() //親クラスcAnimalのコントラクタを呼ぶ
	{
		//SetName("None");
	}

	cDog(string name)
	:cAnimal(name)
	{}
	//cAnimal::Eat()と名前被り
	void Eat() override; //必ず実装しないとだめ　うちの犬はがぶがぶ食べる
	void Sleep() override; //必ず実装しないとだめ　うちの犬はすぴーすぴー寝る
	void GetUp() override; //必ず実装しないとだめ　うちの犬はがばっと起きる
	//追加されたメンバ関数
	void bark(); //barkは英語で犬が吠える
};