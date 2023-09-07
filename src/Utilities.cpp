#include<ctype.h> 
#include<cmath>
#include<vector>
#include<list>
#include<string>
#include<stack>
#include<queue>
#include<iostream>
 

const char TEACH = ' ' ;
const char LAPSE = '/n' ; 
std::string CREASE = " " ;
	std::vector<std::string>  divide(std::string source,char delim ) {
        	int south = 0;
		int north = 0;
		std::vector<std::string>  voltage ; 
		while(source.length()>north){
			while(north<source.length()&&source[north]!=delim){north++ ;}
		        std::string  given = source.substr(south,north-south) ;
			 voltage.insert(voltage.end(),given); 	
			while(source.length( )>north&&source[north]==delim){ north = north +1 ;  } 
			south = north  ;     	}	
			return   voltage ;
    }  

	std::vector<std::string>  separate(std::string source,int limit){
		std::vector<std::string> centre = std::vector<std::string>() ; 
		 int  shares  = source.length( ) ;
		for( int cs=0;cs<shares;cs+=limit){ 
			int lower = fmin(shares,cs+limit) ; 
			//for( int vd=cs;vd<lower;vd++	){ 
				std::string yield =  source.substr(cs,lower-cs) ; 
				centre.insert (centre.end(),yield) ; 
		//	}	
		}
	return centre ; 
	}  
	std::vector<std::string> express(std::string income,std::string spread) {
			std::vector<std::string> coils =  std::vector<std::string>() ;
			std::string parts ; 
		      // 	std::cout<<"\n"<<income<<"\n" ; 
			while(income.find(spread)!=std::string::npos){
				size_t point =  income.find(spread) ;//  std::cout<<point<<" " ; 
				parts = income.substr(0,point) ;
				income = income.substr(point+spread.size()); 
				coils.push_back(parts) ; // std::cout<<parts <<"\n" ; 
			} 
			coils.insert (coils.end(),income) ;
			//               std::cout<<"PRESENT" <<"\n" ; 
			return coils ; 
	}   
	std::vector<std::string> detach(std::string recents,char coins,int limit){
		 std::vector<std::string> lanes  ; 
		int  behind = 0 ;
		int fronts =  0 ;
		while(fronts<recents.size( )){
			while(recents.length()>fronts&&recents[fronts]!=coins){fronts++ ; }  
			int marks = fronts ; 
			 while(fronts<recents.length()&&recents[fronts]==coins){fronts++ ; }
			 if(fronts-marks>=limit||fronts==recents.size()){
				std::string  known =   recents.substr(behind,marks-behind) ; 
				lanes.insert(lanes.end(),known) ;    
			  behind =  fronts ; }
		}  
		return lanes ; 
	}     
	std::string reform (std::string incline,char greek){
		int  height = incline.length() ; 
		int  rPtr = height-1 ;
		int lPtr = 0 ; 
		while(rPtr>=0&&incline[rPtr]==greek){rPtr-- ; } 
		while(lPtr<rPtr&&incline [lPtr]==greek){lPtr++ ; }
		std::string  means = incline.substr(lPtr,rPtr-lPtr+1) ; 
		return  means ; 
	}            
	std::vector<std::string> filter( std::vector<std::string> cases){
		std::vector<std::string>   names  ;
		int  reach= cases.size()  ; 
		for(int vs = 0 ;vs<reach;vs++){
			std::string yield =  
			 reform(cases[vs],TEACH) ;
			names.insert(names.end(),yield )  ; 
		} 
		return names  ;
	}  
		/** 
	 * std::vector<std::string> MorseConverter::divide(std::string&  source,char delim){	
		int south = 0;
		int north = 0;
		std::vector<std::string>  voltage ; 
		while(source.length()>north){
			while(north<source.length()&&source[north]!=delim){north++ ;}
		        std::string  given = source.substr(south,north-south) ;
			 voltage.insert(voltage.end(),given); 	
			 north = north +1 ; 
			south = north  ;  
			}	
		return  voltage ; 
	}
	*/