#include <string>
class RecomendTools{
private:
    int _numTools;
    std::string _tools; // read of file
    std::string _marker;
public:
    RecomendTools() {
        _numTools = 0; // read of file and put here
    }
    void ReadHex(std::string datafile);
    void RecomendTool(); //
    std::string GetFileSignature(); // return Signature of file for field RecomendTool
    void PrintTool();
};
