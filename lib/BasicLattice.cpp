#include "../include/BasicLattice.h"

string LatticeNode::TOP = "top";
string LatticeNode::BOTTOM = "bottom";


LatticeNode::LatticeNode(){
    basic = "";
}

LatticeNode::LatticeNode(string s){
  if(s!="")
    basic = s;
}

LatticeNode* LatticeNode::joinWith(LatticeNode *other){
  //most basic(conservative) join
  return new LatticeNode(TOP);
}

LatticeNode::~LatticeNode(){

}//do nothing here