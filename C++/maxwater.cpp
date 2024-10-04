#include <bits/stdc++.h>
using namespace std;

int main()
{
  int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int n = sizeof(height) / sizeof(height[0]);
  int left = 0;
  int right = n - 1;
  int area = 0;

  while (left < right)
  {
    int length = min(height[left], height[right]);
    int breadth = right - left;
    area = max(area, length * breadth);

    if (height[left] < height[right])
    {
      left++;
    }
    else
    {
      right--;
    }
  }
  cout << area;
  return 0;
}
