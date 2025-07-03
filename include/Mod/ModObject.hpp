#ifndef MODMETA_HPP
    #define MODMETA_HPP

    #include <string>
    #include <vector>

struct ModMetaData
{
    std::string name;
    std::string author;
    std::string version;

    std::vector<std::string> dependencies;
};

class ModObject
{
    public:
        ModObject(ModMetaData meta, std::filesystem::path origin) :
        
        metadata(meta),
        path(origin) 
        {};

        ModMetaData             getMeta() { return metadata; }
        std::filesystem::path   GetPath() { return path; }

    private:
        ModMetaData metadata;
        std::filesystem::path path;
};

#endif //! MODMETA_HPP