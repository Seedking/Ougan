//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/7
//

#ifndef PACKAGER_MESSAGE_BOX_HPP
#define PACKAGER_MESSAGE_BOX_HPP
#include "string"
#include "vector"

#include "../const/text.hpp"

namespace util {
    class message_box {
    private:
        std::vector<std::string> box_;
    public:
        ~message_box();
        void push_status (char status, const std::string& str);
        void push_status (char status, const std::vector<std::string>& vec_str);
        void print_all();
    };

} // util

#endif //PACKAGER_MESSAGE_BOX_HPP
