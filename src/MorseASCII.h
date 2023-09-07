#include<vector>
#include<set>
#include<queue>
#include<ctype.h>
#include<cmath>
#include<list>
#include<vector>
#include<string> 

#include  "MorseConverter.cpp" 
 // #include  "ASCIIConverter.cpp"  


class MorseASCII {

    public : 
    MorseConverter*  conv5   =  new MorseConverter() ; 
    ASCIIConverter*  conv6 =  new ASCIIConverter( ) ;  
    
    MorseASCII() ; 
    MorseASCII(MorseASCII& equiv) ; 
        std::string MorseToASCII (std::string involve) ;
    std::string ASCIIToMorse(std::string involve)  ;

}   ;