#include "testlib.h"
using namespace std;
int main(int argc, char** argv) {
    registerValidation(argc, argv);
    string S = inf.readToken("[!-~]{1,100}", "S");
    inf.readEoln();
    inf.readEof();
}
