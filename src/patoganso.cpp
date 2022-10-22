#include <string>

namespace ave {
    std::string patoganso(int i) {
        std::string res = "";
        if (i % 3 == 0)
            res += "Pato";
        if (i % 5 == 0)
            res += "Ganso";
        return res == "" ? std::to_string(i) : res;
    }
}
