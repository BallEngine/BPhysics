#include "../Base/Base.h"

namespace BPhysics{

    /*
    * Name                  Object's Name for BE Objects Map;
    * Size                  Size of used memory. 其实 bitset<64> 前32表示整数部分, 后32表示小数部分;
    *
    * GetHashCode()         Get a hash by CrasdalHash in `clv = CompressLevel.x32`;
    * ToString()            If this object can be displayed in String format, than return string
    *                       else return the object's real type with namespace;
    */

    class BObject{
        public:
        std::string Name;
        std::bitset<64> Size;
        std::string GetHashCode();
        std::string ToString();
    };
}
