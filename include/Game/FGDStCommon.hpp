#ifndef FGDSTCOMMON_HPP
    #define FGDSTCOMMON_HPP
    #include "Engine/TMap.hpp"
    
class FGDStCommon_TextInfo {
    public:
        int8_t subID;
        FString Text;
        FString text_en;
        FString text_fr;
        FString text_it;
        FString text_de;
        FString text_es;
        FString text_czh;
        FString text_tzh;
        FString text_ko;
};

class FGDStCommon_NounInfo
{
    public:
        char        subID,
                    mfType,
                    spType,
                    nounType,
                    vcType;
        uint16_t    sort;

        char        mfType_en,
                    spType_en,
                    nounType_en,
                    vcType_en;
        uint16_t    sort_en;

        char        mfType_fr,
                    spType_fr,
                    nounType_fr,
                    vcType_fr;
        uint16_t    sort_fr;

        char        mfType_es,
                    spType_es,
                    nounType_es,
                    vcType_es;
        uint16_t    sort_es;

        char        mfType_de,
                    spType_de,
                    nounType_de,
                    vcType_de;
        uint16_t    sort_de;

        char        mfType_it,
                    spType_it,
                    nounType_it,
                    vcType_it;
        uint16_t    sort_it;

        char        mfType_tzh,
                    spType_tzh,
                    nounType_tzh,
                    vcType_tzh;
        uint16_t    sort_tzh;

        char        mfType_czh,
                    spType_czh,
                    nounType_czh,
                    vcType_czh;
        uint16_t    sort_czh;

        char        mfType_ko,
                    spType_ko,
                    nounType_ko,
                    vcType_ko;
        uint16_t    sort_ko;

        FString                                nounSingularDefiniteArticle;                                
        FString                                nounSingularIndefiniteArticle;                           
        FString                                nounSingularPrefix;                                    
        FString                                nounSingularForm;                                       
        FString                                nounPluralDefiniteArticle;                                   
        FString                                nounPluralIndefiniteArticle;                                
        FString                                nounPluralPrefix;                                           
        FString                                nounPluralForm;                                             
        FString                                nounSingularDefiniteArticle_en;                             
        FString                                nounSingularIndefiniteArticle_en;                      
        FString                                nounSingularPrefix_en;                          
        FString                                nounSingularForm_en;                                      
        FString                                nounPluralDefiniteArticle_en;                       
        FString                                nounPluralIndefiniteArticle_en;                         
        FString                                nounPluralPrefix_en;                                
        FString                                nounPluralForm_en;                  
        FString                                nounSingularDefiniteArticle_fr;    
        FString                                nounSingularIndefiniteArticle_fr; 
        FString                                nounSingularPrefix_fr;                        
        FString                                nounSingularForm_fr;                              
        FString                                nounPluralDefiniteArticle_fr;                         
        FString                                nounPluralIndefiniteArticle_fr; 
        FString                                nounPluralPrefix_fr;                               
        FString                                nounPluralForm_fr;                                     
        FString                                nounSingularDefiniteArticle_es;                         
        FString                                nounSingularIndefiniteArticle_es;                   
        FString                                nounSingularPrefix_es;                              
        FString                                nounSingularForm_es;                                        
        FString                                nounPluralDefiniteArticle_es;                              
        FString                                nounPluralIndefiniteArticle_es;                        
        FString                                nounPluralPrefix_es;                                   
        FString                                nounPluralForm_es;                                   
        FString                                nounSingularDefiniteArticle_de;                         
        FString                                nounSingularIndefiniteArticle_de;                       
        FString                                nounSingularPrefix_de;                                   
        FString                                nounSingularForm_de;                                      
        FString                                nounPluralDefiniteArticle_de;                              
        FString                                nounPluralIndefiniteArticle_de;                            
        FString                                nounPluralPrefix_de;                                     
        FString                                nounPluralForm_de;                                
        FString                                nounSingularDefiniteArticle_it;                     
        FString                                nounSingularIndefiniteArticle_it;                   
        FString                                nounSingularPrefix_it;                           
        FString                                nounSingularForm_it;                                     
        FString                                nounPluralDefiniteArticle_it;                          
        FString                                nounPluralIndefiniteArticle_it;                       
        FString                                nounPluralPrefix_it;                               
        FString                                nounPluralForm_it;                                     
        FString                                nounSingularDefiniteArticle_tzh;                      
        FString                                nounSingularIndefiniteArticle_tzh;                        
        FString                                nounSingularPrefix_tzh;                               
        FString                                nounSingularForm_tzh;                                 
        FString                                nounPluralDefiniteArticle_tzh;                     
        FString                                nounPluralIndefiniteArticle_tzh;                
        FString                                nounPluralPrefix_tzh;                                   
        FString                                nounPluralForm_tzh;                      
        FString                                nounSingularDefiniteArticle_czh;                   
        FString                                nounSingularIndefiniteArticle_czh;        
        FString                                nounSingularPrefix_czh;                         
        FString                                nounSingularForm_czh;                          
        FString                                nounPluralDefiniteArticle_czh;                               
        FString                                nounPluralIndefiniteArticle_czh;                    
        FString                                nounPluralPrefix_czh;                                   
        FString                                nounPluralForm_czh;                                       
        FString                                nounSingularDefiniteArticle_ko;                          
        FString                                nounSingularIndefiniteArticle_ko;                           
        FString                                nounSingularPrefix_ko;                           
        FString                                nounSingularForm_ko;                                     
        FString                                nounPluralDefiniteArticle_ko;                     
        FString                                nounPluralIndefiniteArticle_ko;                          
        FString                                nounPluralPrefix_ko;                                     
        FString                                nounPluralForm_ko;    
};

#endif // !FGDSTCOMMON_HPP