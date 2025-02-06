#include <stdio.h>

void returnLeaders(int *nums, int n, int *ans, int *n_ans);

int main(void)
{
    int n = 6;
    int nums[] = {16, 17, 4, 3, 5, 2};
    int ans[6];
    int n_ans;
    returnLeaders(nums, n, ans, &n_ans);
    printf("Following are the leaders:\n");
    for (int i = 0; i < n_ans; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}

void returnLeaders(int *nums, int n, int *ans, int *n_ans)
{
    int leader;
    *n_ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        leader = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] < nums[j])
            {
                leader = 0;
                break;
            }
        }
        if (leader == 1)
        {
            ans[(*n_ans)++] = nums[i];
        }
    }
    ans[(*n_ans)++] = nums[n - 1];
}