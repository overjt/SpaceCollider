// SpaceCollider -- SGI Lab Task 9
// Copyright (c) 2021-2022 Ángel Pérez <aperpor@upv.edu.es>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#pragma once

#include <cstdint>
#include <sstream>
#include <string>
#include <vector>

#include <PlatformQuirks.hpp>
#include <GL/freeglut.h>

struct Util {
    static void consolePrint(const char* format, ...);
    static void consoleClear();

    static void renderOverlayString(const char* string, int x, int y);

    static std::vector<std::string> splitString(const std::string& string, const char delimiter = ' ');
    
    static constexpr auto k_consoleFont = GLUT_BITMAP_8_BY_13;
    static constexpr auto k_consoleFontSize = 13;
    static char s_consoleBuffer[];
    static int s_consoleLines;

    static constexpr auto k_pi = 3.141592653589793f;
    static constexpr auto k_tau = 6.283185307179586f;
    static constexpr auto k_e = 2.718281828459045f;
};
