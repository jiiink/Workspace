// STL�� ������� �ʰ� ���� Complete Tree�� ������ Heap�� ����ϴ� ����

#include <iostream>
using namespace std;

const int HeapSize = 1000;
enum Boolean{FALSE, TRUE};

template <class Type>
class Element {
      public:     Type key;
};

template <class Type>
class MaxPQ {
public:
    virtual void Insert(const Element<Type>&) = 0;
    virtual Element<Type>* DeleteMax(Element<Type>&) = 0;
};

template <class Type>
class MaxHeap : public MaxPQ<Type>{
    public:
    	MaxHeap (int sz = HeapSize) 	{
    	    MaxSize = sz; n = 0;
    	    heap = new Element<Type> [MaxSize + 1]; // Don't want to use heap[0]
    	};
       void display();
       void Insert(const Element<Type>& x);
       Element<Type> *DeleteMax(Element<Type>&);
    private:
       Element<Type> *heap;
       int n;        // current size of MaxHeap
       int MaxSize;  // Maximum allowable size of MaxHeap

       void HeapEmpty() { cout << "Heap Empty" << "\n";};
       void HeapFull()  { cout << "Heap Full";};
};

template <class Type>
void MaxHeap<Type>::display() {
     int i;
     cout << " [" ;
     for(i=1; i <= n; i++) cout << heap[i].key << ",";
        cout << " ] \n";
}

template <class Type>
void MaxHeap<Type>::Insert(const Element<Type>& x) {
   int i;
   if(n == MaxSize) { HeapFull(); return; }
   n++;
   for (i = n;;) {  // modified ( replace int i -> i)
        if (i == 0) break; // at root
        if (x.key <= heap[i/2].key) break;
        // move from parent to i
        heap[i] = heap[i/2];
        i /= 2;
   }
   heap[i] = x;
} // end of Max_Heap:insert( )

template <class Type>
Element<Type>* MaxHeap<Type>::DeleteMax(Element<Type>& x) {

   if (!n) {HeapEmpty(); return 0;}
   x = heap[1]; Element<Type> k = heap[n]; n--;
   int i,j ;
   for ( i = 1, j = 2; j <= n; )    {
       if ( j < n) if (heap[j].key < heap[j+1].key) j++;
       // j points to the larger child
       if (k.key >= heap[j].key) break;
       heap[i] = heap[j];
       i = j; j *= 2;
   }
   heap[i] = k;
   return &x;
} // end of MaxHeap:delte( )


int main() {
    MaxHeap<int> m(20);
    Element<int> a, b, c, d, e, f, g, h, i, j, k, l;
       a.key = 5; b.key = 3; c.key = 11; d.key = 3; e.key = 15;
       f.key = 2; g.key = 8; h.key = 22; i.key = 20; j.key = 9;

       m.Insert(a); m.Insert(b); m.Insert(c);
       m.Insert(d); m.Insert(e); m.Insert(f);
       m.Insert(g); m.Insert(h); m.Insert(i);
       m.Insert(j);
       Element<int> x;
       cout << "�ʱ� Heap, " ;
       m.display();
       cout << "\n\n" ;
       // cout << (*m.DeleteMax(x)).key << "\n"; //removed.

       cout << (*m.DeleteMax(x)).key << " ���� �� \n";
       m.display(); cout <<  "\n" <<  (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display(); cout <<  "\n" << (*m.DeleteMax(x)).key << " ���� ��\n";
       m.display();

} // end of main( )
