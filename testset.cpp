#include <iostream>
#include <set>

using namespace std;

struct A{
  int m;
  int k;
};

typedef struct IsEqual
{
  IsEqual ( A& left ,_A & right)
  {

  }
};

int main()
{
  set<sInfo>setS;
  sInfo stuInfo;

  stuInfo.nID = 10;
  stuInfo.strName = "test1";
  setS.insert(stuInfo);

  stuInfo.nID = 20;
  stuInfo.strName = "test2";
  setS.insert(stuInfo);

  set<sInfo>::iterator sIter;
  for(sIter=setS.begin(); sIter!=setS.end(); sIter++)
  {
    cout <<(*sIter).nID <<" "<< (*sIter).strName << endl;
  }

  set<int>a;
  set<int>b;
  set<int>c;
  set<int>d;
  set<int>e;

  a.insert(1);
  a.insert(2);
  a.insert(3);
  a.insert(4);
  a.insert(5);

  b.insert(3);
  b.insert(4);
  b.insert(5);

  set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
  set<int>::iterator s;
  for(s=c.begin(); s!=c.end(); s++)
  {
    cout <<(*s)<<",";
  }
  cout << endl;

  set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(d, d.begin()));
  for(s=d.begin(); s!=d.end(); s++)
  {
    cout <<(*s) <<",";
  }
  cout << endl;

  set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(e, e.begin()));
  for(s=e.begin(); s!=e.end(); s++)
  {
    cout <<(*s)<<",";
  }
  cout <<endl;

  return 0;
}
