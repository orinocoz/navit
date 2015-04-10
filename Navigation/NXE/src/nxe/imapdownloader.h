#ifndef IMAPDOWNLOADER_H
#define IMAPDOWNLOADER_H

#include <vector>
#include <string>
#include <functional>

namespace NXE {

struct MapDownloaderListener {
    typedef std::function<void(const std::string&, std::uint64_t, std::uint64_t)> ProgressCallback;
    typedef std::function<void(const std::string&, const std::string&)> ErrorCallback;
    typedef std::function<void(const std::string&)> FinishedCallback;

    ProgressCallback progressCb;
    ErrorCallback errorCb;
    FinishedCallback finishedCb;
};

class IMapDownloader {
public:
    ~IMapDownloader() {}

    virtual void start() = 0;
    virtual std::vector<std::string> availableMaps() = 0;
    virtual bool download(const std::string& region) = 0;
    virtual void setListener(const MapDownloaderListener& listener) = 0;
    virtual void cancel(const std::string& region) = 0;
    virtual bool setOutputDirectory(const std::string& outDirectory) = 0;
};

} // NXE

#endif // IMAPDOWNLOADER_H