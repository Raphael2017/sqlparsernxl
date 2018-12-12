#include "LRAnalysis.h"
using namespace LR_ANALYSIS;

int main()
{
    scan_input();

    print_all_rules();

    proc();
    print_predict_table();

    procLR();
    return 0;
}

