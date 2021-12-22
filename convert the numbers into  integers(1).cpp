#if 1
#include <iostream>				           /*cin、cout*/ 
#include <string>					       /*string, .c_str()*/ 
#include <sstream>					       /*stringstream*/
#include <vector>					       /*vector, .reserve(), resize()*/
#include <cstdlib>                         /*atoi*/ 

using namespace std;				       /*省略打std*/ 

int main()
{
	
	vector<string> res;				       /*宣告一個字串容器，用來存放最終分割後的內容*/ 
    string base_of_res;				       /*宣告一個字串，用來輸入原始內容*/ 
    string input_words;				       /*宣告一個字串，用來暫存讀取到的原始內容，並輸入到res內*/ 
    int number_of_res;                     /*宣告一個整數，用來暫存res裡的數字，並輸入到integer*/ 
	vector<int> integer;                   /*宣告一個整數容器，用於輸出 number_of_res*11的內容*/ 
    
	getline(cin, base_of_res);		       /*讀取輸入的整行字串在base_of_res*/ 
    stringstream input(base_of_res);       /*把input宣告成一個stringstream讓它可以用作輸出和輸入,再把base_of_res的字符串讀取進input*/ 
    
	res.reserve(20);				       /*把容器的容量初始化20個空間，若n<20，也不增加元素，n>20則會再重新分配儲存空間res>=n*/ 
    
	while(input>>input_words)		       /*當我把input輸入到input_words中(這是肯定句)*/ 
    {
       	res.push_back(input_words); 	   /*把字串input_words放進容器的最後*/ 
	} 
	
    if(res.size()>20){					   /*如果res.size() > 20*/
    	res.resize(20);					   /*resize the res.size() = 20*/
	}
	
  	for(int i =0;i<res.size();i++){        /*創建一個for迴圈(起點，終點條件，下一次的迴圈要做的事)*/
    number_of_res = atoi(res[i].c_str());  /*number用atoi將res內的number轉變為integer*//*將string res[i]藉由c_str滿足atio(const char * str)*/ 
    integer.push_back(number_of_res);      /*將number輸入到integer的最後*/ 
	cout<<integer[i] * 11<<endl;    	   /*印出integer的[i]項乘11並換行*/ 
    }
      
	return 0;                              /*結束程式，返回一個int*/
}
#endif
#if 0
#endif
