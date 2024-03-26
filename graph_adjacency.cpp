#include <iostream>
#include<map>
#include<bits/stdc++.h>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adj;
    int mat[100][100];
    void initialisemat(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                mat[i][j]=0;
            }
        }
    }
    void addinmat(int u,int v,bool direct){
        mat[u][v]=1;
        if(direct!=true){
            mat[v][u]=1;
        }
    }
    void addinadj(int u,int v,bool direct)
    {
        adj[u].push_back(v);
        if(direct!=true){
            adj[v].push_back(u);
        }
    }
    void printmat(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<mat[i][j]<<"  ";
                
            }
            cout<<endl;
        }
    }
    void printadj(){
        for(auto i:adj){
            int u=i.first;
            cout<<u<<":";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    cout<<"enter no. of nodes:"<<endl;
    cin>>n;
    int m;
    cout<<"enter no. of edges:"<<endl;
    cin>>m;
    int u,v;
    graph g;
    g.initialisemat(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        g.addinmat(u,v,false);
        g.addinadj(u,v,false);
    }
    g.printmat(n);
    g.printadj();
    
    return 0;
}
