#include <iostream>
#include <vector>
using namespace std;


/* Component class is the interface (lowest common denominator) */

class Component {
    public:
        virtual void traverse() = 0;
};

/* Leaf is a class derived from component so leaf is a component */

class Leaf: public Component {
    int value;
    public:
        Leaf(int val) {
            value = val;
        }
        void traverse() {
            cout << value << ' ';
        }
};

class Composite: public Component {
    std::vector < Component* > children;
    public:
        void add(Component *ele) {
            children.push_back(ele);
        }

        void traverse() {
            for (int i = 0; i < children.size(); i++) {
                children[i]->traverse();
            }
        }

};

int main()
{
  Composite containers[4];
  int i, j;
  for (i = 0; i < 4; i++)
    for (j = 0; j < 3; j++)
      containers[i].add(new Leaf(i *3+j));

  for (i = 1; i < 4; i++)
    containers[0].add(&(containers[i]));

  for (i = 0; i < 4; i++)
  {
    containers[i].traverse();
    cout << endl;
  }
}