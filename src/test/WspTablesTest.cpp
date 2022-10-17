
#include <gtest/gtest.h>
#include <WspTablesLib.h>

using namespace wsptables;


TEST(WspTablesTest, HappyCase) {
    EXPECT_DOUBLE_EQ (835.96568164127928, wsp_HPT(130, 560)) << "Testing wsp_HPT";
    EXPECT_DOUBLE_EQ (838.27592462249709, wsp_HPT(120, 560)) << "Testing wsp_HPT";
    EXPECT_DOUBLE_EQ (840.56385940553912, wsp_HPT(110, 560)) << "Testing wsp_HPT";
    EXPECT_DOUBLE_EQ (810.79294088315601, wsp_HPT(130, 520)) << "Testing wsp_HPT";
    EXPECT_DOUBLE_EQ (770.74384112939595, wsp_HPT(130, 460)) << "Testing wsp_HPT";
}


TEST(WspTablesTest, Negative) {
    EXPECT_EQ(wsp_HPT(-10, 0), 0);
}


