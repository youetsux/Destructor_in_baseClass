#pragma once
#include <iostream>
#include <string>
//コーディング規約：コードを書くためのルール集
//その所属団体で決められてるよ
using std::string;
using std::endl;
using std::cout;

class cAnimal
{
private:
	//動物の種名
	string mName_;
	//命名規則：プライベートメンバは後ろに_
public:
	//コンストラクタ インライン定義しちゃった
	cAnimal()
		:mName_("NONE")
	{
		cout << mName_ << "爆誕" << endl;
	}
	cAnimal(string name)
		:mName_(name)
	{
		cout << mName_ << "爆誕" << endl;
	}
	//デストラクタ
	~cAnimal()
	{
		cout << "絶命しました" << endl;
	}
	//種名のゲッター、セッター
	void SetName(string name) { mName_ = name; }
	string GetName() { return(mName_); }
	//寝る => 実装は継承先で
	virtual void Sleep() = 0;
	//食べる => 実装は継承先で
	virtual void Eat() = 0;
	//起きる => 実装は継承先で
	virtual void GetUp() = 0;
};

