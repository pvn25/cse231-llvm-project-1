/*
\\                 May                Must
\\
\\ Forward     Reaching def.     **Available exp.**
\\
\\ Backward      Liveness		 very busy exp.
\\
\\
\\  Top = empty   Botom = FS
\\
\\
*/


#ifndef AE_ANALYSIS_LATTICE_NODE
#define AE_ANALYSIS_LATTICE_NODE

#include "LatticeNode.h"
#include <climits>
#include <map>
#include <algorithm>


class AEAnalysisLatticeNode: public LatticeNode {
public:

    map<string, string> val;


    bool equalsTo(LatticeNode *other);
    LatticeNode * joinWith(LatticeNode *other);

	
	AEAnalysisLatticeNode(); // init
    AEAnalysisLatticeNode(string s); // initialize with TOP or BOTTOM

    ~AEAnalysisLatticeNode();


    //fns
	//void printErr();

	//bool isTopOrBottom();

};

#endif 
