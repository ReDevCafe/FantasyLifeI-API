#ifndef GAMEOBJECTPROXY_HPP_
    #define GAMEOBJECTPROXY_HPP_
    
template<typename T>
class GameObjectProxy {

    public:
        GameObjectProxy(T &object) : _object(object) {}
        virtual ~GameObjectProxy() = default;
        T &getObject() { return _object; };
    protected:
        T &_object;
    private:
};

#endif /* !GAMEOBJECTPROXY_HPP_ */
