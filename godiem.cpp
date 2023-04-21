#include <bits/stdc++.h>
#define khong readData
#define ai solve
#define hoi main
#define asked return 0;

using namespace std;

bool canGoDiem; //cần gỡ điểm

void khong(){
  cout << "May co can go diem ko? (1/0)";
  cin >> canGoDiem;
  while(canGoDiem != 0 && canGoDiem != 1){
    cout << "May co can go diem ko? (1/0)";
    cin >> canGoDiem;
  }
}

void ai(){
  if(canGoDiem) cout << "full tiêu đề + ghi nhớ 2 chương cuối";
  else cout << "full tiêu đề 2 chương cuối";
}

int hoi(){
    cin.tie(0) -> sync_with_stdio(0);

    khong();
    ai();
    asked;
}
