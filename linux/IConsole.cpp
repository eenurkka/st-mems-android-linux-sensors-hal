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

#include <iostream>
#include <string>

#include <IConsole.h>

using stm::core::IConsole;

class Console : public IConsole {
public:
    Console(void) = default;
    ~Console(void) = default;

    Console(const Console &) = delete;
    Console& operator= (const Console &) = delete;

    void info(const std::string &message) const override;

    void warning(const std::string &message) const override;

    void error(const std::string &message) const override;

    void debug(const std::string &message) const override;
};

void Console::info(const std::string &message) const
{
    std::string messageToPrint = message + "\n";

    std::cout << messageToPrint;
}

void Console::warning(const std::string &message) const
{
    info(message);
}

void Console::error(const std::string &message) const
{
    std::string messageToPrint = message + "\n";

    std::cerr << messageToPrint;
}

void Console::debug(const std::string &message) const
{
    info(message);
}

IConsole& IConsole::getInstance(void)
{
    static Console instance;

    return instance;
}
