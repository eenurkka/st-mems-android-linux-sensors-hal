/*
 * Copyright (C) 2018 The Android Open Source Project
 * Copyright (C) 2019-2020 STMicroelectronics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SensorsCallback.h"

namespace aidl {
namespace android {
namespace hardware {
namespace sensors {

using ::ndk::ScopedAStatus;
using ::aidl::android::hardware::sensors::SensorInfo;

ScopedAStatus onDynamicSensorsConnected(const std::vector<SensorInfo>& in_sensorInfos)
{
    (void) in_sensorInfos;

    // TODO implement
    return ScopedAStatus::ok();
}

ScopedAStatus onDynamicSensorsDisconnected(const std::vector<int32_t>& in_sensorHandles)
{
    (void) in_sensorHandles;

    // TODO implement
    return ScopedAStatus::ok();
}

}  // namespace sensors
}  // namespace hardware
}  // namespace android
}  // namespace aidl