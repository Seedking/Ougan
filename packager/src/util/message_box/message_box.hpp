//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/9
//

#ifndef PACKAGER_MESSAGE_BOX_HPP
#define PACKAGER_MESSAGE_BOX_HPP
#include "string"
#include "vector"

#include "../../const/text.hpp"
enum Color {
    ENUM_BLACK = 30,
    ENUM_RED,
    ENUM_GREEN,
    ENUM_YELLOW,
    ENUM_BLUE,
    ENUM_PURPLE,
    ENUM_SKYBLUE,
    ENUM_WHITE
};

namespace util {
    class message_box {
    private:
        std::vector<std::string> box_;
    public:
        ~message_box();
        void push_status (char status, const std::string& head, const std::string& str);
        void push_status (char status, const std::string& head, const std::vector<std::string>& vec_str);
        void pop_all();

        static void print(int color, const std::string& str);
        static void print_hl(int color, const std::string& str);
    };

} // util

#endif //PACKAGER_MESSAGE_BOX_HPP
