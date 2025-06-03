#include "API/World/MapData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Utils.hpp"

std::string MapData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.mapId);
}

std::string MapData::GetPath()
{
    return Utils::FNameToString(this->_object.MapPath);
}

std::string MapData::GetMapViewCategory()
{
    return Utils::FNameToString(this->_object.MapViewCategory);
}

std::string MapData::GetMapViewName(int index)
{
    if(index < 0 || index >= this->_object.MapViewDataArray.Count)
    {
        throw std::out_of_range("GetMapViewName");
    }

    return this->_object.MapViewDataArray.Data[index].mapName.ToString();
}

void MapData::SetMapViewName(int index, FString name)
{
    if(index < 0 || index >= this->_object.MapViewDataArray.Count)
    {
        throw std::out_of_range("SetMapViewName");
    }

    this->_object.MapViewDataArray.Data[index].mapName = name;
}

std::string MapData::GetMapSubject()
{
    return Utils::FNameToString(this->_object.MapSubject);
}

std::string MapData::GetNameIdentifier()
{
    return Utils::FNameToString(this->_object.MapNameID);
}

std::string MapData::GetName(LANG lang)
{
    if(GetNameIdentifier() == "None") return "NO_NAME";
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::JAPANESE: return text->nounSingularForm.ToString();
        case LANG::ENGLISH: return text->nounSingularForm_en.ToString();
        case LANG::FRENCH: return text->nounSingularForm_fr.ToString();
        case LANG::ESPAGNOL: return text->nounSingularForm_es.ToString();
        case LANG::DEUTSCH: return text->nounSingularForm_de.ToString();
        case LANG::ITALIAN: return text->nounSingularForm_it.ToString();
        case LANG::TZH: return text->nounSingularForm_tzh.ToString();
        case LANG::CZH: return text->nounSingularForm_czh.ToString();
        case LANG::KO: return text->nounSingularForm_ko.ToString();
    }

    return text->nounSingularForm.ToString();
}

void MapData::SetName(LANG lang, FString string)
{
    auto text = ModLoader::gameCache->GetNoun(GetNameIdentifier());
    switch(lang)
    {
        case LANG::JAPANESE: text->nounSingularForm = string;
        case LANG::ENGLISH: text->nounSingularForm_en = string;
        case LANG::FRENCH: text->nounSingularForm_fr = string;
        case LANG::ESPAGNOL: text->nounSingularForm_es = string;
        case LANG::DEUTSCH: text->nounSingularForm_de = string;
        case LANG::ITALIAN: text->nounSingularForm_it = string;
        case LANG::TZH: text->nounSingularForm_tzh = string;
        case LANG::CZH: text->nounSingularForm_czh = string;
        case LANG::KO: text->nounSingularForm_ko = string;
    }
}

std::string MapData::GetWorldMap()
{
    return Utils::FNameToString(this->_object.WorldMapID);
}

MapDataSubMapData MapData::GetSubMap(int index)
{
    if(index < 0 || index >= this->_object.subMapDataList.Data.Count)
    {
        throw std::out_of_range("GetSubMap");
    }

    return MapDataSubMapData{this->_object.subMapDataList.Data[index].Value.Second};
}