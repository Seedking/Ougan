//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/9
//

#include "path.hpp"

#ifdef __WIN64__
#include "Shlwapi.h"
namespace util {
    bool path::isRealPath(const std::string& path) {
        return (bool)PathFileExistsA(path.c_str());
    }

    bool path::isFile(const std::filesystem::path& p) {
        return false;
    }

    bool path::isDir(const std::filesystem::path &p) {
        return false;
    }
}

#elif __linux__
namespace util {

    bool file_system::isRealPath(std::string path) {
        return false;
    }

    bool file_system::isRealFile(std::string path) {
        return false;
    }
}
#endif


