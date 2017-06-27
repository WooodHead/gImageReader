/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * Config.hh
 * Copyright (C) 2017 Alexander Zaitsev <zamazan4ik@tut.by>
 *
 * gImageReader is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gImageReader is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PRLIB_DESKEW_HPP
#define PRLIB_DESKEW_HPP

#include "opencv2/core.hpp"

namespace prl
{
    //TODO: Add manual deskew and auto-deskew
extern "C" bool deskew(cv::Mat& inputImage, cv::Mat& deskewedImage);
}

#endif //PRLIB_DESKEW_HPP
