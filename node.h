class node {
private:
  char mItem;
  node* mParent;
  int mRank;
    
public:
  node(char item) {
    mItem = item;
    mParent = this;
    mRank = 0;
  }

  char getName() {
    return mItem;
  }

  node* getRepresentative() {
    if(mParent != this)
      return mParent->getRepresentative();
    return this;
  }
    
  int getRank() {
    return mRank;
  }
    
  void setRank(int rank) {
    mRank = rank;
  }

  void setRepresentative(node* representative) {
    mParent = representative;
  }

  void makeUnion(node* other) {
    Link(findSet(this), findSet(other));
  }
    
  static void Link(node* x, node* y) {
    if(x->getRank() > y->getRank()) {
      y->setRepresentative(x);
    } else {
        x->setRepresentative(y);
        if(x->getRank()==y->getRank()) {
           y->setRank(y->getRank()+1);
        }
    }
  }
    
  static node* findSet(node* x) {
    if(x->getRepresentative() != x)
        x->setRepresentative(findSet(x->getRepresentative()));
    return x->getRepresentative();
  }
};
