#include "../Base/Base.h"

namespace BPhysics{

    /*
    * Name                  Object's Name for BE Objects Map;
    * Size                  Size of used memory. ��ʵ bitset<64> ǰ32��ʾ��������, ��32��ʾС������;
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
