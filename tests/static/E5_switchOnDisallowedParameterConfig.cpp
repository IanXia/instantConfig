#include "instantConfig.h"

using namespace icfg;

auto settingString = 
config(
  switchOn(
    STG_NAME("switchValue"),
    config()
  )
);

int main(){

  return 0;
}