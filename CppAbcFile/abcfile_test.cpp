#include <boost/test/unit_test.hpp>
#include "abcfile.h"

BOOST_AUTO_TEST_CASE(abcfile_test)
{
  ribi::AbcFile f;
  const std::string composer{"Bach"};
  f.SetComposer(composer);
  BOOST_CHECK(f.GetComposer() == composer);
}
