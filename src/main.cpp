#include <iostream>

using namespace std;

int a = 10;

int c = 22;

int main()
{
    std::cout << "current branch is E" << std::endl;
    std::cout << "master brach commit fifth time" << std::endl;
    std::cout << "feature brach modify and merge" << std::endl;

    // step1:feature 分支开发代码
    // step2:feature 分支提交代码
    // step3:checkout到master分支，并git pull origin master同步最新的master分支代码
    // step4:git merge feature 请求合并feature分支，会存在冲突，需要处理
    // step5:git commit -a 提交合并

    // how to use git rebase
    return 0;
}