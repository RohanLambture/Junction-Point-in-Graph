#include<bits/stdc++.h>
using namespace std;

vector<char> reachable_vertices(char a,vector<vector<char>>&graph){
    vector<char> ans;
    queue<char> bfs;
    vector<int>visited(200,0);
    bfs.push(a);
    while(!bfs.empty()){
        char curr=bfs.front();
        bfs.pop();
        for(int i=0;i<graph[(int)curr-'A'].size();i++){
            int index=(int)graph[(int)curr-'A'][i]-'A';
            if(visited[index]==0){
            	bfs.push(graph[(int)curr-'A'][i]);
                ans.push_back(graph[(int)curr-'A'][i]);
                visited[index]=1;
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

void takeVertex(vector<char>&vertex,int t){
     for(int k=0;k<t;k++){
        char x;
        cin >> x;
        vertex.push_back(x);
    }
}

int main(){
    int t;
    cin >> t;
    vector<char>vertex;
    // vector<char>temp;
    takeVertex(vertex,t);
    int a;
    cin >> a;
    vector<vector<char>>graph(200);
    for(int i=0;i<a;i++){
        char x,y;
        cin >> x >> y;
        graph[(int)x-'A'].push_back(y);
    }
    int line;
    cin >> line;
    if(line==1){
        //first question
        char a;
        cin >> a ;
        for(auto it:reachable_vertices(a,graph)){
            cout << it << " ";
        }
        cout << endl;
        // cout << reachable_vertices << endl;
    }
}