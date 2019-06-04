class XRM
{
public:
    XRM(uint64_t _x, uint64_t _r, uint64_t _m)
    : x(_x), r(_r), m(_m)
    {}
    
    uint64_t operator()(uint64_t value) const
    {
        value ^= x;
        value = (value>>r) + (value<<(64-r));
        value *= m;
        return value;
    }
    
    const uint64_t x, r, m;
};
