//
// Copyright (c) 2023. by Seedking
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/10/7
//

#include "message_box.hpp"

namespace util {

    message_box::~message_box() {
        delete this;
    }

    void message_box::push_status(char status, const std::string& head, const std::string &str) {
        std::string symbol = (status == 'V') ? kSymbolV : kSymbolX;
        this->box_.push_back(symbol + head + str);
    }

    void message_box::push_status(char status, const std::string& head, const std::vector<std::string> &vec_str) {
        std::string symbol = (status == 'V') ? kSymbolV : kSymbolX;
        for (const auto &str: vec_str) {
            this->box_.push_back(symbol + head + str);
        }
    }

    void message_box::pop_all() {
        for (const auto &str: this->box_) {
            printf("%s\n", str.c_str());
        }
        this->box_.clear();
    }

    void message_box::print(int color, const std::string& str) {
        std::string p = "\033[" + std::to_string(color) + 'm' + str + "\033[0m";
        printf("%s\n", p.c_str());
    }

    void message_box::print_hl(int color, const std::string &str) {
        std::string p = "\033[1;" + std::to_string(color) + 'm' + str + "\033[0m";
        printf("%s\n", p.c_str());
    }


} // util