#include <fstream>
#include <iostream>
#include <vector>
#include "node.h"

node* findNode(char label,node* nodes[],int N) {
  for(int n = 0;n < N;n++) {
    if(nodes[n]->getName() == label)
      return nodes[n];
  }
  node* result = nullptr;
  return result;
}

int main() {
  // Read the graph data
  std::ifstream in;
  in.open("nodes.txt");
  int N;
  in >> N;
  // Make one node for each vertex in the graph
  node** nodes = new node*[N];
  for(int n = 0;n < N;n++) {
    char label;
    in >> label;
    nodes[n] = new node(label);
  }
  int E;
  in >> E;
  // For each edge, find the nodes that the edge connects. If those nodes
  // have different representatives, form the union of their sets.
  for(int n = 0;n < E;n++) {
    char label1,label2;
    in >> label1 >> label2;
    node* first = findNode(label1,nodes,N);
    node* second = findNode(label2,nodes,N);
    if(first->getRepresentative() != second->getRepresentative()) {
      first->makeUnion(second);
    }
  }
  in.close();

  // Construct a list of the distinct sets that are left
  std::vector<node*> sets;
  for(int n = 0;n < N;n++) {
    node* rep = nodes[n]->getRepresentative();
    bool seen = false;
    for(int m = 0;m < sets.size();m++) {
      if(sets[m] == rep)
        seen = true;
    }
    if(!seen) {
      sets.push_back(rep);
    }
  }

  // Print the members of each distinct set
  for(int m = 0;m < sets.size();m++) {
    for(int n = 0;n < N;n++) {
      if(nodes[n]->getRepresentative() == sets[m]) {
        std::cout << nodes[n]->getName() << ' ';
      }
    }
    std::cout << std::endl;
  }
    
  return 0;
}
