// Max Min
#include <bits/stdc++.h>

using namespace std;
#define ALL(x) (x).begin(), (x).end()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
// Complete the maxMin function below.
int maxMin(int n, int k, vector<int> arr)
{
  int i = 0, ans = 0, res = 1000000007;
  sort(arr.begin(), arr.end());
  while (i < n)
  {
    for (int j = i; j < i + k; ++j)
    {
      ans = arr[j + k - 1] - arr[j];
      res = min(res, ans);
    }
    i += k;
  }
  return res;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    int arr_item;
    cin >> arr_item;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    arr[i] = arr_item;
  }

  int result = maxMin(n, k, arr);

  fout << result << "\n";

  fout.close();

  return 0;
}
