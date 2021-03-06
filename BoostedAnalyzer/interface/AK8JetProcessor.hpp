#ifndef BOOSTEDTTH_BOOSTEDANALYZER_AK8JETPROCESSOR_HPP
#define BOOSTEDTTH_BOOSTEDANALYZER_AK8JETPROCESSOR_HPP

#include "MiniAOD/MiniAODHelper/interface/MiniAODHelper.h"
#include "MiniAOD/MiniAODHelper/interface/TopTagger.h"
#include "MiniAOD/MiniAODHelper/interface/HiggsTagger.h"

#include "BoostedTTH/BoostedAnalyzer/interface/TreeProcessor.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/BoostedUtils.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/GenTopEvent.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/JetMatching.hpp"

class AK8JetProcessor: public TreeProcessor{
  
public:
  
    AK8JetProcessor(MiniAODHelper* helper_);
    ~AK8JetProcessor();
  
    void Init(const InputCollections& input,VariableContainer& var);
    void Process(const InputCollections& input,VariableContainer& var);
  
    void InitFatJetVars(VariableContainer& vars);
    void InitHTTJetVars(VariableContainer& vars);
    void InitTopTagVars(VariableContainer& vars);
    void InitSFJetVars(VariableContainer& vars);
    void InitPrunedJetVars(VariableContainer& vars);
    void InitSDJetVars(VariableContainer& vars);
    void InitHiggsTagVars(VariableContainer& vars);

    void FillFatJetVars(const InputCollections& input,VariableContainer& vars);
    void FillHTTJetVars(const InputCollections& input,VariableContainer& vars);
    void FillTopTagVars(const InputCollections& input,VariableContainer& vars);
    void FillSFJetVars(const InputCollections& input,VariableContainer& vars);
    void FillPrunedJetVars(const InputCollections& input,VariableContainer& vars);
    void FillSDJetVars(const InputCollections& input,VariableContainer& vars);
    void FillHiggsTagVars(const InputCollections& input,VariableContainer& vars);
    
private:
    
    const char* btagger;
    std::map<std::string,TopTagger> toptagger;
    std::map<std::string,HiggsTagger> higgstagger;
    
};

#endif