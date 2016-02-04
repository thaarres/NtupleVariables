
// THIS FILE HAS BEEN GENERATED AUTOMATICALLY. DO NOT EDIT DIRECTLY, CHANGES WILL BE LOST UPON NEXT CODE GENERATION.
// Code produced by Id: CodeIt.py 494 2010-07-30 13:41:32Z svn 

#include "../include/MissingEt.h"

using namespace std;
using namespace UZH;

MissingEt::MissingEt() {
  
}


MissingEt::MissingEt( const Ntuple::MissingEtNtupleObject* ana, const Int_t idx ) 
: Basic( idx )



{
  m_ana=ana;
  // copy variables defined in Particle.h

  m_lvl    = ana->detailLevel;


  // copy rest of variables
  /*${ {AllNoBools:    printf("acc#name#\n"); if (ana->m_connectsucceeded[#index#]) 
         {printf("?\n"); m_#name# = &((*ana->#name#)[idx]);}
    else {printf("fak\n"); m_#name# = new #type#(); *m_#name# = #default#; } }}
  */
if(  ((ana->detailLevel & Ntuple::MissingEtAnalysis) == Ntuple::MissingEtAnalysis)  ) {
     if (ana->m_connectsucceeded[4]) m_corrPx = &((*ana->corrPx)[idx]); else m_corrPx = 0; 
    if (ana->m_connectsucceeded[5]) m_corrPy = &((*ana->corrPy)[idx]); else m_corrPy = 0; 
} // end of detail level Analysis

if(  ((ana->detailLevel & Ntuple::MissingEtBasic) == Ntuple::MissingEtBasic)  ) {
     if (ana->m_connectsucceeded[1]) m_et = &((*ana->et)[idx]); else m_et = 0; 
    if (ana->m_connectsucceeded[2]) m_phi = &((*ana->phi)[idx]); else m_phi = 0; 
    if (ana->m_connectsucceeded[3]) m_sumEt = &((*ana->sumEt)[idx]); else m_sumEt = 0; 
}







}


MissingEt::~MissingEt() {

}

ostream& operator<<( ostream& out,
                     const MissingEt& rhs ) {
  
   out << "MissingEt -" << ( Basic) rhs; 



  ;
if(  ((rhs.getLvl() & Ntuple::MissingEtAnalysis) == Ntuple::MissingEtAnalysis)  ) {
   out << " corrPx " << rhs.corrPx();
  out << " corrPy " << rhs.corrPy();
;
} // end of detail level Analysis

if(  ((rhs.getLvl() & Ntuple::MissingEtBasic) == Ntuple::MissingEtBasic)  ) {
   out << " et " << rhs.et();
  out << " phi " << rhs.phi();
  out << " sumEt " << rhs.sumEt();
;
}


  return out;
}












