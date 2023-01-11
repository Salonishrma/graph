#include <iostream>
#include<queue>
using namespace std;

void BFS(int i,int A[][8],int n){//i is the vertex from where i want to start visit
queue<int>q;
int visited[8]{0};//visited size is 8 and all are fill with zero initially
cout<<i<<" "<<flush; //i is the first vertices
visited[i]=4;
q.emplace(i);
while(!q.empty()){//until all the vertex are not visited & queue is not empty
int u=q.front();//storing it in a variable as we are going to delete it in next step
q.pop();
for(int v=1;v<=n;v++){ // as matrix start from one so v=1 
if(A[u][v]==1 && visited[v]==0){
    cout<<v<<" "<<flush;
    visited[v]=1;
    q.emplace(v);
}
}
}
cout<<endl;
}
int main()
{
    int A[8][8]={{0, 0, 0, 0, 0, 0, 0, 0},
                 {0, 0, 1, 1, 1, 0, 0, 0},
                 {0, 1, 0, 1, 0, 0, 0, 0},
                 {0, 1, 1, 0, 1, 1, 0, 0},
                 {0, 1, 0, 1, 0, 1, 0, 0},
                 {0, 0, 0, 1, 1, 0, 1, 1},
                 {0, 0, 0, 0, 0, 1, 0, 0},
                 {0, 0, 0, 0, 0, 1, 0, 0}};
    cout<<"vertex :4->"<<flush;
    BFS(4,A,8);
    return 0;
}
