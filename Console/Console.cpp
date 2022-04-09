#include "Console.h"

using namespace std;

int main(int argc, char *argv){
    BPhysics::BObject bobj;
    cout << bobj.Name << endl;
    cout << bobj.Size << endl;
    cout << bobj.ToString() << endl;
    cout << bobj.GetHashCode() << endl;
    return 0;
}

