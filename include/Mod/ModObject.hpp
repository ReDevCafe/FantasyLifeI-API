#ifndef MODMETA_HPP
    #define MODMETA_HPP

    #include <string>
    #include <map>
    #include <filesystem>

struct ModMetaData
{
    std::string title;          // Some fancy display name, if someone want to do a ModMenu for configuration and stuff..
    std::string identifier;     // The unique id of ur mod
    std::string author;         // made by who? :3
    float       version;        

    //      <identifier, version>
    std::map<std::string, float> dependencies;
};

class ModObject
{
    public:
        ModObject(ModMetaData meta, std::filesystem::path container, std::string internalPath = {}):
        _metaData(std::move(meta)), _containerPath(std::move(container)), _internalPath(std::move(internalPath)) {}

        ModMetaData           getMeta()             { return _metaData; };
        std::filesystem::path getContainerPath()    { return _containerPath; }
        std::string           getInternalPath()     { return _internalPath; }

    private:
        ModMetaData             _metaData;
        std::filesystem::path   _containerPath;
        std::string             _internalPath;
};

#endif //! MODMETA_HPP