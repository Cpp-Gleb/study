#include <string>
class RecomendTools{
private:
    int _numTools;
    std::string _tools; // read of file
public:
    RecomendTools(){
        _numTools = 0; // read of file and put here
    }
    void RecomendTool(); //
    std::string GetFileSignature(); // return Signature of file for field RecomendTool
    void PrintTool();
};

class ReadHex{
private:
    std::string _hexMarker;
public:
    ReadHex(){
        _hexMarker = "FF D9";
    }
    void PrintAfterMarker();
};

class ShowHiddenFiles{}; // look how to work from binwalk may be func;