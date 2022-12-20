
//#include "cAnimal.h"
#include "cDog.h"
#include "cParrot.h"
#include <vector>
#include <string>
#include <map>

using std::vector;
using std::string;
using std::pair;

int main() {
	//抽象クラスのインスタンスは作れない。。。
	//cAnimal *pAnimal = new cAnimal();
	vector<cAnimal *> animalList;
	vector<string> dogNames{
		                    "柴犬",
		                    "ポメラニアン",
		                    "ブルドッグ",
		                    "ゴールデンレトリバー",
		                    "マルチーズ",
		                    "コーイケルホンディエ",
		                    "バーニーズマウンテンドッグ"
	                        };
	vector<pair<string,string>> parrotName{
		                    {"ルリコンゴウインコ","ぴ－ちゃん"},
							{"モモイロインコ","さくら"},
							{"キバタン","ソラ"},
							{"オカメインコ","ルリ"},
							{"タイハクオウム","ココ"}
	                         };

}
