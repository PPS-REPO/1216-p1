#include "testlib.h"
using namespace std;

int main(int argc, char** argv) {
    registerTestlibCmd(argc, argv);

    string expected = ans.readWord();
    string actual = ouf.readWord();

    if (actual != "Sumin" && actual != "Minsu")
        quitf(_wa, "Output must be either 'Sumin' or 'Minsu', found: '%s'", compress(actual).c_str());

    if (actual != expected)
        quitf(_wa, "Wrong answer - expected: '%s', found: '%s'", compress(expected).c_str(), compress(actual).c_str());

    if (!ouf.seekEof())
        quitf(_wa, "Extra output found after the answer: '%s'", compress(ouf.readWord()).c_str());

    quitf(_ok, "Correct: \"%s\"", compress(actual).c_str());
}