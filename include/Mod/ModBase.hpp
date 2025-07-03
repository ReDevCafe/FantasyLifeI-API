#ifndef MODBASE_HPP
    #define MODBASE_HPP

class ModBase
{
    public:
    virtual ~ModBase() = default;

    virtual void OnPreLoad();
    virtual void OnPostLoad();
};

#endif // !MODBASE_HPP