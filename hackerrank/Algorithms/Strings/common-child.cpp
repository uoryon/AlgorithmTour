// copyright suhai
#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int main() {
  char a[5003], b[5003];
  int u = 0, max = 0, i, j;
  int lena, lenb;
  std::vector< pair <int, int> > v;
  scanf("%s", a);
  scanf("%s", b);
  lena = strlen(a);
  lenb = strlen(b);
  for (i = 0; i < lena; i++) {
    for (j = 0; j < lenb; j++) {
      if (a[i] == b[j]) {
        v.push_back(make_pair(i, j));
      }
    }
  }
  do {
    int most = 0;
    int index = 0;
    int *len = new int[v.size()]();
    for (i = 0; i < v.size(); i++) {
      pair<int, int> pi = v[i];
      for (j = 0; j < v.size(); j++) {
        if (i == j) continue;
        pair<int, int> pj = v[j];
        if (pi.first == pj.first ||
              pi.second == pj.second ||
              (pi.first - pj.first > 0 && pi.second - pj.second < 0) ||
              (pi.first - pj.first < 0 && pi.second - pj.second > 0)) {
          len[i]++;
        }
      }
    }
    for (i = 0; i < v.size(); i++) {
      if (most < len[i]) {
        index = i;
        most = len[i];
      }
    }
    if (most == 0) {
      break;
    } else {
      v.erase(v.begin()+index);
    }
  }while(1);
  printf("%lu\n", v.size());
  return 0;
}
