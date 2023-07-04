#include <iostream>
#include <vector>
#include <algorithm>

int cnt[21];
std::vector<std::vector<int> > score;
int main()
{
    int T;
    std::cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N;
        std::cin >> N;
        cnt[i]=1;

        score.resize(N + 1, std::vector<int>(2));

        for (int j = 1; j <= N; j++)
        {
            std::cin >> score[j][0] >> score[j][1];
        }

        std::sort(score.begin() + 1, score.end());

        int max_score = score[1][1];
        for (int k = 1; k <= N; k++)
        {
            if (score[k][1] < max_score)
            {
                cnt[i]++;
                max_score = score[k][1];
            }
        }
    }

    for (int i = 1; i <= T; i++)
    {
        std::cout << cnt[i] << std::endl;
    }
    return 0;
}
