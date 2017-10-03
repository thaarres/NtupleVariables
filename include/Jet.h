
// THIS FILE HAS BEEN GENERATED AUTOMATICALLY. DO NOT EDIT DIRECTLY, CHANGES WILL BE LOST UPON NEXT CODE GENERATION.
// Code produced by Id: CodeIt.py 494 2010-07-30 13:41:32Z svn 

#ifndef __UZHTOP_Jet_H__
#define __UZHTOP_Jet_H__

#include <cmath>
#include "Particle.h"
#include <vector>
#include "JetNtupleObject.h"



namespace Ntuple {
  class JetNtupleObject;
}

namespace UZH {
  
  /**
   *  @short Class that maps JetNtupleObjects to Jet Particle class
   *
   *         This class can be used to map the offline Jet information from
   *         JetNtupleObjects to UZH::Jet class. All particles inherit 
   *         from UZH::Particle.
   *
   * @author Code produced by Id: CodeIt.py 494 2010-07-30 13:41:32Z svn 
   *
   */

  class Jet : public Basic 
 , public Particle 
  {
  public:

    /// default c'tor
    Jet();
    /// default d'tor
    ~Jet();
    
    /// c'tor with index
    Jet( const Ntuple::JetNtupleObject* ana, const Int_t idx );

    TLorentzVector* getTLV() const;
    TLorentzVector tlv() const;


    
    // variable definitions
    float puppi_softdropmass;
    float puppi_tau1;
    float puppi_tau2;
    float puppi_tau3;
    float highestSubJetCSV;

    bool            m_isTagged; ///< user-level flag to indicate b-tag


    floatingnumber  m_scalefactor; ///< scale factor for JES shifts (0 for nominal JES)

    bool m_IDLoose;
    bool m_IDTight;
    floatingnumber* m_jec;
    floatingnumber* m_jecUp;
    floatingnumber* m_jecDown;
    floatingnumber* m_muf;
    floatingnumber* m_phf;
    floatingnumber* m_emf;
    floatingnumber* m_nhf;
    floatingnumber* m_chf;
    floatingnumber* m_area;
    int* m_cm;
    int* m_nm;
    floatingnumber* m_che;
    floatingnumber* m_ne;
    floatingnumber* m_hf_hf;
    floatingnumber* m_hf_emf;
    floatingnumber* m_hof;
    int* m_chm;
    int* m_neHadMult;
    int* m_phoMult;
    floatingnumber* m_nemf;
    floatingnumber* m_cemf;
    floatingnumber* m_csv;
    int* m_charge;
    int* m_subjet_pruned_N;
    std::vector<floatingnumber>* m_subjet_pruned_pt;
    std::vector<floatingnumber>* m_subjet_pruned_eta;
    std::vector<floatingnumber>* m_subjet_pruned_phi;
    std::vector<floatingnumber>* m_subjet_pruned_e;
    std::vector<floatingnumber>* m_subjet_pruned_m;
    std::vector<floatingnumber>* m_subjet_pruned_csv;
    std::vector<int>* m_subjet_pruned_charge;
    std::vector<int>* m_subjet_pruned_partonFlavour;
    std::vector<int>* m_subjet_pruned_hadronFlavour;
    std::vector<int>* m_subjet_pruned_genParton_pdgID;
    std::vector<int>* m_subjet_pruned_nbHadrons;
    std::vector<int>* m_subjet_pruned_ncHadrons;
    int* m_subjet_softdrop_N;
    std::vector<floatingnumber>* m_subjet_softdrop_pt;
    std::vector<floatingnumber>* m_subjet_softdrop_eta;
    std::vector<floatingnumber>* m_subjet_softdrop_phi;
    std::vector<floatingnumber>* m_subjet_softdrop_e;
    std::vector<floatingnumber>* m_subjet_softdrop_m;
    std::vector<floatingnumber>* m_subjet_softdrop_csv;
    std::vector<int>* m_subjet_softdrop_charge;
    std::vector<int>* m_subjet_softdrop_partonFlavour;
    std::vector<int>* m_subjet_softdrop_hadronFlavour;
    std::vector<int>* m_subjet_softdrop_genParton_pdgID;
    std::vector<int>* m_subjet_softdrop_nbHadrons;
    std::vector<int>* m_subjet_softdrop_ncHadrons;
    floatingnumber* m_tau1;
    floatingnumber* m_tau2;
    floatingnumber* m_tau3;
    floatingnumber* m_pruned_mass;
    floatingnumber* m_pruned_massCorr;
    floatingnumber* m_softdrop_mass;
    floatingnumber* m_softdrop_massCorr;
    floatingnumber* m_pruned_jec;
    floatingnumber* m_pruned_jecUp;
    floatingnumber* m_pruned_jecDown;
    floatingnumber* m_softdrop_jec;
    int* m_partonFlavour;
    int* m_hadronFlavour;
    int* m_genParton_pdgID;
    int* m_nbHadrons;
    int* m_ncHadrons;
    floatingnumber* m_prunedmass;
    floatingnumber* m_softdropmass;





    void           setTagged( const bool isTagged = true ) { m_isTagged = isTagged; }
    bool           isTagged() const { return m_isTagged; }


    floatingnumber getJetSF() const { return m_scalefactor; }
    void           scaleJES( const floatingnumber scale);


    // check level given here must be consistent with ...NtupleObject.cxx, otherwise you'll get a segfault
    bool IDLoose() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kIDLoose)) std::cout<<"IDLoose not connected!"<<std::endl;*/ return (m_IDLoose); } 
    bool IDTight() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kIDTight)) std::cout<<"IDTight not connected!"<<std::endl;*/ return (m_IDTight); } 
    floatingnumber jec() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kjec)) std::cout<<"jec not connected!"<<std::endl;*/ return *(m_jec); } 
    floatingnumber jecUp() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kjecUp)) std::cout<<"jecUp not connected!"<<std::endl;*/ return *(m_jecUp); } 
    floatingnumber jecDown() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kjecDown)) std::cout<<"jecDown not connected!"<<std::endl;*/ return *(m_jecDown); } 
    floatingnumber muf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kmuf)) std::cout<<"muf not connected!"<<std::endl;*/ return *(m_muf); } 
    floatingnumber phf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kphf)) std::cout<<"phf not connected!"<<std::endl;*/ return *(m_phf); } 
    floatingnumber emf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kemf)) std::cout<<"emf not connected!"<<std::endl;*/ return *(m_emf); } 
    floatingnumber nhf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::knhf)) std::cout<<"nhf not connected!"<<std::endl;*/ return *(m_nhf); } 
    floatingnumber chf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kchf)) std::cout<<"chf not connected!"<<std::endl;*/ return *(m_chf); } 
    floatingnumber area() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::karea)) std::cout<<"area not connected!"<<std::endl;*/ return *(m_area); } 
    int cm() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kcm)) std::cout<<"cm not connected!"<<std::endl;*/ return *(m_cm); } 
    int nm() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::knm)) std::cout<<"nm not connected!"<<std::endl;*/ return *(m_nm); } 
    floatingnumber che() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kche)) std::cout<<"che not connected!"<<std::endl;*/ return *(m_che); } 
    floatingnumber ne() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kne)) std::cout<<"ne not connected!"<<std::endl;*/ return *(m_ne); } 
    floatingnumber hf_hf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::khf_hf)) std::cout<<"hf_hf not connected!"<<std::endl;*/ return *(m_hf_hf); } 
    floatingnumber hf_emf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::khf_emf)) std::cout<<"hf_emf not connected!"<<std::endl;*/ return *(m_hf_emf); } 
    floatingnumber hof() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::khof)) std::cout<<"hof not connected!"<<std::endl;*/ return *(m_hof); } 
    int chm() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kchm)) std::cout<<"chm not connected!"<<std::endl;*/ return *(m_chm); } 
    int neHadMult() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kneHadMult)) std::cout<<"neHadMult not connected!"<<std::endl;*/ return *(m_neHadMult); } 
    int phoMult() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kphoMult)) std::cout<<"phoMult not connected!"<<std::endl;*/ return *(m_phoMult); } 
    floatingnumber nemf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::knemf)) std::cout<<"nemf not connected!"<<std::endl;*/ return *(m_nemf); } 
    floatingnumber cemf() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kcemf)) std::cout<<"cemf not connected!"<<std::endl;*/ return *(m_cemf); } 
    floatingnumber csv() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kcsv)) std::cout<<"csv not connected!"<<std::endl;*/ return *(m_csv); } 
    int charge() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kcharge)) std::cout<<"charge not connected!"<<std::endl;*/ return *(m_charge); } 
    int subjet_pruned_N() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_N)) std::cout<<"subjet_pruned_N not connected!"<<std::endl;*/ return *(m_subjet_pruned_N); } 
    std::vector<floatingnumber> subjet_pruned_pt() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_pt)) std::cout<<"subjet_pruned_pt not connected!"<<std::endl;*/ return *(m_subjet_pruned_pt); } 
    std::vector<floatingnumber> subjet_pruned_eta() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_eta)) std::cout<<"subjet_pruned_eta not connected!"<<std::endl;*/ return *(m_subjet_pruned_eta); } 
    std::vector<floatingnumber> subjet_pruned_phi() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_phi)) std::cout<<"subjet_pruned_phi not connected!"<<std::endl;*/ return *(m_subjet_pruned_phi); } 
    std::vector<floatingnumber> subjet_pruned_e() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_e)) std::cout<<"subjet_pruned_e not connected!"<<std::endl;*/ return *(m_subjet_pruned_e); } 
    std::vector<floatingnumber> subjet_pruned_m() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_m)) std::cout<<"subjet_pruned_m not connected!"<<std::endl;*/ return *(m_subjet_pruned_m); } 
    std::vector<floatingnumber> subjet_pruned_csv() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_csv)) std::cout<<"subjet_pruned_csv not connected!"<<std::endl;*/ return *(m_subjet_pruned_csv); } 
    std::vector<int> subjet_pruned_charge() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_charge)) std::cout<<"subjet_pruned_charge not connected!"<<std::endl;*/ return *(m_subjet_pruned_charge); } 
    std::vector<int> subjet_pruned_partonFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_partonFlavour)) std::cout<<"subjet_pruned_partonFlavour not connected!"<<std::endl;*/ return *(m_subjet_pruned_partonFlavour); } 
    std::vector<int> subjet_pruned_hadronFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_hadronFlavour)) std::cout<<"subjet_pruned_hadronFlavour not connected!"<<std::endl;*/ return *(m_subjet_pruned_hadronFlavour); } 
    std::vector<int> subjet_pruned_genParton_pdgID() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_genParton_pdgID)) std::cout<<"subjet_pruned_genParton_pdgID not connected!"<<std::endl;*/ return *(m_subjet_pruned_genParton_pdgID); } 
    std::vector<int> subjet_pruned_nbHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_nbHadrons)) std::cout<<"subjet_pruned_nbHadrons not connected!"<<std::endl;*/ return *(m_subjet_pruned_nbHadrons); } 
    std::vector<int> subjet_pruned_ncHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_pruned_ncHadrons)) std::cout<<"subjet_pruned_ncHadrons not connected!"<<std::endl;*/ return *(m_subjet_pruned_ncHadrons); } 
    int subjet_softdrop_N() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_N)) std::cout<<"subjet_softdrop_N not connected!"<<std::endl;*/ return *(m_subjet_softdrop_N); } 
    std::vector<floatingnumber> subjet_softdrop_pt() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_pt)) std::cout<<"subjet_softdrop_pt not connected!"<<std::endl;*/ return *(m_subjet_softdrop_pt); } 
    std::vector<floatingnumber> subjet_softdrop_eta() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_eta)) std::cout<<"subjet_softdrop_eta not connected!"<<std::endl;*/ return *(m_subjet_softdrop_eta); } 
    std::vector<floatingnumber> subjet_softdrop_phi() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_phi)) std::cout<<"subjet_softdrop_phi not connected!"<<std::endl;*/ return *(m_subjet_softdrop_phi); } 
    std::vector<floatingnumber> subjet_softdrop_e() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_e)) std::cout<<"subjet_softdrop_e not connected!"<<std::endl;*/ return *(m_subjet_softdrop_e); } 
    std::vector<floatingnumber> subjet_softdrop_m() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_m)) std::cout<<"subjet_softdrop_m not connected!"<<std::endl;*/ return *(m_subjet_softdrop_m); } 
    std::vector<floatingnumber> subjet_softdrop_csv() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_csv)) std::cout<<"subjet_softdrop_csv not connected!"<<std::endl;*/ return *(m_subjet_softdrop_csv); } 
    std::vector<int> subjet_softdrop_charge() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_charge)) std::cout<<"subjet_softdrop_charge not connected!"<<std::endl;*/ return *(m_subjet_softdrop_charge); } 
    std::vector<int> subjet_softdrop_partonFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_partonFlavour)) std::cout<<"subjet_softdrop_partonFlavour not connected!"<<std::endl;*/ return *(m_subjet_softdrop_partonFlavour); } 
    std::vector<int> subjet_softdrop_hadronFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_hadronFlavour)) std::cout<<"subjet_softdrop_hadronFlavour not connected!"<<std::endl;*/ return *(m_subjet_softdrop_hadronFlavour); } 
    std::vector<int> subjet_softdrop_genParton_pdgID() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_genParton_pdgID)) std::cout<<"subjet_softdrop_genParton_pdgID not connected!"<<std::endl;*/ return *(m_subjet_softdrop_genParton_pdgID); } 
    std::vector<int> subjet_softdrop_nbHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_nbHadrons)) std::cout<<"subjet_softdrop_nbHadrons not connected!"<<std::endl;*/ return *(m_subjet_softdrop_nbHadrons); } 
    std::vector<int> subjet_softdrop_ncHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksubjet_softdrop_ncHadrons)) std::cout<<"subjet_softdrop_ncHadrons not connected!"<<std::endl;*/ return *(m_subjet_softdrop_ncHadrons); } 
    floatingnumber tau1() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ktau1)) std::cout<<"tau1 not connected!"<<std::endl;*/ return *(m_tau1); } 
    floatingnumber tau2() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ktau2)) std::cout<<"tau2 not connected!"<<std::endl;*/ return *(m_tau2); } 
    floatingnumber tau3() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ktau3)) std::cout<<"tau3 not connected!"<<std::endl;*/ return *(m_tau3); } 
    floatingnumber pruned_mass() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpruned_mass)) std::cout<<"pruned_mass not connected!"<<std::endl;*/ return *(m_pruned_mass); } 
    floatingnumber pruned_massCorr() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpruned_massCorr)) std::cout<<"pruned_massCorr not connected!"<<std::endl;*/ return *(m_pruned_massCorr); } 
    floatingnumber softdrop_mass() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksoftdrop_mass)) std::cout<<"softdrop_mass not connected!"<<std::endl;*/ return *(m_softdrop_mass); } 
    floatingnumber softdrop_massCorr() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksoftdrop_massCorr)) std::cout<<"softdrop_massCorr not connected!"<<std::endl;*/ return *(m_softdrop_massCorr); } 
    floatingnumber pruned_jec() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpruned_jec)) std::cout<<"pruned_jec not connected!"<<std::endl;*/ return *(m_pruned_jec); } 
    floatingnumber pruned_jecUp() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpruned_jecUp)) std::cout<<"pruned_jecUp not connected!"<<std::endl;*/ return *(m_pruned_jecUp); } 
    floatingnumber pruned_jecDown() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpruned_jecDown)) std::cout<<"pruned_jecDown not connected!"<<std::endl;*/ return *(m_pruned_jecDown); } 
    floatingnumber softdrop_jec() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksoftdrop_jec)) std::cout<<"softdrop_jec not connected!"<<std::endl;*/ return *(m_softdrop_jec); } 
    int partonFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kpartonFlavour)) std::cout<<"partonFlavour not connected!"<<std::endl;*/ return *(m_partonFlavour); } 
    int hadronFlavour() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::khadronFlavour)) std::cout<<"hadronFlavour not connected!"<<std::endl;*/ return *(m_hadronFlavour); } 
    int genParton_pdgID() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kgenParton_pdgID)) std::cout<<"genParton_pdgID not connected!"<<std::endl;*/ return *(m_genParton_pdgID); } 
    int nbHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::knbHadrons)) std::cout<<"nbHadrons not connected!"<<std::endl;*/ return *(m_nbHadrons); } 
    int ncHadrons() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kncHadrons)) std::cout<<"ncHadrons not connected!"<<std::endl;*/ return *(m_ncHadrons); } 
    floatingnumber prunedmass() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::kprunedmass)) std::cout<<"prunedmass not connected!"<<std::endl;*/ return *(m_prunedmass); } 
    floatingnumber softdropmass() const { /*if(!m_ana->getConnectSucceeded(Ntuple::JetNtupleObject::ksoftdropmass)) std::cout<<"softdropmass not connected!"<<std::endl;*/ return *(m_softdropmass); } 
    
    void IDLoose( const bool& val){ (m_IDLoose)=val; } 
    void IDTight( const bool& val){ (m_IDTight)=val; } 
    void jec( const floatingnumber& val){ *(m_jec)=val; } 
    void jecUp( const floatingnumber& val){ *(m_jecUp)=val; } 
    void jecDown( const floatingnumber& val){ *(m_jecDown)=val; } 
    void muf( const floatingnumber& val){ *(m_muf)=val; } 
    void phf( const floatingnumber& val){ *(m_phf)=val; } 
    void emf( const floatingnumber& val){ *(m_emf)=val; } 
    void nhf( const floatingnumber& val){ *(m_nhf)=val; } 
    void chf( const floatingnumber& val){ *(m_chf)=val; } 
    void area( const floatingnumber& val){ *(m_area)=val; } 
    void cm( const int& val){ *(m_cm)=val; } 
    void nm( const int& val){ *(m_nm)=val; } 
    void che( const floatingnumber& val){ *(m_che)=val; } 
    void ne( const floatingnumber& val){ *(m_ne)=val; } 
    void hf_hf( const floatingnumber& val){ *(m_hf_hf)=val; } 
    void hf_emf( const floatingnumber& val){ *(m_hf_emf)=val; } 
    void hof( const floatingnumber& val){ *(m_hof)=val; } 
    void chm( const int& val){ *(m_chm)=val; } 
    void neHadMult( const int& val){ *(m_neHadMult)=val; } 
    void phoMult( const int& val){ *(m_phoMult)=val; } 
    void nemf( const floatingnumber& val){ *(m_nemf)=val; } 
    void cemf( const floatingnumber& val){ *(m_cemf)=val; } 
    void csv( const floatingnumber& val){ *(m_csv)=val; } 
    void charge( const int& val){ *(m_charge)=val; } 
    void subjet_pruned_N( const int& val){ *(m_subjet_pruned_N)=val; } 
    void subjet_pruned_pt( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_pt)=val; } 
    void subjet_pruned_eta( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_eta)=val; } 
    void subjet_pruned_phi( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_phi)=val; } 
    void subjet_pruned_e( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_e)=val; } 
    void subjet_pruned_m( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_m)=val; } 
    void subjet_pruned_csv( const std::vector<floatingnumber>& val){ *(m_subjet_pruned_csv)=val; } 
    void subjet_pruned_charge( const std::vector<int>& val){ *(m_subjet_pruned_charge)=val; } 
    void subjet_pruned_partonFlavour( const std::vector<int>& val){ *(m_subjet_pruned_partonFlavour)=val; } 
    void subjet_pruned_hadronFlavour( const std::vector<int>& val){ *(m_subjet_pruned_hadronFlavour)=val; } 
    void subjet_pruned_genParton_pdgID( const std::vector<int>& val){ *(m_subjet_pruned_genParton_pdgID)=val; } 
    void subjet_pruned_nbHadrons( const std::vector<int>& val){ *(m_subjet_pruned_nbHadrons)=val; } 
    void subjet_pruned_ncHadrons( const std::vector<int>& val){ *(m_subjet_pruned_ncHadrons)=val; } 
    void subjet_softdrop_N( const int& val){ *(m_subjet_softdrop_N)=val; } 
    void subjet_softdrop_pt( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_pt)=val; } 
    void subjet_softdrop_eta( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_eta)=val; } 
    void subjet_softdrop_phi( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_phi)=val; } 
    void subjet_softdrop_e( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_e)=val; } 
    void subjet_softdrop_m( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_m)=val; } 
    void subjet_softdrop_csv( const std::vector<floatingnumber>& val){ *(m_subjet_softdrop_csv)=val; } 
    void subjet_softdrop_charge( const std::vector<int>& val){ *(m_subjet_softdrop_charge)=val; } 
    void subjet_softdrop_partonFlavour( const std::vector<int>& val){ *(m_subjet_softdrop_partonFlavour)=val; } 
    void subjet_softdrop_hadronFlavour( const std::vector<int>& val){ *(m_subjet_softdrop_hadronFlavour)=val; } 
    void subjet_softdrop_genParton_pdgID( const std::vector<int>& val){ *(m_subjet_softdrop_genParton_pdgID)=val; } 
    void subjet_softdrop_nbHadrons( const std::vector<int>& val){ *(m_subjet_softdrop_nbHadrons)=val; } 
    void subjet_softdrop_ncHadrons( const std::vector<int>& val){ *(m_subjet_softdrop_ncHadrons)=val; } 
    void tau1( const floatingnumber& val){ *(m_tau1)=val; } 
    void tau2( const floatingnumber& val){ *(m_tau2)=val; } 
    void tau3( const floatingnumber& val){ *(m_tau3)=val; } 
    void pruned_mass( const floatingnumber& val){ *(m_pruned_mass)=val; } 
    void pruned_massCorr( const floatingnumber& val){ *(m_pruned_massCorr)=val; } 
    void softdrop_mass( const floatingnumber& val){ *(m_softdrop_mass)=val; } 
    void softdrop_massCorr( const floatingnumber& val){ *(m_softdrop_massCorr)=val; } 
    void pruned_jec( const floatingnumber& val){ *(m_pruned_jec)=val; } 
    void pruned_jecUp( const floatingnumber& val){ *(m_pruned_jecUp)=val; } 
    void pruned_jecDown( const floatingnumber& val){ *(m_pruned_jecDown)=val; } 
    void softdrop_jec( const floatingnumber& val){ *(m_softdrop_jec)=val; } 
    void partonFlavour( const int& val){ *(m_partonFlavour)=val; } 
    void hadronFlavour( const int& val){ *(m_hadronFlavour)=val; } 
    void genParton_pdgID( const int& val){ *(m_genParton_pdgID)=val; } 
    void nbHadrons( const int& val){ *(m_nbHadrons)=val; } 
    void ncHadrons( const int& val){ *(m_ncHadrons)=val; } 
    void prunedmass( const floatingnumber& val){ *(m_prunedmass)=val; } 
    void softdropmass( const floatingnumber& val){ *(m_softdropmass)=val; } 
    
    
  private:
    const Ntuple::JetNtupleObject* m_ana;
  }; // class Jet

  typedef std::vector< Jet > JetVec;
  typedef std::vector< Jet >::iterator JetVecIt;
  typedef std::vector< Jet >::const_iterator JetVecConstIt;





} // end of namespace UZH

/// output stream operator overloaded for Jet objects
std::ostream& operator<<( std::ostream& out,
                          const UZH::Jet& rhs );


#endif //__UZH_Jet_H__
