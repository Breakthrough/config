
//  (C) Copyright Boost.org 1999. Permission to copy, use, modify, sell and
//  distribute this software is granted provided this copyright notice appears
//  in all copies. This software is provided "as is" without express or implied
//  warranty, and with no claim as to its suitability for any purpose.

// Test file for macro BOOST_NO_MEMBER_FUNCTION_SPECIALIZATIONS
// This file should compile, if it does not then
// BOOST_NO_MEMBER_FUNCTION_SPECIALIZATIONS needs to be defined.
// see boost_no_mem_func_spec.cxx for more details

// Do not edit this file, it was generated automatically by
// ../tools/generate from boost_no_mem_func_spec.cxx on
// Sun May 19 12:48:29  2002

// Must not have BOOST_ASSERT_CONFIG set; it defeats
// the objective of this file:
#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>
#include <boost/test/cpp_main.cpp>
#include "test.hpp"

#ifndef BOOST_NO_MEMBER_FUNCTION_SPECIALIZATIONS
#include "boost_no_mem_func_spec.cxx"
#else
namespace boost_no_member_function_specializations = empty_boost;
#endif

int cpp_main( int, char *[] )
{
   return boost_no_member_function_specializations::test();
}  
   
