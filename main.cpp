#include <cstdlib>
#include "source.cpp"

int main(int argc, char *argv[]){
    Link obj;
    // obj.hello();

    obj.addNode(3);
    obj.addNode(93);
    obj.addNode(33);
    obj.addNode(53);
    obj.PrintNodes();
    obj.DelNode(93);
    obj.PrintNodes();

    return 0;
}

//start main