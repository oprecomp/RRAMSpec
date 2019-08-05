/*
 * Copyright (c) 2019, University of Kaiserslautern
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Andr'e L. Chinazzo, Deepak M. Mathew, Christian Weis
 */



#ifndef RERAMSPEC_RESISTANCE_PER_LENGTH_UNIT_H
#define RERAMSPEC_RESISTANCE_PER_LENGTH_UNIT_H

#include "../rramSpecUnitsSystem.h"
#include "../DerivedDimensions/resistance_per_length.h"

namespace boost {

namespace units {

namespace rramspec {

typedef unit<resistance_per_length_dimension,rramspec::system_bit>    resistance_per_length;

BOOST_UNITS_STATIC_CONSTANT(ohm_per_meter,resistance_per_length);
BOOST_UNITS_STATIC_CONSTANT(ohms_per_meter,resistance_per_length);

// ohm / millimeter = kiloohm / meter
typedef make_scaled_unit<resistance_per_length,scale<10, static_rational<3>>>::type ohm_per_millimeter_unit;
BOOST_UNITS_STATIC_CONSTANT(ohm_per_millimeter,ohm_per_millimeter_unit);
BOOST_UNITS_STATIC_CONSTANT(ohms_per_millimeter,ohm_per_millimeter_unit);

// ohm / micrometer = megaohm / meter
typedef make_scaled_unit<resistance_per_length,scale<10, static_rational<6>>>::type ohm_per_micrometer_unit;
BOOST_UNITS_STATIC_CONSTANT(ohm_per_micrometer,ohm_per_micrometer_unit);
BOOST_UNITS_STATIC_CONSTANT(ohms_per_micrometer,ohm_per_micrometer_unit);

// ohm / nanometer = gigaohm / meter
typedef make_scaled_unit<resistance_per_length,scale<10, static_rational<9>>>::type ohm_per_nanometer_unit;
BOOST_UNITS_STATIC_CONSTANT(ohm_per_nanometer,ohm_per_nanometer_unit);
BOOST_UNITS_STATIC_CONSTANT(ohms_per_nanometer,ohm_per_nanometer_unit);

} // namespace rramspec

} // namespace units

} // namespace boost

#endif // RERAMSPEC_RESISTANCE_PER_LENGTH_UNIT_H
