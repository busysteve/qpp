#include <vector>
#include "gtest/gtest.h"
#include "qpp.h"

using namespace qpp;

// Unit testing "classes/layouts.h"

/******************************************************************************/
/// BEGIN  std::vector<idx> qpp::Lattice::get_dims() const override
TEST(qpp_Lattice_get_dims, AllTests) {}
/******************************************************************************/
/// BEGIN  idx qpp::Lattice::operator()(const std::vector<idx>& xs) const
///        override
TEST(qpp_Lattice_functor, Vector) {}
/******************************************************************************/
/// BEGIN  template <class... Ts> idx qpp::Lattice::operator()(Ts... xs) const
TEST(qpp_Lattice_functor, Variadic) {}
/******************************************************************************/
/// BEGIN  std::vector<idx> qpp::Lattice::to_coordinates(idx i) const override
TEST(qpp_Lattice_to_coordinates, AllTests) {}
/******************************************************************************/

/******************************************************************************/
/// BEGIN  idx qpp::PeriodicBoundaryLattice::operator()(
///        const std::vector<idx>& xs) const override
TEST(qpp_PeriodicBoundaryLattice_functor, AllTests) {}
/******************************************************************************/
