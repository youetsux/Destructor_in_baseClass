
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
	//���ۃN���X�̃C���X�^���X�͍��Ȃ��B�B�B
	//cAnimal *pAnimal = new cAnimal();
	vector<cAnimal *> animalList;
	vector<string> dogNames{
		                    "�Č�",
		                    "�|�����j�A��",
		                    "�u���h�b�O",
		                    "�S�[���f�����g���o�[",
		                    "�}���`�[�Y",
		                    "�R�[�C�P���z���f�B�G",
		                    "�o�[�j�[�Y�}�E���e���h�b�O"
	                        };
	vector<pair<string,string>> parrotName{
		                    {"�����R���S�E�C���R","�ҁ|�����"},
							{"�����C���C���R","������"},
							{"�L�o�^��","�\��"},
							{"�I�J���C���R","����"},
							{"�^�C�n�N�I�E��","�R�R"}
	                         };

}
