#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "

using namespace std ;


int main() {

   vector <int> Count {1,2,3,4,5} ;
   vector < queue<int> > Sque ;
   queue  <int> *mymy ;

  int x = 0 ;
  for(auto w: Count){
     ++x ;
     mymy = new queue<int> ( ) ;  //���ο� ť(queue)�� �� �� ������.
     mymy->push( x ) ;
     Sque.push_back( *mymy ) ;
  }
}

