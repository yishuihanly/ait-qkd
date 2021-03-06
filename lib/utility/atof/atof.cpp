/*
 * atof.cpp
 *
 * implement the atof utility
 * 
 * Author: Oliver Maurhart, <oliver.maurhart@ait.ac.at>
 *
 * Copyright (C) 2015-2016 AIT Austrian Institute of Technology
 * AIT Austrian Institute of Technology GmbH
 * Donau-City-Strasse 1 | 1220 Vienna | Austria
 * http://www.ait.ac.at
 *
 * This file is part of the AIT QKD Software Suite.
 *
 * The AIT QKD Software Suite is free software: you can redistribute 
 * it and/or modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation, either version 3 of 
 * the License, or (at your option) any later version.
 * 
 * The AIT QKD Software Suite is distributed in the hope that it will 
 * be useful, but WITHOUT ANY WARRANTY; without even the implied warranty 
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with the AIT QKD Software Suite. 
 * If not, see <http://www.gnu.org/licenses/>.
 */

 
// ------------------------------------------------------------
// incs

#include <sstream>


// ait
#include <qkd/utility/atof.h>


// ------------------------------------------------------------
// code


/**
 * this is a version of atof() which does not respect
 * current user/system locale
 *
 * @param   sNumber     the string to parse in "C" locale
 * @return  the number
 */
double qkd::utility::atof(std::string sNumber) {

    double res = 0.0;
    std::istringstream ss(sNumber);
    ss.imbue(std::locale::classic());
    ss >> res;
    return res;
}

