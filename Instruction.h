#include "TELstring"
#include <map>

typedef int cod;

class instruction
{
public:
    instruction(cod code, TEL::string name);
    static instruction getInstruction (cod code);
    static getInstruction (TEL::string name);
private:
    std::map<TEL::string,cod> nameMap;
    std::map<cod,TEL::string>
}
    
    
