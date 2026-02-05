#ifndef MODBASE_HPP
    #define MODBASE_HPP

class ModBase
{
    public:
    virtual ~ModBase() = default;

    virtual void OnPreLoad()    = 0;
    virtual void OnPostLoad()   = 0;
    virtual void OnExit()       = 0;
};

#endif // !MODBASE_HPP