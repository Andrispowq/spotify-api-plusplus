#ifndef SPOTIFY_API_PLUSPLUS_DEVICE_H
#define SPOTIFY_API_PLUSPLUS_DEVICE_H

#include "../utils/json.h"

class Device
{
public:
    Device(nlohmann::json deviceJson);

    std::string GetId() const { return id; }
    bool IsActive() const { return isActive; }
    bool IsRestricted() const { return isRestricted; }
    std::string GetName() const { return name; }
    std::string GetType() const { return type; }
    int GetVolumePercent() const { return volumePercent; }

private:
    std::string id;
    bool isActive;
    bool isRestricted;
    std::string name;
    std::string type;
    int volumePercent;
};


#endif
