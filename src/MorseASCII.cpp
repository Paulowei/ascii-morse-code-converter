#include<list>
#include<set>
#include<map>
#include<vector>
#include<bitset>
#include<ctype.h>
#include<cmath>
#include<string>
#include "MorseASCII.h" 




std::string  MorseASCII::ASCIIToMorse(std::string  several){
        std::string  mains =  conv6->FromASCII(several) ;
        std::string voltage = conv5->CreateMorse(mains) ; 
        return voltage ;  
}  

std::string  MorseASCII::MorseToASCII(std::string several){
    std::string  mains =   conv5->FromMorse(several ) ;
    std::string  current =  conv6->CreateASCII (mains) ;
    return current ;  
}  

MorseASCII::MorseASCII(MorseASCII&   yield){
    std::list<std::set<double>> quotient = 
    std::list<std::set<double>>() ; 
}  

MorseASCII::MorseASCII(){
    std::set<std::vector<int>> links 
     = std::set<std::vector<int>>() ; 
}