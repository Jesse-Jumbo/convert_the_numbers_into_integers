#if 1
#include <iostream>				           /*cin�Bcout*/ 
#include <string>					       /*string, .c_str()*/ 
#include <sstream>					       /*stringstream*/
#include <vector>					       /*vector, .reserve(), resize()*/
#include <cstdlib>                         /*atoi*/ 

using namespace std;				       /*�ٲ���std*/ 

int main()
{
	
	vector<string> res;				       /*�ŧi�@�Ӧr��e���A�ΨӦs��̲פ��Ϋ᪺���e*/ 
    string base_of_res;				       /*�ŧi�@�Ӧr��A�Ψӿ�J��l���e*/ 
    string input_words;				       /*�ŧi�@�Ӧr��A�ΨӼȦsŪ���쪺��l���e�A�ÿ�J��res��*/ 
    int number_of_res;                     /*�ŧi�@�Ӿ�ơA�ΨӼȦsres�̪��Ʀr�A�ÿ�J��integer*/ 
	vector<int> integer;                   /*�ŧi�@�Ӿ�Ʈe���A�Ω��X number_of_res*11�����e*/ 
    
	getline(cin, base_of_res);		       /*Ū����J�����r��bbase_of_res*/ 
    stringstream input(base_of_res);       /*��input�ŧi���@��stringstream�����i�H�Χ@��X�M��J,�A��base_of_res���r�Ŧ�Ū���iinput*/ 
    
	res.reserve(20);				       /*��e�����e�q��l��20�ӪŶ��A�Yn<20�A�]���W�[�����An>20�h�|�A���s���t�x�s�Ŷ�res>=n*/ 
    
	while(input>>input_words)		       /*��ڧ�input��J��input_words��(�o�O�֩w�y)*/ 
    {
       	res.push_back(input_words); 	   /*��r��input_words��i�e�����̫�*/ 
	} 
	
    if(res.size()>20){					   /*�p�Gres.size() > 20*/
    	res.resize(20);					   /*resize the res.size() = 20*/
	}
	
  	for(int i =0;i<res.size();i++){        /*�Ыؤ@��for�j��(�_�I�A���I����A�U�@�����j��n������)*/
    number_of_res = atoi(res[i].c_str());  /*number��atoi�Nres����number���ܬ�integer*//*�Nstring res[i]�ǥ�c_str����atio(const char * str)*/ 
    integer.push_back(number_of_res);      /*�Nnumber��J��integer���̫�*/ 
	cout<<integer[i] * 11<<endl;    	   /*�L�Xinteger��[i]����11�ô���*/ 
    }
      
	return 0;                              /*�����{���A��^�@��int*/
}
#endif
#if 0
#endif
