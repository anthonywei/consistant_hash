// =====================================================================================
// 
//       Filename:  hash.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2014-07-04 14时07分32秒
//       Revision:  none
// 
// =====================================================================================


uint32_t Hash(const std::string& strKey)
{
    const char* str = strKey.c_str();

    uint32_t hash = 1315423911;

    while(*str)
    {
        hash ^= ((hash << 5) + (*str++) + (hash >> 2));
    }

    return (hash & 0x7FFFFFFF);
}

