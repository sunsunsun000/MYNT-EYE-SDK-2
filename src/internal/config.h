// Copyright 2018 Slightech Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef MYNTEYE_INTERNAL_CONFIG_H_  // NOLINT
#define MYNTEYE_INTERNAL_CONFIG_H_
#pragma once

#include <map>
#include <set>
#include <vector>

#include "mynteye/mynteye.h"
#include "mynteye/types.h"

MYNTEYE_BEGIN_NAMESPACE

using StreamSupports = std::set<Stream>;
using CapabilitiesSupports = std::set<Capabilities>;
using OptionSupports = std::set<Option>;

extern const std::map<Model, StreamSupports> stream_supports_map;
extern const std::map<Model, CapabilitiesSupports> capabilities_supports_map;
extern const std::map<Model, OptionSupports> option_supports_map;

using StreamRequests = std::vector<StreamRequest>;

extern const std::map<Model, std::map<Capabilities, StreamRequests>>
    stream_requests_map;

MYNTEYE_END_NAMESPACE

#endif  // MYNTEYE_INTERNAL_CONFIG_H_ NOLINT
