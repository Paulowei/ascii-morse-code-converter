
#include<set>   
#include<queue>   
#include<vector>  
#include<list>    
#include<map>  
#include<string> 
#include "Utilities.cpp"   
#include "ASCIIConverter.h" 

    ASCIIConverter::ASCIIConverter()  {
        std::set<int> notes = std::set<int>() ;
    }
   // ASCIIConverter::ASCIIConverter(ASCIIConverter& converts){
    //    std::queue<std::string> nodes = std::queue<std::string>() ;   
  //  }
std::string  ASCIIConverter::FromASCII(std::string& point) { 
    std::string notes = std::string() ;
    int spans = point.length() ; 
    std::string  insist =  reform(point,SHIFT) ;
     std::vector<std::string> gains = separate(insist,LAPSE)  ;
    int  width =  gains.size( ) ;
    for( int fd=0;fd<width;fd++){
        std::string&  voltage =  gains[fd] ;
        if(trans5.find(voltage)!=trans5.end()){
            char   equiv =  trans5.find (voltage)->second ;
            notes.append (1,equiv) ;  }   }
    return notes ;     }

std::string  ASCIIConverter::CreateASCII(std::string&  verse) {
    std::string  grace = std::string() ;    
    int serve = verse.length() ;    
    for( int sc=0;sc<serve;sc++ ){
        char  current = verse[ sc] ;
         if(trans4.find(current)==trans4.end()){continue ;}
        std::string&  parts = trans4.find(current)->second ;
         grace.append(parts) ; 
    }
    return  grace ; 
}   
//int  main(int args,char* argv[]){  
     
  //  return  1 ; 
//}

