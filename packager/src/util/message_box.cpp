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

    void message_box::push_status(char status, const std::string &str) {
        std::string symbol = (status == 'V') ? kSymbolV : kSymbolX;
        this->box_.push_back(symbol + str);
    }

    void message_box::push_status(char status, const std::vector<std::string> &vec_str) {
        std::string symbol = (status == 'V') ? kSymbolV : kSymbolX;
        for (const auto &str: vec_str) {
            this->box_.push_back(symbol + str);
        }
    }

    void message_box::print_all() {
        for (const auto &str: this->box_) {
            printf("%s\n", str.c_str());
        }
        this->box_.clear();
    }



} // util