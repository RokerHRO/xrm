uint64_t xrm(uint64_t x,
             uint64_t r,
             uint64_t m,
             uint64_t value
            )
{
    value ^= x;
    value = (value>>r) + (value<<(64-r));
    value *= m;
    return value;
}
