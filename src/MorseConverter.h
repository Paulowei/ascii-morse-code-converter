#include<cmath>
#include<ctype.h>
#include<set>
#include<queue>
#include<map>
#include<list>
#include<vector>

class  MorseConverter {
	
	#define MORSE_LENGTH 4 ;  
//	#define SPACE  '/' ;
	#define EXPRESS ' ' ; 
	#define exposed  'v' ;
	 char SPACE =  ':' ;
	 char SPLITS =  ';' ; 
	 char GAPS = ' ' ;   
	 const std::string RANGE  =  "   " ;
	 const std::string UNIONS =  " " ; 
	public :   
	std::list<std::pair<char,std::string>>listed = 
	std::list<std::pair<char,std::string>>({{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."}
	,{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."}
		,{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},
	{'s',"...",},{'t',"-"},{'u',"..-"},{'v',"...-"},
	{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."},{'9',"----."},{'8',"---.."},{'7',"--..."}
	,{'6',"-...."},{'5',"....."},{'4',"....-"},{'3',"...--"},{'2',"..---"},{'1',".----"},{'0',"-----"},
	{'A',".-"},{'B',"-..."},{'C',"-.-."},{'D',"-.."},
	{'E',"."},{'F',"..-."},{'G',"--."},{'H',"...."},{'I',".."},{'J',".---"},{'K',"-.-"},{'L',".-.."}
		,{'M',"--"},{'N',"-."},{'O',"---"},{'P',".--."},{'Q',"--.-"},{'R',".-."},
	{'S',"...",},{'T',"-"},{'U',"..-"},{'V',"...-"},
	{'W',".--"},{'X',"-..-"},{'Y',"-.--"},{'Z',"--.."}}) ; 
	std::vector<std::pair<std::string,char>>  values = 
         std::vector<std::pair<std::string,char>> ({{".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'}
	,{".",'e'},{"..-.",'f'},{"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'}
	,{"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},{"--.-",'q'},{".-.",'r'},{"...",'s'}
	,{"-",'t'},{"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},{"-.--",'y'},{"--..",'z'},
	{"-----",'0'},{".----",'1'},{"..---",'2'},{"...--",'3'},{"....-",'4'},{".....",'5'},{"-....",'6'},
	{"--...",'7'},{"---..",'8'},{"----.",'9'}}) ; 
	MorseConverter() ;   
	MorseConverter(MorseConverter& converts)  ; 
	std::map<char,std::string> verse= std::map<char,std::string>(listed.begin(),listed.end()) ;
	std::map<std::string,char> brace= std::map<std::string,char>(values.begin(),values.end()) ;  
	//	std::vector<std::string>  divide(std::string& start,char delim )  ; 
 	std::string  FromMorse(std::string& source) ; 
	std::string  CreateMorse(std::string& source) ; 
	void  EffortParse(int below,std::string& buffer,std::string& voltage,std::list<std::string>& serial) ;  
	std::list<std::string>  TryParse(std::string& names) ;    
	// std::pair<std::string,char> buffers[] = {std::pair<std::string,int>("FG",'d')} ;
}  ;