//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/9
//

//
// Created by Seedking on 2023/10/9.
//

#ifndef PACKAGER_ARG_HPP
#define PACKAGER_ARG_HPP
#include "string"
#include "vector"

const std::vector<const std::string> kRangeFormat = {"ogg"};
const std::vector<const int> kRangeSampleRate = {37800, 44100, 48000, 96000, 192000};
const std::vector<const int> kRangeBitDepth = {8, 16, 24, 32};
const std::vector<const int> kRangeBitRate = {96, 128, 192, 224, 256, 320};

#endif //PACKAGER_ARG_HPP
