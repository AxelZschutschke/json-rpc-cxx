#include "jsonrpccxx/typemapper.hpp"

#include <nlohmann/json.hpp>
#include <gtest/gtest.h>
#include <utility>
#include <string>

using namespace testing;
using namespace nlohmann;
using namespace std::string_literals;

class type_name_Tester : public TestWithParam<std::pair<json::value_t,std::string>>
{};

TEST_P( type_name_Tester, GivenValidValueTypes_ShallReturnCorrectlyMappedString )
{
  // arrange
    auto const & parameters = GetParam();
    auto const & inputValue = parameters.first;
    auto const & expectedResult = parameters.second;

  // act
    std::string result = jsonrpccxx::type_name( inputValue );

  // assert
    EXPECT_EQ( result, expectedResult );
}

INSTANTIATE_TEST_SUITE_P( GivenValidValueTypes_ShallReturnCorrectlyMappedString,
    type_name_Tester,
    Values( 
      std::make_pair( json::value_t::number_integer, "integer"s ),
      std::make_pair( json::value_t::boolean, "boolean"s ),
      std::make_pair( json::value_t::number_float, "float"s ),
      std::make_pair( json::value_t::number_unsigned, "unsigned integer"s ),
      std::make_pair( json::value_t::object, "object"s ),
      std::make_pair( json::value_t::array, "array"s ),
      std::make_pair( json::value_t::string, "string"s )
  ) );

int main(int argc, char** argv) {
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
