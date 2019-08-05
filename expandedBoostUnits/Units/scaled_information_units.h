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



#ifndef RERAMSPEC_SCALED_INFORMATION_UNITS
#define RERAMSPEC_SCALED_INFORMATION_UNITS

#include <boost/units/scale.hpp>
#include <boost/units/systems/information/prefixes.hpp>
#include <boost/units/systems/information/bit.hpp>
#include <boost/units/systems/information/byte.hpp>

#include <boost/units/systems/si/prefixes.hpp>
#include <boost/units/conversion.hpp>
#include <boost/units/io.hpp>

namespace boost {

namespace units {

namespace rramspec {

typedef make_scaled_unit<information::hu::bit::info,scale<2, static_rational<0>>>::type bit_unit;
BOOST_UNITS_STATIC_CONSTANT(bit,bit_unit);
BOOST_UNITS_STATIC_CONSTANT(bits,bit_unit);
typedef make_scaled_unit<information::hu::bit::info,scale<2, static_rational<3>>>::type baite_unit;
BOOST_UNITS_STATIC_CONSTANT(baite,baite_unit);
BOOST_UNITS_STATIC_CONSTANT(baites,baite_unit);
typedef make_scaled_unit<information::hu::bit::info,scale<2, static_rational<10>>>::type kibibit_unit;
BOOST_UNITS_STATIC_CONSTANT(kibibit,kibibit_unit);
BOOST_UNITS_STATIC_CONSTANT(kibibits,kibibit_unit);
typedef make_scaled_unit<information::hu::bit::info,scale<2, static_rational<30>>>::type gibibit_unit;
BOOST_UNITS_STATIC_CONSTANT(gibibit,gibibit_unit);
BOOST_UNITS_STATIC_CONSTANT(gibibits,gibibit_unit);

typedef make_scaled_unit<information::hu::byte::info,scale<2, static_rational<0>>>::type byte_unit;
BOOST_UNITS_STATIC_CONSTANT(byte,byte_unit);
BOOST_UNITS_STATIC_CONSTANT(bytes,byte_unit);
typedef make_scaled_unit<information::hu::byte::info,scale<2, static_rational<10>>>::type kibibyte_unit;
BOOST_UNITS_STATIC_CONSTANT(kibibyte,kibibyte_unit);
BOOST_UNITS_STATIC_CONSTANT(kibibytes,kibibyte_unit);

} // namespace rramspec

} // namespace units

} // namespace boost

#endif // RERAMSPEC_SCALED_INFORMATION_UNITS
