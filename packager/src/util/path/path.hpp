//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/9
//

#ifndef PACKAGER_PATH_HPP
#define PACKAGER_PATH_HPP
#include "string"
#include "filesystem"
namespace util {
    class path{
    public:
        static bool isRealPath(const std::string& path);

        static bool isFile(const std::filesystem::path& p);

        static bool isDir(const std::filesystem::path& p);
    };

} // util

#endif //PACKAGER_PATH_HPP
