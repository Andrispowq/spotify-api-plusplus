#include "Device.h"

Device::Device(nlohmann::json deviceJson)
{
    id = deviceJson["id"];
    isActive = deviceJson["is_active"];
    isRestricted = deviceJson["is_restricted"];
    name = deviceJson["name"];
    type = deviceJson["type"];
    volumePercent = deviceJson["volume_percent"];
}
