#include <bost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorith>

int main(){
  using namespace boost::lambda;
  typedef std:istream_iterator<int> in;

  std::for_each(
		in(std::cin), in(), std::cout << (_1*3) << " " );
}
