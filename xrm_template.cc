template<uint64_t X, uint64_t R, uint64_t M>
class XRM
{
    public:
    uint64_t operator()(uint64_t value) const
    {
        value ^= X;
        value = (value>>R) + (value<<(64-R)); // bit rotate
        value *= M;
        return value;
    }
};
