#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <map>

auto printSet(std::vector<int> oks){
    auto vec = std::vector<int>{3, 4, 2, 5, 6, 1};
    auto tego = std::set(vec.begin(), vec.end());
    for (auto e : tego)
        std::cout << e << " ";
}

auto filtered(std::vector<std::string> lol, std::set<std::string> what){
    auto setFromVec = std::set(lol.begin(), lol.end());
    for(auto tego : what){
        if(setFromVec.contains(tego))
            setFromVec.erase(tego);
    }
    for(auto g: setFromVec)
        std::cout<<" "<<g;
}

auto stringInputSet(){
    std::vector<std::string> spokoj;
    std::string newWord=" ";
    while(newWord!="stop"){
        spokoj.push_back(newWord);
        std::cin>>newWord;
    }
    std::sort(spokoj.begin(),spokoj.end(), [](std::string a, std::string b)->bool{
        return a.size()<b.size();
    });
    for(auto pa_to : spokoj)
        std::cout<<" "<<pa_to;
}
//my logic but issue with iterating over list with while loop
/*bool has_cycle(std::map<std::string, std::set<std::string>> zupa){
    for(auto checkall : zupa){
        std::string in = checkall.first;
        //       e:checkall
        for(auto e: zupa){
            int numberOfConct=0;
            while(e.second[numberOfConct]!= NULL) {
                if (in == e.second[numberOfConct]) {
                    return true;
                }
            numberOfConct++;
            }
        }
    }
    return false;
} */
// improved version.
bool has_cycle(std::map<std::string, std::set<std::string>> zupa){
    for(auto checkall : zupa){
        std::string in = checkall.first;
        for(auto e: zupa){
            for (auto neighbor : e.second) {
                if (in == neighbor) {
                    std::cout<<in;
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
  /*  std::vector<std::string> patego = {"harry", "hermiona", "andzia", "voldemort"};
    std::set<std::string> zakazane = {"voldemort"};
    filtered(patego, zakazane);
    std::vector<int> what = {3,1,4,2,52,1,5};
    printSet(what);
  stringInputSet();*/
    auto graph = std::map<std::string, std::set<std::string>>();
    graph["A"] = {"B", "C"};
    graph["B"] = {"E"};
    graph["C"] = {"D"};
    graph["D"] = {"B"};
    has_cycle(graph);
    return 0;
}
