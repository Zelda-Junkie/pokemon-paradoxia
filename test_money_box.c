#include "global.h"
#include "money.h"

// Test function to manually call money box functions
void TestMoneyBox(void) {
    // Try to directly call the functions that showmoneybox would call
    DrawMoneyBox(GetMoney(&gSaveBlock1Ptr->money), 0, 0);
}