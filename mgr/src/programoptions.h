#ifndef PROGRAMOPTIONS_H
#define PROGRAMOPTIONS_H

#include <memory>
#include <string>
#include <ostream>

// This class holds the program options.
class ProgramOptions
{
public:
    ProgramOptions();
    bool parse(int, char *[]);
    std::string message() const;
    float wGlobal() const;
    int etaNo() const;
    int waterElevationNo() const;
    int bathymetryNo() const;
    int nx() const;
    int ny() const;
    float width() const;
    float height() const;
    float dx() const;
    float dy() const;
    double duration() const;
    double wallDuration() const;
    float cpu() const;
    std::string outputFile() const;
private:
    struct ProgramOptionsImpl;
    ProgramOptionsImpl *pimpl;
};

// Formats output of a ProgramOptions object.
std::ostream &operator<<(std::ostream &, const ProgramOptions &);

typedef std::shared_ptr<ProgramOptions> OptionsPtr;

#endif // PROGRAMOPTIONS_H
