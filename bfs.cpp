void bfs(vector<vector<int>> &adj,unordered_map<int,bool>&visit,int i,vector<int>&ans){
    queue<int>q;
    q.push(i);
    visit[i]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto j:adj[front]){
             if(!visit[j]){
                 q.push(j);
                 visit[j]=1;
             }
        }
    }
}


vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    
   unordered_map<int,bool>visit;
   for(int i=0;i<n;i++){
       visit[i]=0;
   }
   vector<int>ans;
  
           bfs(adj,visit,0,ans);
   
   return ans;
}
