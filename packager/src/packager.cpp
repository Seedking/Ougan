//
// Copyright (c) 2023.
// This file is part of Ougan (https://github.com/Seedking/Ougan) project,
// licensed under the MIT License (MIT).
//
// Created on 2023/9/4
//

#include "CLI/Error.hpp"
#include "CLI/Option.hpp"
#include "CLI/App.hpp"
#include "CLI/Formatter.hpp"
#include "CLI/Config.hpp"


#include "const/text.hpp"
#include "const/arg.hpp"
#include "util/util.hpp"

int main(int argc, char *argv[]) {
    //command information storage
    std::vector<std::string> command_input_path;
    std::string command_output_path;
    std::string command_audio_format{"ogg"};
    int32_t command_sample_rate{44100};
    int32_t command_bit_depth{16};
    int32_t command_bit_rate{192};

    //init cli11 and message_box
    CLI::App cli{kInfo};
    util::message_box box;

    //add option
    cli.add_option("-i,--input", command_input_path, kHelpInputPath);
    cli.add_option("-o,--output", command_output_path, kHelpOutputPath);
    cli.add_option("-f,--format", command_audio_format, kHelpAudioFormat);
    cli.add_option("-s,--sampling", command_sample_rate, kHelpSampling);
    cli.add_option("-d,--bit_depth", command_bit_depth, kHelpBitDepth);
    cli.add_option("-r,--bit_rate", command_bit_rate, kHelpBitRate);

    //cli11 parse
    CLI11_PARSE(cli, argc, argv);

    //
    if (argc > 2) {
        util::message_box::print_hl(ENUM_YELLOW, kTitleArg);
        bool next = false;
        {
            std::vector<bool> temp_bool(6);

            if (command_input_path.empty()) {
                box.push_status('X', kMBInputPath, kTextEInput);
                temp_bool[0] = false;
            } else {
                box.push_status('V', kMBInputPath, command_input_path);
                temp_bool[0] = true;
            }

            if (command_output_path.empty()) {
                box.push_status('X', kMBOutputPath, kTextEOutput);
                temp_bool[1] = false;
            } else {
                box.push_status('V', kMBOutputPath, command_output_path);
                temp_bool[1] = true;
            }

            if (std::find(kRangeFormat.begin(),
                          kRangeFormat.end(),
                          command_audio_format) == kRangeFormat.end()){
                box.push_status('X', kMBAudioFormat, kTextInvalidArg);
                temp_bool[2] = false;
            } else {
                box.push_status('V', kMBAudioFormat, command_audio_format);
                temp_bool[2] = true;
            }

            if (std::find(kRangeSampleRate.begin(),
                          kRangeSampleRate.end(),
                          command_sample_rate) == kRangeSampleRate.end()) {
                box.push_status('X', kMBSampleRate, kTextInvalidArg);
                temp_bool[3] = false;
            } else {
                box.push_status('V', kMBSampleRate, std::to_string(command_sample_rate) + "hz");
                temp_bool[3] = true;
            }

            if (std::find(kRangeBitDepth.begin(),
                          kRangeBitDepth.end(),
                          command_bit_depth) == kRangeBitDepth.end()) {
                box.push_status('X', kMBBitDepth, kTextInvalidArg);
                temp_bool[3] = false;
            } else {
                box.push_status('V', kMBBitDepth, std::to_string(command_bit_depth) + "bit");
                temp_bool[3] = true;
            }

            if (std::find(kRangeBitRate.begin(),
                          kRangeBitRate.end(),
                          command_bit_rate) == kRangeBitRate.end()) {
                box.push_status('X', kMBBitRate, kTextInvalidArg);
                temp_bool[4] = false;
            } else {
                box.push_status('V', kMBBitRate, std::to_string(command_bit_rate) + "kbps");
                temp_bool[4] = true;
            }

            next = temp_bool[0] && temp_bool[1] && temp_bool[2] && temp_bool[3] && temp_bool[4];
            box.pop_all();
        }

        if(next) {

        }
    }

    return 0;
}