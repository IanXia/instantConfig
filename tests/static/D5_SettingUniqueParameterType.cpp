#include "instantConfig.h"

using namespace icfg;

auto settingString = 
config(
  setting(
    STG_NAME("mySetting"),
    string,
    list(string)
  )
);

int main(){

  return 0;
}