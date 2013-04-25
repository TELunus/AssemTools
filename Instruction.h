#include "TELstring"
#include <map>

typedef int cod;

class instruction
{
public:
    instruction(cod code, TEL::string name);
    ~instruction();
    static instruction getInstruction (cod code);
    static getInstruction (TEL::string name);
private:
    static std::map<TEL::string,cod> nameMap;
    static std::map<cod,TEL::string>
}
    
    
