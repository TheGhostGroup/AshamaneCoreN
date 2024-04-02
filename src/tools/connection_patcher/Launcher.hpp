/*
 * Copyright (C) 2012-2014 Arctium Emulation <http://arctium.org>
 * Copyright (C) 2008-2018 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef CONNECTION_PATCHER_LAUNCHER_HPP
#define CONNECTION_PATCHER_LAUNCHER_HPP

#include "Helper.hpp"
namespace Connection_Patcher
{
    class Launcher
    {
    public:
        Launcher();
        bool LaunchGame(std::string const& exePath, std::string const& gameCmdLine);
    };
}



#endif // CONNECTION_PATCHER_LAUNCHER_HPP
